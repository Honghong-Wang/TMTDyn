function r_jtip = rjtipF(in1,in2,s)
%RJTIPF
%    R_JTIP = RJTIPF(IN1,IN2,S)

%    This function was generated by the Symbolic Math Toolbox version 8.0.
%    16-Jan-2019 11:57:01

l_f_sym = in1(:,17);
l_s_sym = in1(:,5);
q1 = in2(:,1);
q2 = in2(:,2);
q3 = in2(:,3);
q4 = in2(:,4);
q5 = in2(:,5);
q6 = in2(:,6);
t2 = q6.*(1.0./2.0);
t3 = q4.*(1.0./2.0);
t4 = q5.*(1.0./2.0);
t5 = sin(t3);
t6 = sin(t4);
t7 = sin(t2);
t8 = cos(t3);
t9 = cos(t4);
t10 = cos(t2);
t11 = t7.*t8.*t9;
t12 = t5.*t6.*t10;
t13 = t11+t12;
t14 = t5.*t9.*t10;
t15 = t6.*t7.*t8;
t16 = t14+t15;
t17 = t5.*t7.*t9;
t18 = t5.*t6.*t7;
t23 = t8.*t9.*t10;
t19 = t18-t23;
t21 = t6.*t8.*t10;
t20 = t17-t21;
t22 = t17-t21;
t24 = l_s_sym+q3;
t25 = t13.^2;
t26 = t16.^2;
t27 = t17-t21;
t28 = t19.^2;
r_jtip = reshape([q1,q1,q2,q2,t24,t24,q1-l_s_sym.*t13.*t19.*2.0-l_s_sym.*t16.*t20.*2.0,q1-l_f_sym.*t13.*t19.*2.0-l_f_sym.*t16.*t20.*2.0,q2+l_s_sym.*t13.*t16.*2.0-l_s_sym.*t19.*t20.*2.0,q2+l_f_sym.*t13.*t16.*2.0-l_f_sym.*t19.*t20.*2.0,l_s_sym+q3-l_s_sym.*t25+l_s_sym.*t26+l_s_sym.*t28-l_s_sym.*t22.^2,l_s_sym+q3-l_f_sym.*t25+l_f_sym.*t26+l_f_sym.*t28-l_f_sym.*t27.^2],[2,6]);
