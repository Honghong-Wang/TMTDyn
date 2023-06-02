function out1 = loadsFtau1(in1,in2,s,ds,t_sym)
%LOADSFTAU1
%    OUT1 = LOADSFTAU1(IN1,IN2,S,DS,T_SYM)

%    This function was generated by the Symbolic Math Toolbox version 8.6.
%    07-May-2021 19:07:17

f_tx_ = in1(:,22);
f_ty_ = in1(:,23);
f_tz_ = in1(:,24);
l_ex_ = in1(:,18);
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
tau_tx_ = in1(:,25);
tau_ty_ = in1(:,26);
tau_tz_ = in1(:,27);
t2 = l_ex_.*q2;
t3 = l_ex_.*q4;
t4 = l_ex_.*q6;
t5 = l_ex_.*q8;
t6 = l_ex_.*q10;
t7 = l_ex_.*q12;
t8 = l_ex_.*q15;
t9 = l_ex_.*q17;
t10 = l_s2_.*q4;
t11 = l_s2_.*q8;
t12 = l_s2_.*q12;
t13 = l_s2_.*q17;
t14 = l_ex_.*2.0;
t15 = l_s2_.*2.0;
t16 = l_ex_.^2;
t17 = l_ex_.^3;
t25 = -l_s2_;
t27 = -q3;
t28 = -q4;
t29 = -q7;
t30 = -q8;
t31 = -q11;
t32 = -q12;
t33 = -q16;
t38 = l_ex_.*2.0e+2;
t39 = l_s2_.*2.0e+2;
t40 = (l_ex_.*q13)./2.0;
t18 = q1.*t14;
t19 = q5.*t14;
t20 = q9.*t14;
t21 = q2.*t15;
t22 = q6.*t15;
t23 = q10.*t15;
t24 = q15.*t15;
t26 = -t15;
t34 = -t3;
t35 = -t5;
t36 = -t7;
t37 = -t9;
t41 = l_ex_+t25;
t42 = l_ex_.*t2.*3.0;
t43 = l_ex_.*t4.*3.0;
t44 = l_ex_.*t6.*3.0;
t45 = q2+t28;
t46 = q6+t30;
t47 = q10+t32;
t48 = -t38;
t49 = (q14.*t16)./2.0;
t50 = (t8.*t16)./2.0;
t51 = t14+t26;
t52 = t41.^2;
t53 = t39+t48;
t57 = q1+t2+t10+t21+t27+t34;
t58 = q5+t4+t11+t22+t29+t35;
t59 = q9+t6+t12+t23+t31+t36;
t60 = q14+t8+t13+t24+t33+t37;
t54 = exp(t53);
t55 = t54+1.0;
t56 = 1.0./t55;
t61 = t45.*t52.*t56;
t62 = t46.*t52.*t56;
t63 = t47.*t52.*t56;
t67 = t51.*t56.*t57;
t68 = t51.*t56.*t58;
t69 = t51.*t56.*t59;
t73 = (t52.*t56.*t60)./2.0;
t64 = -t61;
t65 = -t62;
t66 = -t63;
t70 = -t67;
t71 = -t68;
t72 = -t69;
t74 = -t73;
t75 = t40+t49+t50+t74;
t78 = t18+t42+t64+t70;
t79 = t19+t43+t65+t71;
t80 = t20+t44+t66+t72+1.0;
t76 = cos(t75);
t77 = sin(t75);
t81 = t78.^2;
t82 = t79.^2;
t83 = t80.^2;
t84 = t81+t82+t83;
t85 = 1.0./sqrt(t84);
t86 = (t80.*t85)./2.0;
t87 = t86+1.0./2.0;
t88 = sqrt(t87);
t89 = 1.0./t88;
t90 = t76.*t88.*tau_tx_;
t91 = t76.*t88.*tau_ty_;
t92 = t76.*t88.*tau_tz_;
t93 = t77.*t88.*tau_tx_;
t94 = t77.*t88.*tau_ty_;
t95 = t77.*t88.*tau_tz_;
t96 = -t93;
t97 = (t77.*t78.*t85.*t89)./2.0;
t98 = (t77.*t79.*t85.*t89)./2.0;
t99 = (t76.*t78.*t85.*t89)./2.0;
t100 = (t76.*t79.*t85.*t89)./2.0;
t101 = -t100;
t102 = t98+t99;
t103 = t97+t101;
t104 = t102.*tau_tx_;
t105 = t102.*tau_ty_;
t106 = t102.*tau_tz_;
t107 = t103.*tau_tx_;
t108 = t103.*tau_ty_;
t109 = t103.*tau_tz_;
t110 = -t106;
t111 = -t108;
t112 = t90+t94+t110;
t113 = t91+t96+t109;
t114 = t95+t105+t107;
t115 = t92+t104+t111;
out1 = [f_tx_;f_ty_;f_tz_;-t102.*t115+t103.*t114+t77.*t88.*(t91-t93+t109)+t76.*t88.*t112;t102.*t114+t103.*t115+t76.*t88.*(t91-t93+t109)-t77.*t88.*t112;t102.*t112-t103.*(t91-t93+t109)+t76.*t88.*t115+t77.*t88.*t114];