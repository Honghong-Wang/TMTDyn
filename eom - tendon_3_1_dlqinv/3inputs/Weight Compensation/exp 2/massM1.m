function out1 = massM1(in1,in2,s,ds,t_sym)
%MASSM1
%    OUT1 = MASSM1(IN1,IN2,S,DS,T_SYM)

%    This function was generated by the Symbolic Math Toolbox version 8.6.
%    07-May-2021 23:45:12

r_s21_ = in1(:,9);
r_s22_ = in1(:,10);
sigma_s2_ = in1(:,2);
t2 = r_s21_.^2;
t3 = r_s22_.^2;
t4 = -t3;
t5 = t2./4.0;
t6 = t3./4.0;
t7 = t2+t4;
t10 = t5+t6;
t8 = sigma_s2_.*t7.*pi;
t9 = -t8;
t11 = t8.*t10;
t12 = t9.*t10;
out1 = reshape([t9,0.0,0.0,0.0,0.0,0.0,0.0,t9,0.0,0.0,0.0,0.0,0.0,0.0,t9,0.0,0.0,0.0,0.0,0.0,0.0,t12,0.0,0.0,0.0,0.0,0.0,0.0,t12,0.0,0.0,0.0,0.0,0.0,0.0,t9.*(t2./2.0+t3./2.0)],[6,6]);