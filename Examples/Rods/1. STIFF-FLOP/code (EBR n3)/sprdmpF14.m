function [out1,out2,out3,out4,out5,out6,out7,out8] = sprdmpF14(in1,in2,s)
%SPRDMPF14
%    [OUT1,OUT2,OUT3,OUT4,OUT5,OUT6,OUT7,OUT8] = SPRDMPF14(IN1,IN2,S)

%    This function was generated by the Symbolic Math Toolbox version 8.0.
%    30-Jan-2019 17:47:50

E_s_sym = in1(:,2);
gamma_sym = in1(:,21);
l_s_sym = in1(:,5);
lambda_sym = in1(:,34);
mu_y_sym = in1(:,7);
q14 = in2(:,14);
r_p1_sym = in1(:,19);
r_s1_sym = in1(:,3);
r_s2_sym = in1(:,4);
u14 = in2(:,32);
out1 = [0.0;0.0;0.0;0.0;0.0;0.0;0.0;0.0;0.0;0.0;0.0;0.0;0.0;1.0;0.0;0.0;0.0;0.0];
if nargout > 1
    t2 = 1.0./lambda_sym;
    t3 = cos(gamma_sym);
    t4 = 1.0./l_s_sym;
    t5 = r_s1_sym.^2;
    t6 = r_s2_sym.^2;
    t7 = t5-t6;
    t8 = t2.*t7;
    t9 = r_p1_sym.^2;
    t10 = sin(gamma_sym);
    t11 = 1.0./t10.^2;
    t12 = lambda_sym.^2;
    t13 = t3.^2;
    t14 = t12.*t13;
    t15 = t14-1.0;
    t16 = t8-t9.*t11.*t15.*6.0;
    out2 = E_s_sym.*q14.*t2.*t4.*t16.*pi;
end
if nargout > 2
    out3 = -mu_y_sym.*u14;
end
if nargout > 3
    out4 = 0.0;
end
if nargout > 4
    out5 = q14;
end
if nargout > 5
    out6 = [0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,-E_s_sym.*t2.*t4.*t16.*pi,0.0,0.0,0.0,0.0];
end
if nargout > 6
    out7 = [0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,-mu_y_sym,0.0,0.0,0.0,0.0];
end
if nargout > 7
    out8 = 1.0;
end
