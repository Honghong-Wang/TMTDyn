function [out1,out2,out3,out4,out5,out6,out7,out8] = sprdmpF5(in1,in2,s)
%SPRDMPF5
%    [OUT1,OUT2,OUT3,OUT4,OUT5,OUT6,OUT7,OUT8] = SPRDMPF5(IN1,IN2,S)

%    This function was generated by the Symbolic Math Toolbox version 8.0.
%    16-Jan-2019 13:21:13

E_s_sym = in1(:,2);
gamma_sym = in1(:,21);
l_s_sym = in1(:,5);
lambda_sym = in1(:,34);
mu_xx_sym = in1(:,9);
mu_pow_sym = in1(:,12);
p1_sym = in1(:,22);
p2_sym = in1(:,23);
p3_sym = in1(:,24);
p4_sym = in1(:,25);
p5_sym = in1(:,26);
p6_sym = in1(:,27);
q5 = in2(:,5);
r_o_sym = in1(:,20);
r_p1_sym = in1(:,19);
r_s1_sym = in1(:,3);
r_s2_sym = in1(:,4);
u5 = in2(:,17);
out1 = [0.0;0.0;0.0;0.0;1.0;0.0;0.0;0.0;0.0;0.0;0.0;0.0];
if nargout > 1
    t2 = r_s1_sym.^2;
    t3 = r_s2_sym.^2;
    t4 = r_p1_sym.^2;
    t5 = cos(gamma_sym);
    t9 = lambda_sym.^2;
    t10 = t5.^2;
    t11 = t9.*t10;
    t6 = t11-1.0;
    t7 = 1.0./lambda_sym;
    t8 = sin(gamma_sym);
    t12 = 1.0./t8.^2;
    t13 = 1.0./sqrt(lambda_sym);
    t14 = 1.0./l_s_sym;
    t15 = 1.0./lambda_sym.^2;
    t16 = t2.^2;
    t17 = t3.^2;
    t18 = t16-t17;
    t19 = t15.*t18;
    t20 = t4.^2;
    t21 = 1.0./t8.^4;
    t22 = t6.^2;
    t23 = t20.*t21.*t22.*6.0;
    t24 = t19+t23;
    t25 = t24.*pi.*(1.0./4.0);
    t26 = r_o_sym.^2;
    t27 = t25-t4.*t6.*t7.*t12.*t26.*pi.*3.0;
    out2 = E_s_sym.*q5.*t7.*t14.*t27.*2.0;
end
if nargout > 2
    t28 = mu_pow_sym-1.0;
    out3 = -mu_xx_sym.*u5.*abs(u5).^t28;
end
if nargout > 3
    out4 = p1_sym.*r_o_sym.*t4.*t6.*t12.*t13.*pi.*(-2.71e2./2.89e2)-p2_sym.*r_o_sym.*t4.*t6.*t12.*t13.*pi.*(2.71e2./2.89e2)+p3_sym.*r_o_sym.*t4.*t6.*t12.*t13.*pi.*1.67999098695029e-1+p4_sym.*r_o_sym.*t4.*t6.*t12.*t13.*pi.*7.697171642807495e-1+p5_sym.*r_o_sym.*t4.*t6.*t12.*t13.*pi.*7.697171642807493e-1+p6_sym.*r_o_sym.*t4.*t6.*t12.*t13.*pi.*1.679990986950289e-1;
end
if nargout > 4
    out5 = q5;
end
if nargout > 5
    out6 = [0.0,0.0,0.0,0.0,E_s_sym.*t7.*t14.*t27.*-2.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0];
end
if nargout > 6
    out7 = [0.0,0.0,0.0,0.0,-mu_xx_sym.*u5.^t28,0.0,0.0,0.0,0.0,0.0,0.0,0.0];
end
if nargout > 7
    out8 = 1.0;
end
