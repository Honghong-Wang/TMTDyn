%% initialize
close all
clear all
format shorte
clc
pause( 1 )

% addpath('./tmtdyn','./tmtdyn/sundials_matlab','./tmtdyn/radau','./tmtdyn/funcs','./hll','./eom');
addpath('./hll');


%% parameters
n_p = 3 ; % polynomial order
n_tube = 2 ;
l_s = [ 160, 160 ] * 1e-3 ; % initial length: [inner(longer, introducer) outer(shorter, catheter)] tubes
r_s = 0.5 * ... % tube [ inner outer ] radius
      [ 0, 16 ; % inner tube: introducer
        23, 28 ] * 1e-3 ; % outer tube: catheter
r_w = 0.45e-3 / 2 ;
r_wo = ( r_s(2,1) + r_s(2,2) ) / 2 ;

g_x = 0 ; g_y = 0 ; g_z = -9.81 ; % gravity downward by default
sigma_s = [ 6400, 6400 ] ; % tube density

E_s = [ 210, 210 ] * 1e9 ; % catheter and introducer material density sillicon rubber, steel
G_s = E_s / 3;

mu_pow = 1 ; % < 1: rate thining, > 1: rate thikening
mu_MC = 1e-18 ; % Rayleigh damping M coefficients
mu_KC = 5e-3 ; % 5e-3 for 2inputs & 5e-2 for 3inputs, Rayleigh damping K coefficients


%% exp. readings
% case 1: simple motion, robot is upward
% case 2: workspace study, robot is upward, no introducer
% case 3: introducer tip load study and motion, robot is downward
% case 4: catheter tip lateral force
% case 5: new introducer motion and catheter tip load, robot is downward

exp_case = 1;
[motor_in, tip_pos, tip_load, g_dir] = exp_v0(exp_case, l_s); % random sim

g_z = g_dir * g_z ; % adjust experiment frame gravity direction

dl0 = motor_in.pos(1,6) ;
t_end = motor_in.pos(end,1);


%% variables
syms s sigma_s1_ sigma_s2_ E_s1_ E_s2_ G_s1_ G_s2_ ...
    r_s11_ r_s12_ r_s21_ r_s22_ ...
    mu_KC_ mu_pow_ g_x_ g_y_ g_z_ ...
    l_s1_ l_s2_ l_ex_ dl_ kappa_x_ kappa_y_ ...
    f_tx_ f_ty_ f_tz_ tau_tx_ tau_ty_ tau_tz_ real
vars = [ sigma_s1_ sigma_s2_ E_s1_ E_s2_ G_s1_ G_s2_ ...
    r_s11_ r_s12_ r_s21_ r_s22_ ...
    mu_KC_ mu_pow_ g_x_ g_y_ g_z_ ...
    l_s1_ l_s2_ l_ex_ dl_ kappa_x_ kappa_y_ ...
    f_tx_ f_ty_ f_tz_ tau_tx_ tau_ty_ tau_tz_ ] ;

var_vals = [sigma_s(1), sigma_s(2), E_s(1), E_s(2), G_s(1), G_s(2), r_s(1,1), r_s(1,2), r_s(2,1), r_s(2,2), ...
    mu_KC, mu_pow, g_x, g_y, g_z, l_s(1), l_s(2), 0, dl0, 0, 0, zeros(1,6)] ;

user_pars.n_t= n_p ;
user_pars.motor_in = motor_in ;
user_pars.tip_pos = tip_pos ;
user_pars.tip_load = tip_load ;


%% simplified variables
mu_pow_ = mu_pow;


%% inputs
f_e = [ f_tx_ f_ty_ f_tz_ ] ;
tau_e = [ tau_tx_ tau_ty_ tau_tz_ ];


%% preprocess
r_s_ = [ r_s11_, r_s12_; r_s21_, r_s22_ ];
l_s_ = [ l_s1_, l_s2_ ];
sigma_s_ = [ sigma_s1_ sigma_s2_ ];
E_s_ = [ E_s1_, E_s2_ ] ;
G_s_ = [ G_s1_, G_s2_ ] ;

for i = 1 : n_tube % # of tubes
    % bent part
    a_aw = 2 * pi * ( r_s_(i,2).^ 2 - r_s_(i,1).^ 2 ) ; % wires are pair, no cross-section change
    m_ss(i) = a_aw * sigma_s_(i) ;  % manipulator mass
    I_aw =  [ 1 1 2 ] * 1 / 4 * pi * ( r_s_(i,2).^ 4 - r_s_(i,1).^ 4 ) ;
    K_v(i,:) = ( [ G_s_(i) G_s_(i) E_s_(i) ] ) * a_aw ; % to get deformation not strain 
    K_u(i,:) = ( [ E_s_(i) E_s_(i) G_s_(i) ] ) .* ( I_aw ) ; % to get angles not curvatures/torsion 
    I_ss(:,:,i) = diag( sigma_s_(i) * pi * (r_s_(i,2).^2-r_s_(i,1).^2) * ...
                        [ 1/12*3*(r_s_(i,2).^2+r_s_(i,1).^2) , ...
                          1/12*3*(r_s_(i,2).^2+r_s_(i,1).^2) , ...
                          1/2*(r_s_(i,2).^2+r_s_(i,1).^2) ] ) ; % manipulator segment inertia
