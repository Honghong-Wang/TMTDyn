%% initialize
close all
clear all
format shorte
clc
pause( 1 )

addpath('./hll');


%% parameters
n_l = 4 ; % number of segments

l_s = 50e-3 ; %44e-3 ; % manipulator length
r_s1 = 4.5e-3 ; % manipulator inner radius
r_s2 = 12.5e-3 ; % manipulator outer radius
r_p1 = 2.5e-3 ; % 2.25e-3 pressure chamber inner radius
r_p2 = 3e-3 ; % pressure chamber outer radius
r_t = 0.2e-3 ; % braid diameter
gamma = pi / 2 - acos( 1 - r_t ^ 2 / 2 / r_p2 ^ 2 ) ;
r_o = 8.5e-3 ; %8.4e-3
phi_o = acos( 1 - r_p2 ^ 2 / 2 / r_o ^ 2 ) ;
r_od = [ cos( 3*pi/6 + phi_o )  sin( 3*pi/6 + phi_o )  0 ; % according to Ali's inputs
         cos( 3*pi/6 - phi_o )  sin( 3*pi/6 - phi_o )  0 ;
         cos( -pi/6 + phi_o )   sin( -pi/6 + phi_o )   0 ;
         cos( -pi/6 - phi_o )   sin( -pi/6 - phi_o  )  0 ;
         cos( 7*pi/6 + phi_o )  sin( 7*pi/6 + phi_o )  0 ;
         cos( 7*pi/6 - phi_o )  sin( 7*pi/6 - phi_o )  0 ] ;

m_f = 13.47e-3 ; % force sensor and its mount mass
l_f = 14.5e-3 ; %17e-3 ;
r_f = 7.5e-3 ;

g_x = 0 ; g_y = 0 ; g_z = 9.81 ; % gravity
sigma_s = 1.4 * 1300 ; % silicon density

E_s =205e3 ; % 130e3, 205e3
mu_pow = 1 ; % < 1: rate thining, > 1: rate thikening
mu_x = 1e-1 ; % 1e-1
mu_y = 1e-1 ;
mu_z = 1e-1 ;
mu_xx = 1e-3 ; % 1e-4
mu_yy = 1e-3 ;
mu_zz = 1e-3 ;


%% variables
% symbolic parameters to be changed after EOM derivation
syms sigma_s_ E_s_ r_s1_ r_s2_ r_p1_ l_s_ ...
    mu_x_ mu_y_ mu_z_ mu_xx_ mu_yy_ mu_zz_ mu_pow_ ...
    g_x_ g_y_ g_z_ lambda_ m_f_ l_f_ r_f_ r_o_ gamma_ ...
    p1_ p2_ p3_ p4_ p5_ p6_ ...
    f_tx_ f_ty_ f_tz_ tau_tx_ tau_ty_ tau_tz_ real
vars = [ sigma_s_ E_s_ r_s1_ r_s2_ l_s_ mu_x_ mu_y_ mu_z_ ...
    mu_xx_ mu_yy_ mu_zz_ mu_pow_ g_x_ g_y_ g_z_ m_f_ l_f_ r_f_ ...
    r_p1_ r_o_ gamma_ p1_ p2_ p3_ p4_ p5_ p6_ f_tx_ f_ty_ ...
    f_tz_ tau_tx_ tau_ty_ tau_tz_ lambda_ ] ;

% parameter values, can be changed after derivations
var_vals = [ sigma_s, E_s, r_s1, r_s2, l_s, mu_x, mu_y, mu_z, mu_xx, mu_yy, ...
    mu_zz, mu_pow, g_x, g_y, g_z, m_f, l_f, r_f, r_p1, r_o, gamma, zeros(1,12) , 1 ] ;

% simplification
mu_pow_ = mu_pow ;


%% exp. readings
exp_case = 1 ; % experiment scenario
[ p , tip_pos , tip_RQ , f_ex , t_exp , t_exp_equil ] = sample_exp_data( var_vals , exp_case ); % motor input and robot tip position from a sample experiment

% user_pars contains other data sets such as inputs, experimental data, etc.
user_pars.p = p ;
user_pars.tip_pos = tip_pos ;
user_pars.tip_RQ = tip_RQ ;
user_pars.f_ex = f_ex ;

user_pars.n_l = n_l ;


