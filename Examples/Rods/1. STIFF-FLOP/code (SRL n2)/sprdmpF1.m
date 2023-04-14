function [out1,out2,out3,out4,out5,out6,out7,out8] = sprdmpF1(in1,in2,s)
%SPRDMPF1
%    [OUT1,OUT2,OUT3,OUT4,OUT5,OUT6,OUT7,OUT8] = SPRDMPF1(IN1,IN2,S)

%    This function was generated by the Symbolic Math Toolbox version 8.0.
%    16-Jan-2019 13:21:12

E_s_sym = in1(:,2);
gamma_sym = in1(:,21);
l_s_sym = in1(:,5);
lambda_sym = in1(:,34);
mu_x_sym = in1(:,6);
mu_pow_sym = in1(:,12);
q1 = in2(:,1);
r_p1_sym = in1(:,19);
r_s1_sym = in1(:,3);
r_s2_sym = in1(:,4);
u1 = in2(:,13);
out1 = [1.0;0.0;0.0;0.0;0.0;0.0;0.0;0.0;0.0;0.0;0.0;0.0];
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
    out2 = E_s_sym.*q1.*t2.*t4.*t16.*pi.*(2.0./3.0);
end
if nargout > 2
    t17 = mu_pow_sym-1.0;
    out3 = -mu_x_sym.*u1.*abs(u1).^t17;
end
if nargout > 3
    out4 = 0.0;
end
if nargout > 4
    out5 = q1;
end
if nargout > 5
    out6 = [E_s_sym.*t2.*t4.*t16.*pi.*(-2.0./3.0),0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0];
end
if nargout > 6
    out7 = [-mu_x_sym.*u1.^t17,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0];
end
if nargout > 7
    out8 = 1.0;
end
