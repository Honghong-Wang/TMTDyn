function out1 = sprdmpDl20(in1,in2,s,ds,t_sym)
%SPRDMPDL20
%    OUT1 = SPRDMPDL20(IN1,IN2,S,DS,T_SYM)

%    This function was generated by the Symbolic Math Toolbox version 8.6.
%    08-May-2021 00:17:17

l_s2_ = in1(:,17);
q1 = in2(1,:);
q2 = in2(2,:);
q3 = in2(3,:);
q4 = in2(4,:);
q5 = in2(5,:);
q6 = in2(6,:);
q7 = in2(7,:);
q8 = in2(8,:);
q9 = in2(9,:);
q10 = in2(10,:);
q11 = in2(11,:);
q12 = in2(12,:);
q18 = in2(18,:);
t2 = q18+s;
t3 = l_s2_.*2.0;
t4 = q18.*2.0;
t5 = s.*2.0;
t6 = -l_s2_;
t9 = l_s2_.*2.0e+2;
t10 = q18.*2.0e+2;
t11 = s.*2.0e+2;
t7 = -t3;
t8 = t2.^2;
t12 = -t10;
t13 = -t11;
t14 = t2.*2.0;
t15 = t2+t6;
t16 = (l_s2_-t2).^2;
t18 = t2.*-2.0e+2+t9;
t17 = t7+t14;
t19 = exp(t18);
t20 = t19+1.0;
t21 = 1.0./t20;
out1 = [q2.*t8.*3.0+q1.*t14-t16.*t21.*(q2-q4)-t17.*t21.*(q1-q3+l_s2_.*q4+q2.*t2+q2.*t3-q4.*t2),q6.*t8.*3.0+q5.*t14-t16.*t21.*(q6-q8)-t17.*t21.*(q5-q7+l_s2_.*q8+q6.*t2+q6.*t3-q8.*t2),q10.*t8.*3.0+q9.*t14-t16.*t21.*(q10-q12)-t17.*t21.*(q9-q11+l_s2_.*q12+q10.*t2+q10.*t3-q12.*t2)+1.0];
