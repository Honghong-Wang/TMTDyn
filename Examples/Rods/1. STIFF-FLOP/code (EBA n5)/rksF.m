function r_ks = rksF(in1,in2,s)
%RKSF
%    R_KS = RKSF(IN1,IN2,S)

%    This function was generated by the Symbolic Math Toolbox version 8.0.
%    30-Jan-2019 18:08:04

q1 = in2(:,1);
q2 = in2(:,2);
q3 = in2(:,3);
q7 = in2(:,7);
q8 = in2(:,8);
q9 = in2(:,9);
q13 = in2(:,13);
q14 = in2(:,14);
q15 = in2(:,15);
q19 = in2(:,19);
q20 = in2(:,20);
q21 = in2(:,21);
q25 = in2(:,25);
q26 = in2(:,26);
q27 = in2(:,27);
r_ks = reshape([0.0,q1,q7,q13,q19,0.0,q2,q8,q14,q20,0.0,q3,q9,q15,q21,q1,q7,q13,q19,q25,q2,q8,q14,q20,q26,q3,q9,q15,q21,q27],[5,6]);
