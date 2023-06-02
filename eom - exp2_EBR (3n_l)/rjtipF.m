function out1 = rjtipF(in1,in2,s,ds,t_sym)
%RJTIPF
%    OUT1 = RJTIPF(IN1,IN2,S,DS,T_SYM)

%    This function was generated by the Symbolic Math Toolbox version 8.6.
%    14-Jun-2021 23:16:02

l_f_ = in1(:,17);
l_s_ = in1(:,5);
lambda_ = in1(:,34);
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
r_f_ = in1(:,18);
r_s2_ = in1(:,4);
t2 = l_s_./3.0;
t3 = q4./2.0;
t4 = q5./2.0;
t5 = q6./2.0;
t6 = q10./2.0;
t7 = q11./2.0;
t8 = q12./2.0;
t15 = (q4.*q10)./4.0;
t16 = (q4.*q11)./4.0;
t17 = (q5.*q10)./4.0;
t18 = (q4.*q12)./4.0;
t19 = (q5.*q11)./4.0;
t20 = (q6.*q10)./4.0;
t21 = (q5.*q12)./4.0;
t22 = (q6.*q11)./4.0;
t23 = (q6.*q12)./4.0;
t24 = 1.0./sqrt(lambda_);
t25 = q5.*q7.*(-1.0./2.0);
t26 = q6.*q8.*(-1.0./2.0);
t9 = q7.*t3;
t10 = q8.*t3;
t11 = q7.*t4;
t12 = q8.*t4;
t13 = q7.*t5;
t14 = q8.*t5;
t27 = -t15;
t28 = -t17;
t29 = -t18;
t30 = -t19;
t31 = -t22;
t32 = -t23;
t33 = q9+t2;
t34 = q15+t2;
t35 = r_s2_.*t24;
t41 = t15+t19+t23-1.0;
t36 = t3.*t33;
t37 = t4.*t33;
t38 = t5.*t33;
t39 = q4.*t33.*(-1.0./2.0);
t40 = t10+t25+t33;
t44 = t27+t30+t32+1.0;
t45 = q13.*t41;
t46 = q14.*t41;
t47 = t3+t6+t21+t31;
t48 = t4+t7+t20+t29;
t49 = t5+t8+t16+t28;
t64 = (q16.*t41)./2.0;
t65 = (q17.*t41)./2.0;
t66 = (q18.*t41)./2.0;
t74 = t34.*t41;
t42 = q8+t13+t39;
t43 = q7+t26+t37;
t50 = t9+t12+t38;
t51 = t3.*t40;
t52 = t4.*t40;
t57 = q13.*t47;
t58 = q13.*t48;
t59 = q13.*t49;
t60 = q14.*t47;
t61 = q14.*t48;
t62 = q14.*t49;
t63 = q4.*t40.*(-1.0./2.0);
t69 = -t64;
t70 = -t65;
t71 = -t66;
t75 = (q16.*t47)./2.0;
t76 = (q16.*t48)./2.0;
t77 = (q16.*t49)./2.0;
t78 = (q17.*t47)./2.0;
t79 = (q17.*t48)./2.0;
t80 = (q17.*t49)./2.0;
t81 = (q18.*t47)./2.0;
t82 = (q18.*t48)./2.0;
t83 = (q18.*t49)./2.0;
t93 = t34.*t47;
t94 = t34.*t48;
t95 = t34.*t49;
t53 = t3.*t42;
t54 = t4.*t43;
t55 = t5.*t42;
t56 = t5.*t43;
t67 = q5.*t43.*(-1.0./2.0);
t68 = q6.*t42.*(-1.0./2.0);
t72 = -t59;
t73 = -t60;
t84 = t3.*t50;
t85 = t4.*t50;
t86 = t5.*t50;
t87 = -t75;
t88 = -t76;
t89 = -t79;
t90 = -t80;
t91 = -t81;
t92 = -t83;
t96 = -t94;
t100 = t57+t61+t95;
t104 = t41+t75+t79+t83;
t97 = t58+t73+t74;
t98 = t45+t62+t96;
t99 = t46+t72+t93;
t111 = t47+t69+t82+t90;
t112 = t48+t70+t77+t91;
t113 = t49+t71+t78+t88;
t114 = t47.*t100;
t115 = t48.*t100;
t116 = t49.*t100;
t117 = t104.^2;
t124 = t44+t87+t89+t92;
t101 = t41.*t97;
t102 = t41.*t98;
t103 = t41.*t99;
t105 = t47.*t97;
t106 = t48.*t97;
t107 = t48.*t98;
t108 = t49.*t98;
t109 = t47.*t99;
t110 = t49.*t99;
t121 = t111.^2;
t122 = t112.^2;
t123 = t113.^2;
t125 = t2.*t117;
t131 = l_s_.*t104.*t111.*(2.0./3.0);
t132 = l_s_.*t104.*t112.*(2.0./3.0);
t134 = l_s_.*t111.*t113.*(2.0./3.0);
t135 = l_s_.*t112.*t113.*(2.0./3.0);
t118 = -t106;
t119 = -t108;
t120 = -t109;
t126 = t2.*t121;
t127 = t2.*t122;
t128 = t2.*t123;
t129 = l_s_.*t121.*(-1.0./3.0);
t130 = l_s_.*t122.*(-1.0./3.0);
t133 = -t132;
t136 = q2+t42+t56+t63+t85+t103+t105+t115+t119+t131+t135;
t137 = q1+t43+t52+t68+t84+t102+t110+t114+t118+t133+t134;
t138 = q3+t40+t53+t67+t86+t101+t107+t116+t120+t125+t128+t129+t130;
out1 = reshape([q1,q1+t43+t52+t68+t84,q1+t43+t52+t68+t84+t102+t110+t114+t118,t137,q2,q2+t42+t56+t63+t85,q2+t42+t56+t63+t85+t103+t105+t115+t119,t136,q3,q3+t40+t53+t67+t86,q3+t40+t53+t67+t86+t101+t107+t116+t120,t138,q1+q5.*t2+(l_s_.*q4.*q6)./6.0,q1+t43+t52+t68+t84-l_s_.*t41.*t48.*(2.0./3.0)+l_s_.*t47.*t49.*(2.0./3.0),t137,t137-l_f_.*t104.*t112.*2.0+l_f_.*t111.*t113.*2.0,q2-(l_s_.*q4)./3.0+(l_s_.*q5.*q6)./6.0,q2+t42+t56+t63+t85+l_s_.*t41.*t47.*(2.0./3.0)+l_s_.*t48.*t49.*(2.0./3.0),t136,t136+l_f_.*t104.*t111.*2.0+l_f_.*t112.*t113.*2.0,q3+t2-(l_s_.*q4.^2)./1.2e+1-(l_s_.*q5.^2)./1.2e+1+(l_s_.*q6.^2)./1.2e+1,q3+t40+t53+t67+t86-(l_s_.*t47.^2)./3.0-(l_s_.*t48.^2)./3.0+t2.*t41.^2+t2.*t49.^2,t138,t138+l_f_.*t117-l_f_.*t121-l_f_.*t122+l_f_.*t123,1.0,t44,t124,t124,t3,t47,t111,t111,t4,t48,t112,t112,t5,t49,t113,t113,1.0,t44,t124,t124,t3,t47,t111,t111,t4,t48,t112,t112,t5,t49,t113,t113,t35,t35,t35,r_f_],[4,15]);