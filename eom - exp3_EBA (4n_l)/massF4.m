function [out1,out2,out3,out4] = massF4(in1,in2,s,ds,t_sym)
%MASSF4
%    [OUT1,OUT2,OUT3,OUT4] = MASSF4(IN1,IN2,S,DS,T_SYM)

%    This function was generated by the Symbolic Math Toolbox version 8.6.
%    15-Jun-2021 01:39:21

g_x_ = in1(:,13);
g_y_ = in1(:,14);
g_z_ = in1(:,15);
l_f_ = in1(:,17);
m_f_ = in1(:,16);
q16 = in2(16,:);
q17 = in2(17,:);
q18 = in2(18,:);
r_f_ = in1(:,18);
u16 = in2(34,:);
u17 = in2(35,:);
u18 = in2(36,:);
t2 = l_f_.*q18;
t3 = l_f_.^2;
t4 = q16.*2.0;
t5 = q17.*2.0;
t6 = q18.*2.0;
t7 = q16.^2;
t8 = q16.^3;
t9 = q17.^2;
t10 = q17.^3;
t11 = q18.^2;
t12 = r_f_.^2;
t13 = t12.*3.0;
t14 = -t7;
t15 = -t9;
t16 = -t11;
t17 = (m_f_.*t3)./4.0;
t18 = t3+t13;
t20 = t14+t15+t16+1.0;
t19 = (m_f_.*t18)./1.2e+1;
t22 = sqrt(t20);
t21 = t17+t19;
out1 = reshape([m_f_,0.0,0.0,0.0,0.0,0.0,0.0,m_f_,0.0,0.0,0.0,0.0,0.0,0.0,m_f_,0.0,0.0,0.0,0.0,0.0,0.0,t21,0.0,0.0,0.0,0.0,0.0,0.0,t21,0.0,0.0,0.0,0.0,0.0,0.0,(m_f_.*t12)./2.0],[6,6]);
if nargout > 1
    t23 = 1.0./t22;
    t25 = l_f_.*t22;
    t26 = t22.*2.0;
    t24 = t23.^3;
    t27 = t4.*t23;
    t28 = t5.*t23;
    t29 = t6.*t23;
    t30 = l_f_.*q16.*t23;
    t31 = l_f_.*q17.*t23;
    t32 = t2.*t23;
    t33 = q17.*t27;
    t34 = q18.*t27;
    t35 = q18.*t28;
    t36 = q17.*t30;
    out2 = reshape([0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,t2-t36,-t25+l_f_.*t7.*t23,l_f_.*q16.*-2.0,t26+q16.*t27,-t6+t33,t5+t34,t25+l_f_.*t15.*t23,t2+t36,l_f_.*q17.*-2.0,t6+t33,t26+q17.*t28,-t4+t35,l_f_.*q16-q17.*t32,l_f_.*q17+q16.*t32,0.0,-t5+t34,t4+t35,t26+q18.*t29],[6,18]);
end
if nargout > 2
    t37 = q17.*q18.*t4.*t24;
    t38 = q16.*q17.*t2.*t24;
    t39 = l_f_.*q16.*t9.*t24;
    t40 = l_f_.*q17.*t7.*t24;
    t41 = t2.*t7.*t24;
    t42 = t2.*t9.*t24;
    t43 = t4.*t9.*t24;
    t44 = q16.*q17.*t4.*t24;
    t45 = t4.*t11.*t24;
    t46 = q16.*q18.*t4.*t24;
    t47 = t5.*t11.*t24;
    t48 = q17.*q18.*t5.*t24;
    t49 = l_f_+t38;
    t50 = t37+2.0;
    t51 = -t38;
    t52 = t37-2.0;
    t54 = t30+t39;
    t55 = t31+t40;
    t56 = t32+t41;
    t57 = t32+t42;
    t58 = t27+t43;
    t59 = t27+t45;
    t60 = t28+t44;
    t61 = t28+t47;
    t62 = t29+t46;
    t63 = t29+t48;
    t53 = l_f_+t51;
    t64 = t55.*u16;
    t65 = t54.*u17;
    out3 = reshape([0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,-t64-t65+t53.*u18,t55.*u17+t56.*u18+u16.*(t30.*3.0+l_f_.*t8.*t24),l_f_.*u16.*-2.0,t60.*u17+t62.*u18+u16.*(t27+t4.*t7.*t24),t50.*u18+t60.*u16-u17.*(t27-q16.*t9.*t24.*2.0),t52.*u17+t62.*u16-u18.*(t27-q16.*t11.*t24.*2.0),-t54.*u16-t57.*u18-u17.*(t31.*3.0+l_f_.*t10.*t24),t64+t65+t49.*u18,l_f_.*u17.*-2.0,t52.*u18+t58.*u17-u16.*(t28-q17.*t7.*t24.*2.0),t58.*u16+t63.*u18+u17.*(t28+t5.*t9.*t24),t50.*u16+t63.*u17-u18.*(t28-q17.*t11.*t24.*2.0),t53.*u16-t57.*u17-u18.*(t31+q17.*q18.*t2.*t24),t49.*u17+t56.*u16+u18.*(t30+q16.*q18.*t2.*t24),0.0,t50.*u17+t59.*u18-u16.*(t29-q18.*t7.*t24.*2.0),t52.*u16+t61.*u18-u17.*(t29-q18.*t9.*t24.*2.0),t59.*u16+t61.*u17+u18.*(t29+t6.*t11.*t24)],[6,18]);
end
if nargout > 3
    out4 = [g_x_;g_y_;g_z_;0.0;0.0;0.0];
end