end

% wire related bending elasticity
I_w = pi * r_w^2 * r_wo^2 ; % only one of the tendons (opposing one) contributes
% K_u(1,1:2) = 0 ;
K_u(2,1:2) = E_s_(2) * I_w ; % negligible bending stiffness from the structure due to the joints


%% Variable parameters along length: addition of values for initial part but the catheter values vanish on the top part
% Logistic fuction 
lfv = [ 1, 1-logfunc(s,l_s2_) ] ; % tip growing

% radius for animation
r_s_all = [ logfunc(s,l_s2_), 1-logfunc(s,l_s2_) ] * r_s_(:,2) ;

% mass % Inertia
dm = lfv * m_ss(1:2).' ;
dI = lfv * I_ss(1:2).' ;

% steering curvature
kappa_x = lfv * [0; kappa_x_] ;
kappa_y = lfv * [0; kappa_y_] ;

% elasticity for catheter
K_v_all = lfv * [ K_v(1,:); K_v(2,:) ] ;
K_u_all = lfv * [ K_u(1,:); K_u(2,:) ] ;


%% robot
results = ...
    tmtdyn()...
        .simulation()... % simulation
            .variables(vars, var_vals)...
            .user_parameters(user_pars)...
            .derive_eom('no')... % 'full_system', 'assume_small_velocities', 'no'
                .plot_initial_conditions('final')... % 'all', 'final'
                .collect_terms('separate_structures')...
                ...free_up_memory()...
                .optimize_code()...
            .analysis()...
                ...static_sim('generate_mex_file', [2.55, 9.15, 18, 41])... % edited_m_file, generate_m_file, generate_mex_file, old_mex_file, generate_mex_from_edited_m_file, generate_mex_from_c_files
                .dynamic_sim('generate_mex_file', 'radau', 0, t_end)... % matlab, sundials_ode, sundials_dae, radau, radau_mex, external
                .Rayleigh_damping_coefficients(mu_MC, mu_KC_)... % , 'adaptive_svd'
                .results_sample_rate(1e1)...
                .spatial_integration_step(1e1)...
                .report_time_intervals(1e0)...
            .post_process()...
                ...animate('tube', 'show_frame', 1, 20, 20)... % ({null 'none', 'show_frame', 'side_views', 'show_frame_side_views'}, fps, axis edges, cross-section edges) 
                ...record_video()...
                .number_of_reports(1)...
                .run_user_code() ;
results = results... % to prevent matlab error for complex argument
        .world()... % world
            .g([g_x_, g_y_, g_z_])...
        .robot('Izad')... % robot
            .body('growing')...
                .with_mass(m_ss(2))...
                .with_inertia(I_ss(:,:,2))...
                .with_cross_section_radius(r_s_all)...
                .connected_to_joint()...
                    .rom()...
                        .default_order(n_p)...
                        .default_fit_type('spline_logistic_func', l_s2_)... % spline_piecewise, spline_logistic_func
                        .length(0, l_s1_+dl_)...
                        .fixed_inital_values()...
                    .with_transformation_from_body()...
                        .translation([inf, inf, inf])...
                            .dof(1)...
                                .base_value(0)...
                                .base_director(0)...
                            .dof(2)...
                                .base_value(0)...
                                .base_director(0)...
                            .dof(3)...
                                .base_value(0)...
                                .base_director(1)...
                                .initial_value_axial_locations([0,1])... % dummy input to keep it straight
                                .initial_value([0,1])... % dummy input to keep it straight
                        .rot_simple_curvilinear_frame([0, 0, 1])...
                        .rot_z()...                                
                            .base_value(0)...
                    .beam_stiffness()...
                        .coefficient([ K_v_all K_u_all ])...
                        .relaxed_state([0, 0, 1, kappa_x, kappa_y, 0])...
                    ...beam_damping()...
                        ...viscosity(mu_KC_*[ K_v_all K_u_all ])...
                        ...power(mu_pow_)...
                    .beam_simplify_for_curvlinear_frame([0, 0, 1]);
results = results... % to prevent matlab error for complex argument
            .exload('body_point_load')...
                .exerted_on_body(1, 1, l_ex_)... % [n_body, n_copy, curve_length]
                ...exerted_on_body_tip(1,1)... % [n_body, n_copy]
                .force(f_e)...
                .moment(tau_e)...
        .run();
    

function lf = logfunc(s,l)
lf = 1 / ( 1 + exp(-200 * ( s - l ) ) ) ;
end

