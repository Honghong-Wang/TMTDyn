function out1 = cnstR1(in1,in2,s,ds,t_sym)
%CNSTR1
%    OUT1 = CNSTR1(IN1,IN2,S,DS,T_SYM)

%    This function was generated by the Symbolic Math Toolbox version 8.6.
%    08-May-2021 00:17:19

l_s1_ = in1(:,16);
l_s2_ = in1(:,17);
q1 = in2(1,:);
q2 = in2(2,:);
q3 = in2(3,:);
q4 = in2(4,:);
q18 = in2(18,:);
t2 = l_s1_+q18;
out1 = -q1.*t2.^2-q2.*t2.^3+((l_s2_-t2).^2.*(q1-q3+l_s2_.*q2.*2.0+l_s2_.*q4+q2.*t2-q4.*t2))./(exp(l_s2_.*2.0e+2-t2.*2.0e+2)+1.0);
