function out1 = rjtipF(in1,in2,s,ds,t_sym)
%RJTIPF
%    OUT1 = RJTIPF(IN1,IN2,S,DS,T_SYM)

%    This function was generated by the Symbolic Math Toolbox version 8.6.
%    08-May-2021 00:18:19

dl_ = in1(:,19);
l_s1_ = in1(:,16);
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
q13 = in2(13,:);
q14 = in2(14,:);
q15 = in2(15,:);
q16 = in2(16,:);
q17 = in2(17,:);
q18 = in2(18,:);
r_s12_ = in1(:,8);
r_s22_ = in1(:,10);
t2 = NaN;
t3 = l_s2_.*q4;
t4 = l_s2_.*q8;
t5 = l_s2_.*q12;
t6 = l_s2_.*q17;
t7 = l_s1_+q18;
t8 = l_s2_.*2.0;
t9 = s.^2;
t10 = s.^3;
t15 = -q3;
t16 = -q4;
t17 = -q7;
t18 = -q8;
t19 = -q11;
t20 = -q12;
t21 = -q16;
t25 = dl_.*2.0e+2;
t26 = l_s2_.*2.0e+2;
t27 = q18.*2.0e+2;
t11 = q2.*t8;
t12 = q6.*t8;
t13 = q10.*t8;
t14 = q15.*t8;
t22 = s.*t7;
t23 = t7.^2;
t24 = t7.^3;
t37 = q2+t16;
t38 = q6+t18;
t39 = q10+t20;
t40 = -t25;
t28 = t22.*2.0;
t29 = q2.*t22;
t30 = q4.*t22;
t31 = q6.*t22;
t32 = q8.*t22;
t33 = q10.*t22;
t34 = q12.*t22;
t35 = q15.*t22;
t36 = q17.*t22;
t41 = -t22;
t46 = t22.*2.0e+2;
t47 = t16.*t22;
t48 = t18.*t22;
t49 = t20.*t22;
t52 = (q13.*t22)./2.0;
t56 = q2.*t9.*t23.*3.0;
t57 = q6.*t9.*t23.*3.0;
t58 = q10.*t9.*t23.*3.0;
t59 = (q14.*t9.*t23)./2.0;
t60 = (q15.*t10.*t24)./2.0;
t42 = -t28;
t43 = q1.*t28;
t44 = q5.*t28;
t45 = q9.*t28;
t50 = -t36;
t51 = -t46;
t53 = l_s2_+t41;
t66 = q1+t3+t11+t15+t29+t47;
t67 = q5+t4+t12+t17+t31+t48;
t68 = q9+t5+t13+t19+t33+t49;
t54 = t8+t42;
t55 = t53.^2;
t61 = t26+t51;
t69 = q14+t6+t14+t21+t35+t50;
t62 = exp(t61);
t65 = t27+t40+t61;
t63 = t62+1.0;
t70 = exp(t65);
t64 = 1.0./t63;
t71 = t70+1.0;
t72 = 1.0./t71;
t73 = t37.*t55.*t64;
t74 = t38.*t55.*t64;
t75 = t39.*t55.*t64;
t79 = t54.*t64.*t66;
t80 = t54.*t64.*t67;
t81 = t54.*t64.*t68;
t82 = (t55.*t64.*t69)./2.0;
t76 = -t73;
t77 = -t74;
t78 = -t75;
t83 = -t82;
t84 = t52+t59+t60+t83;
t87 = t43+t56+t76+t79;
t88 = t44+t57+t77+t80;
t89 = t45+t58+t78+t81+1.0;
t85 = cos(t84);
t86 = sin(t84);
t90 = t87.^2;
t91 = t88.^2;
t92 = t89.^2;
t93 = t90+t91+t92;
t94 = 1.0./sqrt(t93);
t95 = (t89.*t94)./2.0;
t96 = t95+1.0./2.0;
t97 = sqrt(t96);
t98 = 1.0./t97;
out1 = [q1.*t9.*t23+q2.*t10.*t24-t55.*t64.*t66,q5.*t9.*t23+q6.*t10.*t24-t55.*t64.*t67,t22+q9.*t9.*t23+q10.*t10.*t24-t55.*t64.*t68,t2,t2,t2,t85.*t97,t85.*t88.*t94.*t98.*(-1.0./2.0)+(t86.*t87.*t94.*t98)./2.0,(t85.*t87.*t94.*t98)./2.0+(t86.*t88.*t94.*t98)./2.0,t86.*t97,t2,t2,t2,t2,r_s12_.*t72-r_s22_.*(t72-1.0)];