function out1 = cnstIn2(in1,in2,s,ds,t_sym)
%CNSTIN2
%    OUT1 = CNSTIN2(IN1,IN2,S,DS,T_SYM)

%    This function was generated by the Symbolic Math Toolbox version 8.6.
%    08-May-2021 00:17:19

D_ = in1(:,33);
P_ = in1(:,31);
haptic_y_ = in1(:,29);
l_s1_ = in1(:,16);
l_s2_ = in1(:,17);
q5 = in2(5,:);
q6 = in2(6,:);
q7 = in2(7,:);
q8 = in2(8,:);
q18 = in2(18,:);
u5 = in2(26,:);
u6 = in2(27,:);
u7 = in2(28,:);
u8 = in2(29,:);
u18 = in2(39,:);
t2 = l_s2_.*q8;
t3 = l_s1_+q18;
t4 = l_s1_.*2.0;
t5 = l_s2_.*2.0;
t6 = q18.*2.0;
t8 = -l_s2_;
t9 = -q7;
t14 = l_s1_.*2.0e+2;
t15 = l_s2_.*2.0e+2;
t16 = q18.*2.0e+2;
t7 = q6.*t5;
t10 = q6.*t3;
t11 = q8.*t3;
t12 = t3.^2;
t13 = t3.^3;
t17 = -t14;
t18 = -t16;
t19 = t3+t8;
t21 = (l_s2_-t3).^2;
t22 = t3.*-2.0e+2+t15;
t20 = -t11;
t23 = exp(t22);
t24 = t23+1.0;
t26 = q5+t2+t7+t9+t10+t20;
t25 = 1.0./t24;
out1 = -haptic_y_+P_.*(q5.*t12+t10.*t12-t21.*t25.*t26)+D_.*(u6.*(t13-t21.*t25.*(t3+t5))-u18.*(q5.*t3.*-2.0-t3.*t10.*3.0+t25.*t26.*(t3.*2.0-t5)+t21.*t25.*(q6-q8)+t21.*t23.*t25.^2.*t26.*2.0e+2)+u5.*(t12-t21.*t25)-t25.*u8.*(l_s2_-t3).^3+t21.*t25.*u7);
