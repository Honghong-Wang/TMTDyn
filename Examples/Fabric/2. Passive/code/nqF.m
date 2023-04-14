function [out1,out2,out3,out4,out5,out6,out7,out8,out9] = nqF(in1)
%NQF
%    [OUT1,OUT2,OUT3,OUT4,OUT5,OUT6,OUT7,OUT8,OUT9] = NQF(IN1)

%    This function was generated by the Symbolic Math Toolbox version 8.2.
%    09-Jan-2019 03:09:21

phi_sym = in1(:,5);
out1 = 9.1e1;
if nargout > 1
    out2 = 1.2e1;
end
if nargout > 2
    t2 = phi_sym./2.0;
    t3 = cos(t2);
    t4 = sin(t2);
    t5 = t3.*(7.7e1./1.0e3);
    t6 = t4.*(9.0./2.5e2);
    t7 = t5+t6;
    t8 = t3.*(9.0./2.5e2);
    t9 = t4.*(7.7e1./1.0e3);
    t10 = t8-t9;
    t11 = t3.^2;
    t12 = t4.^2;
    t13 = t3.*(8.1e1./5.0e2);
    t14 = t6+t13;
    t15 = t4.*(8.1e1./5.0e2);
    t16 = t8-t15;
    t17 = t12.*(3.0./1.0e2);
    t18 = t3./4.0;
    t19 = t6+t18;
    t20 = t4./4.0;
    t21 = t8-t20;
    t22 = t3.*(3.33e2./1.0e3);
    t23 = t6+t22;
    t24 = t4.*(3.33e2./1.0e3);
    t25 = t8-t24;
    t27 = t11.*1.032584018e-13;
    t28 = t12.*1.032584018e-13;
    t26 = -t27-t28;
    t29 = t4./2.5e1;
    t30 = t22-t29;
    t31 = t3./2.5e1;
    t32 = t24+t31;
    t33 = t11.*(-7.752132269000001e-14)-t12.*7.752132269000001e-14;
    t34 = t18-t29;
    t35 = t20+t31;
    t36 = t11.*(-5.023381711e-14)-t12.*5.023381711e-14;
    t37 = t13-t29;
    t38 = t15+t31;
    t39 = t11.*(-2.387656739e-14)-t12.*2.387656739e-14;
    t40 = t5-t29;
    t41 = t9+t31;
    out3 = [t3.*t4.*(-3.0./5.0e1)-t4.*t7+t3.*t10,t39,t11.*(-3.0./1.0e2)+t17-t3.*t7-t4.*t10,0.0,0.0,0.0,t3.*t4.*(-3.0./5.0e1)-t4.*t14+t3.*t16,t36,t11.*(-3.0./1.0e2)+t17-t3.*t14-t4.*t16,0.0,0.0,0.0,t3.*t4.*(-3.0./5.0e1)-t4.*t19+t3.*t21,t33,t11.*(-3.0./1.0e2)+t17-t3.*t19-t4.*t21,0.0,0.0,0.0,t3.*t4.*(-3.0./5.0e1)-t4.*t23+t3.*t25,t26,t11.*(-3.0./1.0e2)+t17-t3.*t23-t4.*t25,0.0,0.0,0.0,t3.*t4.*(-3.63e2./5.0e2),t26,t11.*(-3.63e2./1.0e3)+t12.*(3.63e2./1.0e3),0.0,0.0,0.0,t3.*t4.*(-3.0./5.0e1)-t4.*t30-t3.*t32,t26,t11.*(-3.0./1.0e2)+t17-t3.*t30+t4.*t32,0.0,0.0,0.0,t3.*t4.*(-3.0./5.0e1)-t3.*t35-t4.*t34,t33,t11.*(-3.0./1.0e2)+t17-t3.*t34+t4.*t35,0.0,0.0,0.0,t3.*t4.*(-3.0./5.0e1)-t3.*t38-t4.*t37,t36,t11.*(-3.0./1.0e2)+t17-t3.*t37+t4.*t38,0.0,0.0,0.0,t3.*t4.*(-3.0./5.0e1)-t3.*t41-t4.*t40,t39,t11.*(-3.0./1.0e2)+t17-t3.*t40+t4.*t41,0.0,0.0,0.0,t3.*t4.*(-1.07e2./5.0e2),t11.*3.3825825826e-2+t12.*3.3825825826e-2,t11.*(-1.07e2./1.0e3)+t12.*(1.07e2./1.0e3),0.0,0.0,0.0,t3.*t4.*(-4.8e1./1.25e2),t11.*2.2594594595e-2+t12.*2.2594594595e-2,t11.*(-2.4e1./1.25e2)+t12.*(2.4e1./1.25e2),0.0,0.0,0.0,t3.*t4.*(-1.4e1./2.5e1),t11.*1.0966966967e-2+t12.*1.0966966967e-2,t11.*(-7.0./2.5e1)+t12.*(7.0./2.5e1),0.0,0.0,0.0,t11.*(-1.0./2.5e1)+t12./2.5e1-t3.*t4.*(3.0./5.0e1),0.0,t11.*(-3.0./1.0e2)+t17+t3.*t4.*(2.0./2.5e1),0.0,0.0,0.0,t11.*7.105427357999999e-18-t12.*7.105427357999999e-18-t3.*t4.*(3.0./5.0e1),t11.*(1.1e1./2.5e2)+t12.*(1.1e1./2.5e2),t11.*(-3.0./1.0e2)+t17-t3.*t4.*1.4210854716e-17,0.0,0.0,0.0,t11.*(9.0./2.5e2)-t12.*(9.0./2.5e2)-t3.*t4.*(3.0./5.0e1),t11.*(-1.193711796e-14)-t12.*1.193711796e-14,t11.*(-3.0./1.0e2)+t17-t3.*t4.*(9.0./1.25e2),0.0,0.0,0.0,phi_sym];
end
if nargout > 3
    out4 = 1.6e1;
end
if nargout > 4
    out5 = 1.15e2;
end
if nargout > 5
    out6 = 1.2e1;
end
if nargout > 6
    out7 = 0.0;
end
if nargout > 7
    out8 = [0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0];
end
if nargout > 8
    out9 = [0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0];
end