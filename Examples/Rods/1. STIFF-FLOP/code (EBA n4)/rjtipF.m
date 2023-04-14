function r_jtip = rjtipF(in1,in2,s)
%RJTIPF
%    R_JTIP = RJTIPF(IN1,IN2,S)

%    This function was generated by the Symbolic Math Toolbox version 8.0.
%    30-Jan-2019 18:05:21

l_f_sym = in1(:,17);
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
q22 = in2(:,22);
q23 = in2(:,23);
q24 = in2(:,24);
t2 = q22.^2;
t3 = q23.^2;
t4 = q24.^2;
t5 = -t2-t3-t4+1.0;
t6 = sqrt(t5);
r_jtip = reshape([q1,q7,q13,q19,q19,q2,q8,q14,q20,q20,q3,q9,q15,q21,q21,q1,q7,q13,q19,q19+l_f_sym.*q22.*q24.*2.0+l_f_sym.*q23.*t6.*2.0,q2,q8,q14,q20,q20+l_f_sym.*q23.*q24.*2.0-l_f_sym.*q22.*t6.*2.0,q3,q9,q15,q21,q21-l_f_sym.*t2-l_f_sym.*t3+l_f_sym.*t4-l_f_sym.*(t2+t3+t4-1.0)],[5,6]);
