function out1 = cnstT2(in1,in2,s,ds,t_sym)
%CNSTT2
%    OUT1 = CNSTT2(IN1,IN2,S,DS,T_SYM)

%    This function was generated by the Symbolic Math Toolbox version 8.6.
%    08-May-2021 00:17:17

l_s1_ = in1(:,16);
l_s2_ = in1(:,17);
q5 = in2(5,:);
q6 = in2(6,:);
q7 = in2(7,:);
q8 = in2(8,:);
q18 = in2(18,:);
t2 = l_s2_.*q8;
t3 = l_s1_+q18;
t4 = l_s1_.*2.0;
t5 = l_s2_.*2.0;
t6 = q18.*2.0;
t8 = -l_s2_;
t9 = -q7;
t13 = l_s1_.*2.0e+2;
t14 = l_s2_.*2.0e+2;
t15 = q18.*2.0e+2;
t7 = q6.*t5;
t10 = q6.*t3;
t11 = q8.*t3;
t12 = t3.^2;
t16 = -t13;
t17 = -t15;
t18 = t3+t8;
t20 = (l_s2_-t3).^2;
t21 = t3.*-2.0e+2+t14;
t19 = -t11;
t22 = exp(t21);
t23 = t22+1.0;
t25 = q5+t2+t7+t9+t10+t19;
t24 = 1.0./t23;
t26 = t20.*t24;
out1 = [0.0,0.0,0.0,0.0,-t12+t26,t26.*(t3+t5)-t3.^3,-t26,t24.*(l_s2_-t3).^3,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,q5.*t3.*-2.0-t3.*t10.*3.0+t26.*(q6-q8)+t24.*t25.*(t3.*2.0-t5)+t22.*t24.*t25.*t26.*2.0e+2];