%% preprocess
l_ss = l_s_ / n_l ; % segment length
a_aw = pi * ( r_s2_.^ 2 - r_s1_.^ 2 - 6 * r_p1_.^ 2 ) ; % no change
m_s = a_aw * l_s_ * sigma_s_ ;  % manipulator mass
r_ov = r_o_ * r_od / sqrt( lambda_ ) ;
r_p1_ = r_p1_ * sqrt( 1 - lambda_.^ 2 * cos( gamma_ ) ^ 2 ) / sin( gamma_ ) ;
a_p = pi * r_p1_.^ 2 ;
a_aw = pi * ( ( r_s2_.^ 2 - r_s1_.^ 2 ) / lambda_ - 6 * r_p1_.^ 2 ) ;
m_ss = m_s / n_l ; % manipulator segment mass
G_s = E_s_ / 3 ;
I_aw =  [ 1 1 2 ] * 1 / 4 * pi * ( ( r_s2_.^ 4 - r_s1_.^ 4 ) / lambda_.^ 2 - 6 * r_p1_.^ 4 ) ...
    - a_p * diag( r_ov.' * r_ov ).' ;
K_v = diag( [ G_s G_s E_s_ ] ) * a_aw / l_ss / lambda_ ; % ( l_ss / lambda_ ) to get deformation not strain
K_u = diag( [ E_s_ E_s_ G_s ] ) * diag( I_aw ) / l_ss / lambda_ ; % ( l_ss / lambda_ ) to get angles not curvatures/torsion
I_ss = diag( ... % COM (joint location) is mid link
    sigma_s_ * pi * (r_s2_.^2-r_s1_.^2) * l_ss * ( ...
    [ 1/12*(3*(r_s2_.^2+r_s1_.^2)/lambda_+(l_ss*lambda_).^2) , ...
    1/12*(3*(r_s2_.^2+r_s1_.^2)/lambda_+(l_ss*lambda_).^2) , ...
    1/2*(r_s2_.^2+r_s1_.^2)/lambda_ ] ) ) ; % manipulator segment inertia
I_f = diag( [ 1/12*m_f_*(3*r_f_^2+l_f_.^2) 1/12*m_f_*(3*r_f_.^2+l_f_.^2) 1/2*m_f_*r_f_.^2 ]...
    + m_f_ * (l_f_/2).^2 * [ 1 1 0 ] ) ; % tip force sensor segment inertia
p = [ p1_ p2_ p3_ p4_ p5_ p6_ ] ;
f_p = [ 0 0 p*ones(6,1)*a_p ] ;
tau_p = p * a_p * [ r_ov(:,2) -r_ov(:,1) r_ov(:,3) ] ;
        

%% robot
% break DSL down to smaller pieces to prevent Matlab from complaining about too complex arguments!
results = ...
    tmtdyn()...
        .simulation()... % simulation
            .variables(vars, var_vals)...
            .user_parameters(user_pars)...
            .derive_eom('no')... % 'full_system', 'assume_small_velocities', 'no'
                .optimize_code()...
            .analysis()...
                .static_sim('generate_mex_file', t_exp_equil)... % edited_m_file, generate_m_file, generate_mex_file, old_mex_file, generate_mex_from_edited_m_file, generate_mex_from_c_files
                .dynamic_sim('generate_mex_file', 'matlab', t_exp(1), t_exp(end))... % matlab, sundials_ode, sundials_dae, radau, radau_mex, external
                .results_sample_rate(1e2)...
            .post_process()...
                .animate('tube', 'show_frame', 30, 20, 20)... % ({null 'none', 'show_frame', 'side_views', 'show_frame_side_views'}, fps, axis edges, cross-section edges) 
                .record_video()...
                .number_of_reports(1)...
                .run_user_code() ;            
results = results...
        .world()... % world
            .g([g_x_, g_y_, g_z_])...
        .robot('series_rigid_link_arm')... % robot
            .body('rigid_link')...
                .with_mass(m_ss)...
                .with_inertia(I_ss)... % COM at the joint
                .with_cross_section_radius(1/sqrt(lambda_)*r_s2_)...
                .connected_to_repeated_joint(1:n_l)...
                    .with_transformation_from_body()... % leave empty for connection to ground
                        .translation([inf,inf,inf])... % axial translation w.r.t. previous joint copy
                            .dof(3)...
                                .initial_value(( 1:n_l ).' * l_ss)... % init_s will be asigned automatically if nto specified
                        .rot_unit_quat([inf, inf, inf])...
            .compliance_beam_with_repeated_elements('EB_beams', 1:n_l)...
                .from_body(1, 0:n_l-1)...
                .to_body(1, 1:n_l)...
                .beam_cross_section_radius(1/sqrt(lambda_)*r_s2_)...
                .beam_stiffness()...
                    .coefficient([ diag( K_v ).' diag( K_u ).' ])...
                    .relaxed_state([ 0 0 nan 0 0 0 ])...
                .beam_damping()...
                    .viscosity([ mu_x_ mu_y_ mu_z_ mu_xx_ mu_yy_ mu_zz_ ])...
                    .power(mu_pow_)...
                .beam_internal_actuation([ f_p tau_p ]) ;
results = results...
            .body('tip_force_sensor')...
                .with_mass(m_f_)...
                .with_inertia(I_f)...
                .with_center_of_mass_at( [ 0 0 l_f_/2 ] )...
                .with_tip_at( [ 0 0 l_f_ ] )...
                .with_cross_section_radius(r_f_)...
                .connected_to_joint()...
                    .with_transformation_from_body(1,n_l)... % mass at the last link tip with no extra transformation
            .exload('tip_load')...
                .exerted_on_body_with_transformation(2)... % >> transformation
                    .translation([0 0 l_f_])... % axial translation w.r.t. previous joint copy
                .force([f_tx_, f_ty_, f_tz_])...
                .moment([tau_tx_, tau_ty_, tau_tz_])...
        .run() ;
    

