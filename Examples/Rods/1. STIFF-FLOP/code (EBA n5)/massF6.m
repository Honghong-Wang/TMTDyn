function [out1,out2,out3,out4] = massF6(in1,in2,s)
%MASSF6
%    [OUT1,OUT2,OUT3,OUT4] = MASSF6(IN1,IN2,S)

%    This function was generated by the Symbolic Math Toolbox version 8.0.
%    30-Jan-2019 18:06:36

g_xsym = in1(:,13);
g_ysym = in1(:,14);
g_zsym = in1(:,15);
l_f_sym = in1(:,17);
m_f_sym = in1(:,16);
q28 = in2(:,28);
q29 = in2(:,29);
q30 = in2(:,30);
r_f_sym = in1(:,18);
u28 = in2(:,58);
u29 = in2(:,59);
u30 = in2(:,60);
t2 = l_f_sym.^2;
t3 = r_f_sym.^2;
t4 = t3.*3.0;
t5 = t2+t4;
t6 = m_f_sym.*t5.*(1.0./1.2e1);
t7 = m_f_sym.*t2.*(1.0./4.0);
t8 = t6+t7;
out1 = reshape([m_f_sym,0.0,0.0,0.0,0.0,0.0,0.0,m_f_sym,0.0,0.0,0.0,0.0,0.0,0.0,m_f_sym,0.0,0.0,0.0,0.0,0.0,0.0,t8,0.0,0.0,0.0,0.0,0.0,0.0,t8,0.0,0.0,0.0,0.0,0.0,0.0,m_f_sym.*t3.*(1.0./2.0)],[6,6]);
if nargout > 1
    t9 = q28.^2;
    t10 = q29.^2;
    t11 = q30.^2;
    t12 = -t9-t10-t11+1.0;
    t13 = 1.0./sqrt(t12);
    t14 = sqrt(t12);
    t15 = l_f_sym.*t14;
    t16 = l_f_sym.*q30;
    t17 = q30.*2.0;
    t18 = q28.*q29.*t13.*2.0;
    t19 = t14.*2.0;
    t20 = q28.*q30.*t13.*2.0;
    t21 = q28.*2.0;
    t22 = q29.*q30.*t13.*2.0;
    out2 = reshape([0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,t16-l_f_sym.*q28.*q29.*t13,-t15+l_f_sym.*t9.*t13,l_f_sym.*q28.*-2.0,t19+t9.*t13.*2.0,-t17+t18,q29.*2.0+t20,t15-l_f_sym.*t10.*t13,t16+l_f_sym.*q28.*q29.*t13,l_f_sym.*q29.*-2.0,t17+t18,t19+t10.*t13.*2.0,-t21+t22,l_f_sym.*q28-l_f_sym.*q29.*q30.*t13,l_f_sym.*q29+l_f_sym.*q28.*q30.*t13,0.0,q29.*-2.0+t20,t21+t22,t19+t11.*t13.*2.0],[6,30]);
end
if nargout > 2
    t23 = 1.0./t12.^(3.0./2.0);
    t24 = l_f_sym.*q28.*t13;
    t25 = l_f_sym.*q28.*t10.*t23;
    t26 = t24+t25;
    t34 = l_f_sym.*q28.*q29.*q30.*t23;
    t27 = l_f_sym-t34;
    t28 = l_f_sym.*q30.*t13;
    t29 = l_f_sym.*q30.*t10.*t23;
    t30 = t28+t29;
    t31 = l_f_sym.*q29.*t13;
    t32 = l_f_sym.*q29.*t9.*t23;
    t33 = t31+t32;
    t35 = l_f_sym+t34;
    t36 = l_f_sym.*q30.*t9.*t23;
    t37 = t28+t36;
    t38 = q29.*t13.*2.0;
    t39 = q29.*t9.*t23.*2.0;
    t40 = q28.*t13.*2.0;
    t41 = q28.*q29.*q30.*t23.*2.0;
    t42 = q30.*t13.*2.0;
    t43 = q30.*t9.*t23.*2.0;
    t44 = t41+2.0;
    t45 = t38+t39;
    t46 = q28.*t10.*t23.*2.0;
    t47 = t40+t46;
    t48 = t41-2.0;
    t49 = q30.*t10.*t23.*2.0;
    t50 = t42+t43;
    t51 = q28.*t11.*t23.*2.0;
    t52 = t42+t49;
    t53 = q29.*t11.*t23.*2.0;
    t54 = t40+t51;
    t55 = t38+t53;
    out3 = reshape([0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,-t26.*u29+t27.*u30-t33.*u28,u28.*(l_f_sym.*q28.*t13.*3.0+l_f_sym.*q28.*t9.*t23)+t33.*u29+t37.*u30,l_f_sym.*u28.*-2.0,t45.*u29+t50.*u30+u28.*(t40+q28.*t9.*t23.*2.0),t45.*u28+t44.*u30-u29.*(t40-t46),t48.*u29+t50.*u28-u30.*(t40-t51),-u29.*(l_f_sym.*q29.*t13.*3.0+l_f_sym.*q29.*t10.*t23)-t26.*u28-t30.*u30,t26.*u29+t33.*u28+t35.*u30,l_f_sym.*u29.*-2.0,t47.*u29+t48.*u30-u28.*(t38-t39),t47.*u28+t52.*u30+u29.*(t38+q29.*t10.*t23.*2.0),t44.*u28+t52.*u29-u30.*(t38-t53),t27.*u28-t30.*u29-u30.*(t31+l_f_sym.*q29.*t11.*t23),t35.*u29+t37.*u28+u30.*(t24+l_f_sym.*q28.*t11.*t23),0.0,t44.*u29+t54.*u30-u28.*(t42-t43),t48.*u28+t55.*u30-u29.*(t42-t49),t54.*u28+t55.*u29+u30.*(t42+q30.*t11.*t23.*2.0)],[6,30]);
end
if nargout > 3
    out4 = [g_xsym;g_ysym;g_zsym;0.0;0.0;0.0];
end
