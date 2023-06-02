function out1 = cnstIn1(in1,in2,s,ds,t_sym)
%CNSTIN1
%    OUT1 = CNSTIN1(IN1,IN2,S,DS,T_SYM)

%    This function was generated by the Symbolic Math Toolbox version 8.6.
%    07-May-2021 20:39:35

D_ = in1(:,33);
P_ = in1(:,31);
dl_ = in1(:,19);
haptic_x_ = in1(:,28);
l_s1_ = in1(:,16);
l_s2_ = in1(:,17);
q1 = in2(1,:);
q2 = in2(2,:);
q3 = in2(3,:);
q4 = in2(4,:);
u1 = in2(20,:);
u2 = in2(21,:);
u3 = in2(22,:);
u4 = in2(23,:);
t2 = dl_+l_s1_;
t3 = -l_s2_;
t6 = dl_.*2.0e+2;
t7 = l_s1_.*2.0e+2;
t8 = l_s2_.*2.0e+2;
t4 = t2.^2;
t5 = t2.^3;
t9 = -t6;
t10 = -t7;
t11 = t2+t3;
t12 = (l_s2_-t2).^2;
t13 = t2.*-2.0e+2+t8;
t14 = exp(t13);
t15 = t14+1.0;
t16 = 1.0./t15;
out1 = -haptic_x_+P_.*(q1.*t4+q2.*t5-t12.*t16.*(q1-q3+l_s2_.*q2.*2.0+l_s2_.*q4+q2.*t2-q4.*t2))+D_.*(u2.*(t5-t12.*t16.*(l_s2_.*2.0+t2))+u1.*(t4-t12.*t16)-t16.*u4.*(l_s2_-t2).^3+t12.*t16.*u3);