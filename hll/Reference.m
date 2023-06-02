tmtdyn()... % main object
	.simulation()... % simulation
		.var(symbolic_vars_vec, var_values_vec)... % simulation variables & their current values
		.variables(symbolic_vars_vec, var_values_vec)... % input variables & their current values
		.user_pars(value_vac)... % any other variable needed for simulation
		.user_parameters(value_vac)... % same as user_pars
		.derive_eom(select)... % 'full_system', 'assume_small_velocities', 'no'
			.use_cpu_cores(core_no)...
			.use_single_cpu_core()...
			.collect_terms(collection_type)... % 'single_structures', 'separate_structures', 'separate_functions', 'C_functions', 'collect_most_terms'; choose 'separate_functions' if you have limited amount of memory
			.simplify_derivations(select, duration_or_precision)... % select: 'symbolic' , 'decimal' , 'symbolic_decimal'
            .optimize_code()...
            .free_up_memory()...
			.assume_sparse_matrix()...
            .convert_piecewise_to_logistic_function()... % results in smaller m_functions but more computation in simulation time, not compatible with parallel toolbox
			.use_mex()... % use mex functions except for the final EOM function
            .plot_initial_conditions(select)... % 'all', 'final'; 'final' only plots the ROM elements & skips others!
            .numerical_time_differentiation(dq)... % use central difference with the specified dq instead of analytical partial (w.r.t. states) differentiation
		.analysis()...
			.static_sim(method, times_vec)... % method in {'generate_m_file', 'edited_m_file', 'generate_mex_file', 'old_mex_file', 'generate_mex_file_from_edited_m_file', 'update_parameters_only'}; 'update_parameters_only' works only when parameters' length remains constant
			.Rayleigh_damping_coefficients(mass_coeff, stiffness_coeff, type)... % Rayleigh (proportional) damping coefficients, define "beam_stiffness().coefficient(coeff)" first, mass_coeff usually must be a double numbler but stiffness_coeff can be set as a symbolic variable, type in {'constant', 'adaptive_svd'}
            .controller_type(type)... % type in {'jacobian_inverse', 'input_output_feedback_linearization', 'weight_compensation_&_attractor_field', 'sliding_mode'}, play with Rayleigh_damping, EOM pinv(,eps), and SUNDIALS RELTOL in demo.h to overcome stiff ODE problems
            .dynamic_sim(method, solver, start_time, end_time, ATol, RTol)... % method in {'generate_m_file', 'edited_m_file', 'generate_mex_file', 'old_mex_file', 'generate_mex_file_from_edited_m_file', 'update_parameters_only'}; 'update_parameters_only' works only when parameters' length remains constant
			...													  % solver in {'matlab', 'sundials_ode', 'sundials_dae', 'radau', 'radau_mex', 'external', 'load_result'}
			.modal(method, time_vec)... % method in {'generate_m_file', 'edited_m_file', 'generate_mex_file', 'old_mex_file', 'generate_mex_file_from_edited_m_file'}
            .report_time_intervals(time)...
			.spatial_integration_step(steps_int)...
			.results_sample_rate(rate_int)... % sim result sample rate
		.post_process()...
			.animate(body_type, anim_frame, fps, axis_edges, circle_edges)... % type = {'line', 'tube'}, anim_frame = {null 'none', 'show_frame', 'side_views', 'show_frame_side_views'}
			.axis_edges(axis_edges)... % number of edges to plot a tube back bone
            .cross_section_edges(circle_edges)... % number of edges to plot tube cross-section
			.record_video()...
			.run_user_code()... % run user post_process code
			.report_time_step(report_time)... % stops simulation each report_time [s] to report results, then continue
			.number_of_reports(report_no)... % stops simulation report_no times to report results, then continue		
	.world()... % simulation world parameters
		.g(gravity_vec)... % gravity vector
	.robot(name)...
		.body(name)...
			.with_mass(mass)...
			.with_inertia(inertia_matrix)...
            .with_cross_section_radius(radius)...
			.with_tip_at(tip_vec)... % position vector in local frame
			.with_center_of_mass_at(com_vec)... % position vector in local frame
			.connected_to_joint()... % >> joint()
			.connected_to_repeated_joint(1:copy_no)... % >> joint()
		.joint(name)...
		.joint_with_repeated_elements(name, copy_no)... % >> joint()
			.rom()...
                .default_fit_type(type, knots)... % type: {'polynomial', 'spline_piecewise', 'spline_logistic_func', 'spline_mesh'}, spline type and knots (not considering axial offset), implements simplification by imposing logistic function on transformations and not DOF axes, will not be overriden later (contradicts the simplification),
                .default_relaxed_state_fit_type(type, knots)... % sets only spring, type: {'polynomial', 'spline_piecewise', 'spline_logistic_func', 'spline_mesh'}
                .default_spline_growth_rate(growth_rate)...
                .use_default_spline_knots()... % override spline knots and conditioning logistic functions
                .default_axial_offset(offset)... % offset the integration range and init_s but not the spline knots, doesn't changes spring_offset
                .default_relaxed_state_axial_offset(offset)... % offset the integration range and init_s but not the spline knots,
                .default_spline_continuity_order(value)...
                .default_order(order_int)...
				.length(length_i, length_e)... % start and end integration range.from_body_frame(condition)... % condition in {'relative', 'absolute'}
				.free_base()...
				.reference_axial_locations(val_vec)... % will be affected by axial offset
				.fixed_inital_values()...
                .numerical_spatial_differentiation()... % use central difference instead of analytical spatial (w.r.t. curve length) differentiation
				.spline_as_separate_bodies()... % model as one body or separate bodies
			.from_body(body_no, copy_no, axial_loc)...
			.from_body_tip(body_no, copy_no)...
			.to_body(body_no, copy_no, axial_loc)...
			.to_body_tip(body_no, copy_no)...
			.with_transformation_from_body(body_no, copy_no, axial_loc)... % >> aka transformation(), pass no arguments for transformation from ground
				.translation(trans_vec)...
				.trans_x(val_or_inf)...
				.trans_y(val_or_inf)...
				.trans_z(val_or_inf)...
                .growing(type)... % curvilinear axal transformation, type in {'none', 'from_tip', 'from_base', 'sliding'}
                .rotation_angle_axis(angle_axis_vec)...
				.rot_x(val)... % leave val empty to set a dof: return a dof object >> aka dof
				.rot_y(val)... % leave val empty to set a dof: return a dof object >> aka dof
				.rot_z(val)... % leave val empty to set a dof: return a dof object >> aka dof
				.rot_strain(strain_vec, init_quat)...
				.rot_frenet_serret(init_tangent_axis)...
                .rot_simple_curvilinear_frame(init_tangent_axis)...
				.rot_bishop_frame(curvature_vec)...
				.rot_unit_quat(unit_quat_vec)...
				.rot_non_unit_quat(non_unit_quat_vec)...
				.dof(i_q)... % i_q = dof numerator in each transformation tr
					.rom_order(order_int)...
					.not_rom()...
					.equal2(vec, n_segm, n_coeff)...
					.similar_to_dof(coeff, i_joint, i_dofAxis, i_copy)...
					.coefficient_similar_to_dof_order(n_coeff, coeff, i_joint, i_dofAxis, i_coeff, i_copy)...
					.coefficient_similar_to_dof_at_axial_location(n_coeff, coeff, i_joint, i_dofAxis, curve_length, i_copy)...
                    .coefficient_similar_to_dof_at_tip(n_coeff, coeff, i_joint, i_dofAxis, i_copy)...
                    .coefficient_similar_to_dof_derivative_at_axial_location(n_coeff, coeff, n_diffOrder, i_joint, i_dofAxis, curve_length, i_copy)...
                    .coefficient_similar_to_dof_derivative_at_tip(n_coeff, coeff, n_diffOrder, i_joint, i_dofAxis, i_copy)...
					.set_rom_coefficient(n_coeff, value)... % will be overriden by continuitu condition if conflicts
					.set_rom_segment_coefficient(n_segm, n_coeff, value)... % will be overriden by continuitu condition if conflicts
					.base_value(value)... % make sure s starts from 0 for it to work properly!
					.base_director(director_double)... % make sure s starts from 0 for it to work properly!
					.base_value_at_axial_location(value, curve_length)... % make sure s starts from 0 for it to work properly!
					.base_director_at_axial_location(director_double, curve_length)... % make sure s starts from 0 for it to work properly!
                    .element_similar_to_dof(n_copy, coeff, i_joint, i_dofAxis, i_copy)...
					.element_coefficient_similar_to_dof_order(n_copy, n_coeff, coeff, i_joint, i_dofAxis, i_coeff, i_copy)...
					.element_coefficient_similar_to_dof_at_axial_location(n_copy, n_coeff, coeff, i_joint, i_dofAxis, curve_length, i_copy)...
                    .element_coefficient_similar_to_dof_at_tip(n_copy, n_coeff, coeff, i_joint, i_dofAxis, i_copy)...
                    .element_coefficient_similar_to_dof_derivative_at_axial_location(n_copy, n_coeff, coeff, n_diffOrder, i_joint, i_dofAxis, curve_length, i_copy)...
                    .element_coefficient_similar_to_dof_derivative_at_tip(n_copy, n_coeff, coeff, n_diffOrder, i_joint, i_dofAxis, i_copy)...
					.element_set_rom_coefficient(n_copy, n_coeff, value)... % will be overriden by continuitu condition if conflicts
					.element_set_rom_segment_coefficient(n_copy, n_segm, n_coeff, value)... % will be overriden by continuitu condition if conflicts
					.element_base_value(n_copy, value)... % make sure s starts from 0 for it to work properly!
					.element_base_director(n_copy, director_double)... % make sure s starts from 0 for it to work properly!
					.element_base_value_at_axial_location(n_copy, value, curve_length)... % make sure s starts from 0 for it to work properly!
					.element_base_director_at_axial_location(n_copy, director_double, curve_length)... % make sure s starts from 0 for it to work properly!
                    .axial_offset(offset)... % offset the integration range and init_s but not the spline knots, doesn't changes spring_offset
					.initial_value(init)...
					.initial_value_from_kinematic_constraint()...
					.initial_value_axial_locations(init_s_vec)... % will be affected by axial offset, init_s will be asigned automatically based on initial values and ROM length if not specified
                    .initial_value_fit_type(type, knots)... % type: {'polynomial', 'spline_piecewise', 'spline_logistic_func'}
					.spline_continuity_order(value)...
                    .parallel_spring()... % >> spring
					.parallel_elements_active_direction(dir_bool_vec)...
					.parallel_damper()... % >> damper
					.direct_input(input_type, force_or_acc_val, vel_val, pos_val)... % input_type in {'force', 'trajectory'}, set 'trajectory' for constraint w Lagrang multiplier then input_val is desired acc.
					.direct_input_at_coefficient(n_coeff, input_type, force_or_acc_val, vel_val, pos_val)... % input_type in {'force', 'trajectory'}, set 'trajectory' for constraint w Lagrang multiplier then input_val is desired acc.
                    .desired_state_trajectory(desired_acc, desired_vel, desired_pos, init_pos_error)... % inverse dynamic controller, with no Lagrange multiplier or input_val is (a_d-k0*r_d-k1*u_d) based on desired acc. a_d, pos. r_d, vel. u_d and gains k0|1
                    .desired_state_trajectory_at_coefficient(n_coeff, desired_acc, desired_vel, desired_pos, init_pos_error)... % inverse dynamic controller, with no Lagrange multiplier, input_val is (a_d-k0*r_d-k1*u_d) based on desired acc. a_d, pos. r_d, vel. u_d and gains k0|1
					.unknown_direct_input()... % unknown direct force/torque on the dof
					.unknown_direct_input_at_coefficient(n_coeff)... % unknown direct force/torque on a specific coeff dof
                    .state_controller_gains(k0_gains_vec, k1_gains_vec, K_slide_gains_vec, L_slide_gains_vec)... % nonlinear controller gains & KL (sliding mode) gains (w.r.t. states, P*q, D*dq, I: not yet implemented) for both constraint and controller, gains_vec: n_copy x 1
                    .state_controller_gains_at_coefficient(n_coeff, k0_gains_vec, k1_gains_vec, K_slide_gains_vec, L_slide_gains_vec)... % nonlinear controller gains & KL (sliding mode) gains (w.r.t. velocity) for both constraint and controller, ains_vec: n_copy x 1
			.with_transformation_to_body(body_no, copy_no, axial_loc)... % >> aka transformation()
			.with_transformation_to_body_tip(body_no, copy_no)... % >> aka transformation()
			.active_directions(dir_bool)...
			.fixed_directions(dir_vec)... % constraint with Lagrange Multiplier
			.known_trajectory(desired_acc, desired_vel, desired_pos, init_pos_error)... % constraint with Lagrange Multiplier, set input_vec element NAN to disregard that direction, input_val is desired acc.
			.desired_trajectory(desired_acc, desired_vel, desired_pos, init_pos_error)... % inverse dynamic controller with no Lagrange multiplier, set input_vec element NAN to disregard that direction, input_val is (a_d-k0*r_d-k1*u_d) based on desired acc. a_d, pos. r_d, vel. u_d and gains k0|1
            .controller_gains(k0_gains_vec, k1_gains_vec, K_slide_gains_vec, L_slide_gains_vec)... % nonlinear controller gains & KL (sliding mode) gains (w.r.t. velocity) for both constraint and controller, gains_vec: n_copy x 6
            .strain_controller_gains(n_coeff, k0_gains_vec, k1_gains_vec, K_slide_gains_vec, L_slide_gains_vec)... % nonlinear controller gains & KL (sliding mode) gains (w.r.t. velocity) for both constraint and controller, gains_vec: n_copy x 6
			.wrt_body(body_no, copy_no, axial_loc)...
			.wrt_body_tip(body_no, copy_no)...
			.beam_local_x_axis(x_axis_vec)...
			.beam_stiffness()... % aka spring
				.coefficient(coeff)... % single value, [n_copies], or [n_copies, n_coeff]  
				.compression_ratio(ratio)... % single value, [n_copies], or [n_copies, n_coeff]  
				.relaxed_state(init_vals)... % relaxed state: spring initial curve_length or beam initial strains/curvatures/torsion, set inf to assume unknown for controller design, getting overriden by "equal to other joint" constraint
                .boundary_condition(n_segm, n_coeff, equal2)...
                .unknown_relaxed_states(direction_vec)... % set 1 for directions with unknown relaxed state, doesn't support rom sep. body (results in a new set of lambda for each body)
				.relaxed_state_axial_locations(vec)... % will be affected by axial offset, init_s will be asigned automatically based on initial values and ROM length if not specified
				.relaxed_state_from_initial_condition()...
				.relaxed_state_from_rom_constant()...
				.boundary_condition(equal2_vec)...
				.set_relaxed_state_rom_coefficient(n_coeff, value)... % will be overriden by continuitu condition if conflicts
				.set_relaxed_state_rom_segment_coefficient(n_segm, n_coeff, value)... % will be overriden by continuitu condition if conflicts
				.relaxed_state_coefficient_similar_to_dof_order(n_coeff, coeff, i_joint, i_dofAxis, i_coeff, i_copy)...
				.relaxed_state_coefficient_similar_to_dof_at_axial_location(n_coeff, coeff, i_joint, i_dofAxis, curve_length, i_copy)...
				.relaxed_state_coefficient_similar_to_dof_at_tip(n_coeff, coeff, i_joint, i_dofAxis, i_copy)...
				.relaxed_state_base_value(value)... % make sure s starts from 0 for it to work properly!
				.relaxed_state_base_director(director_double)... % make sure s starts from 0 for it to work properly! 
				.relaxed_state_base_value_at_axial_location(value, curve_length)... % make sure s starts from 0 for it to work properly!
				.relaxed_state_base_director_at_axial_location(director_double, curve_length)... % make sure s starts from 0 for it to work properly!              
				.element_set_relaxed_state_rom_coefficient(n_copy, n_coeff, value)... % will be overriden by continuitu condition if conflicts
				.element_set_relaxed_state_rom_segment_coefficient(n_copy, n_segm, n_coeff, value)... % will be overriden by continuitu condition if conflicts
				.element_relaxed_state_coefficient_similar_to_dof_order(n_copy, n_coeff, coeff, i_joint, i_dofAxis, i_coeff, i_copy)...
				.element_relaxed_state_coeff_similar_to_dof_at_axial_location(n_copy, n_coeff, coeff, i_joint, i_dofAxis, curve_length, i_copy)...
				.element_relaxed_state_coefficient_similar_to_dof_at_tip(n_copy, n_coeff, coeff, i_joint, i_dofAxis, i_copy)...
				.element_relaxed_state_base_value(n_copy, value)... % make sure s starts from 0 for it to work properly!
				.element_relaxed_state_base_director(n_copy, director_double)... % make sure s starts from 0 for it to work properly!
				.element_relaxed_state_base_value_at_axial_location(n_copy, value, curve_length)... % make sure s starts from 0 for it to work properly!
				.element_relaxed_state_base_director_at_axial_location(n_copy, director_double, curve_length)... % make sure s starts from 0 for it to work properly!
				.relaxed_state_axial_offset(offset)... % offset the integration range and init_s but not the spline knots, 
                .relaxed_state_fit_type(type, knots)... % type: {'polynomial', 'spline_piecewise', 'spline_logistic_func'}
			.beam_damping()... % >> aka damper
				.viscosity(val)... % single value, [n_copies], or [n_copies, n_coeff]                
				.power(val)... % single value, [n_copies], or [n_copies, n_coeff] 
			.beam_internal_actuation(input_vec)... % single value, [n_copies], or [n_copies, n_coeff]  
            .beam_simplify_for_curvlinear_frame(director_vec)... % unit vector of [x y z]: for simplification when geometrically constraint curvilinear frame is defined (so drho has only axial element in local frame)
            .beam_cross_section_radius(radius)... % for animation only
		.compliance_beam(name)... % >> joint()
		.compliance_beam_with_repeated_elements(name, copy_no)... % >> joint()
		.constraint(name)... % >> joint()
		.constraint_with_repeated_elements(name, copy_no)... % >> joint()
		.dynamic_inverse_controller(name)... % >> joint()
		.dynamic_inverse_controller_with_repeated_elements(name, copy_no)... % >> joint()
		.mesh(name)...
			.from_file(file_name, tolerance_val)...
			.with_tolerance(tolerance_val)...
			.with_base_transformation()... % >> transformation()
			.with_node_body(name)... >> body()
			.joint(name)... >> joint()...
			.with_node_dof(name)... >> joint()
			.with_edge(name)... >> joint
		.exload(name)...
			.exerted_on_body(body_no, copy_no, axial_loc)...
			.exerted_on_body_tip(body_no, copy_no)...
			.wrt_reference_body(body_no, copy_no, axial_loc)... % default ground
			.wrt_reference_body_tip(body_no, copy_no)... % default ground
			.with_transformation()... % >> transformation
			.exerted_on_body_with_transformation(body_no, copy_no, axial_loc)... % >> transformation
			.exerted_on_body_tip_with_transformation(body_no, copy_no)... % >> transformation
			.force(force_vec)...
			.moment(monet_vec)...
			.unknown_directions(dirs)...
	.run()
	
	