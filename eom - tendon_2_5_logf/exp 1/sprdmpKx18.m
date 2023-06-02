function out1 = sprdmpKx18(in1,in2,s,ds,t_sym)
%SPRDMPKX18
%    OUT1 = SPRDMPKX18(IN1,IN2,S,DS,T_SYM)

%    This function was generated by the Symbolic Math Toolbox version 8.6.
%    06-Apr-2021 13:01:31

E_s1_ = in1(:,3);
E_s2_ = in1(:,4);
G_s1_ = in1(:,5);
G_s2_ = in1(:,6);
kappa_x_ = in1(:,19);
kappa_y_ = in1(:,20);
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
r_s11_ = in1(:,7);
r_s12_ = in1(:,8);
r_s21_ = in1(:,9);
r_s22_ = in1(:,10);
t2 = l_s2_.*q4;
t3 = l_s2_.*q8;
t4 = l_s2_.*q12;
t5 = l_s2_.*q17;
t6 = q2.*s;
t7 = q4.*s;
t8 = q6.*s;
t9 = q8.*s;
t10 = q10.*s;
t11 = q12.*s;
t12 = q14.*s;
t13 = q15.*s;
t14 = q17.*s;
t15 = l_s2_.*2.0;
t16 = q1.*2.0;
t17 = q5.*2.0;
t18 = q9.*2.0;
t19 = r_s11_.^4;
t20 = r_s12_.^4;
t21 = s.*2.0;
t22 = s.^2;
t23 = s.^3;
t34 = -q3;
t35 = -q4;
t36 = -q7;
t37 = -q8;
t38 = -q11;
t39 = -q12;
t40 = -q16;
t41 = -q17;
t42 = -s;
t48 = l_s2_.*2.0e+2;
t49 = q13./2.0;
t50 = s.*2.0e+2;
t94 = E_s2_.*2.585444850980278e-11;
t24 = q2.*t15;
t25 = q6.*t15;
t26 = q10.*t15;
t27 = q15.*t15;
t28 = s.*t16;
t29 = s.*t17;
t30 = t6.*6.0;
t31 = s.*t18;
t32 = t8.*6.0;
t33 = t10.*6.0;
t43 = -t21;
t44 = -t7;
t45 = -t9;
t46 = -t11;
t47 = -t14;
t51 = -t20;
t52 = s.*t49;
t53 = l_s2_+t42;
t54 = q2+t35;
t55 = q6+t37;
t56 = q10+t39;
t57 = q15+t41;
t58 = s.*t6.*3.0;
t59 = s.*t8.*3.0;
t60 = s.*t10.*3.0;
t61 = -t50;
t62 = (s.*t12)./2.0;
t63 = (t13.*t22)./2.0;
t64 = s.*t13.*(3.0./2.0);
t65 = t15+t43;
t66 = t53.^2;
t67 = t19+t51;
t68 = t48+t61;
t72 = q1+t2+t6+t24+t34+t44;
t73 = q5+t3+t8+t25+t36+t45;
t74 = q9+t4+t10+t26+t38+t46;
t75 = q14+t5+t13+t27+t40+t47;
t69 = exp(t68);
t70 = t69+1.0;
t71 = 1.0./t70;
t76 = t54.*t66.*t71;
t77 = t55.*t66.*t71;
t78 = t56.*t66.*t71;
t79 = t54.*t65.*t71.*2.0;
t80 = t55.*t65.*t71.*2.0;
t81 = t56.*t65.*t71.*2.0;
t82 = (E_s1_.*t67.*t71.*pi)./4.0;
t86 = (t57.*t66.*t71)./2.0;
t88 = t71.*t72.*2.0;
t89 = t71.*t73.*2.0;
t90 = t71.*t74.*2.0;
t95 = t65.*t71.*t72;
t96 = t65.*t71.*t73;
t97 = t65.*t71.*t74;
t98 = (t65.*t71.*t75)./2.0;
t99 = (t66.*t71.*t75)./2.0;
t83 = -t76;
t84 = -t77;
t85 = -t78;
t87 = -t86;
t91 = -t88;
t92 = -t89;
t93 = -t90;
t100 = -t99;
t104 = t82+t94;
t101 = t52+t62+t63+t100;
t105 = t16+t30+t79+t91;
t106 = t17+t32+t80+t92;
t107 = t18+t33+t81+t93;
t108 = t28+t58+t83+t95;
t109 = t29+t59+t84+t96;
t110 = t31+t60+t85+t97+1.0;
t114 = t12+t49+t64+t87+t98;
t102 = cos(t101);
t103 = sin(t101);
t111 = t108.^2;
t112 = t109.^2;
t113 = t110.^2;
t115 = t105.*t108.*2.0;
t116 = t106.*t109.*2.0;
t117 = t107.*t110.*2.0;
t118 = t111+t112+t113;
t127 = t115+t116+t117;
t119 = 1.0./sqrt(t118);
t120 = t119.^3;
t121 = (t107.*t119)./2.0;
t122 = (t110.*t119)./2.0;
t123 = t122+1.0./2.0;
t142 = (t110.*t120.*t127)./4.0;
t124 = sqrt(t123);
t143 = -t142;
t125 = 1.0./t124;
t128 = t102.*t114.*t124;
t129 = t103.*t114.*t124;
t149 = t121+t143;
t126 = t125.^3;
t130 = (t102.*t105.*t119.*t125)./2.0;
t131 = (t102.*t106.*t119.*t125)./2.0;
t132 = (t103.*t105.*t119.*t125)./2.0;
t133 = (t103.*t106.*t119.*t125)./2.0;
t137 = t102.*t108.*t119.*t125;
t138 = t102.*t109.*t119.*t125;
t139 = t103.*t108.*t119.*t125;
t140 = t103.*t109.*t119.*t125;
t150 = (t102.*t108.*t120.*t125.*t127)./4.0;
t151 = (t102.*t109.*t120.*t125.*t127)./4.0;
t152 = (t103.*t108.*t120.*t125.*t127)./4.0;
t153 = (t103.*t109.*t120.*t125.*t127)./4.0;
t157 = (t102.*t125.*t149)./2.0;
t158 = (t103.*t125.*t149)./2.0;
t134 = -t130;
t135 = -t131;
t136 = -t133;
t141 = -t139;
t144 = (t114.*t137)./2.0;
t145 = (t114.*t138)./2.0;
t146 = (t114.*t139)./2.0;
t147 = (t114.*t140)./2.0;
t154 = -t152;
t155 = t137+t140;
t159 = -t157;
t160 = (t102.*t108.*t119.*t126.*t149)./4.0;
t161 = (t102.*t109.*t119.*t126.*t149)./4.0;
t162 = (t103.*t108.*t119.*t126.*t149)./4.0;
t163 = (t103.*t109.*t119.*t126.*t149)./4.0;
t165 = t128+t158;
t148 = -t145;
t156 = t138+t141;
t164 = -t162;
t166 = t129+t159;
t167 = t134+t136+t146+t148+t150+t153+t160+t163;
t168 = t132+t135+t144+t147+t151+t154+t161+t164;
out1 = [0.0;0.0;(1.0./t119-1.0).*(E_s2_.*pi.*(r_s21_.^2-r_s22_.^2)-E_s1_.*t71.*pi.*(r_s11_.^2-r_s12_.^2));t104.*(kappa_x_+t155.*t165+t156.*t166-t102.*t124.*t168.*2.0+t103.*t124.*t167.*2.0);t104.*(kappa_y_-t155.*t166+t156.*t165+t102.*t124.*t167.*2.0+t103.*t124.*t168.*2.0);((G_s2_.*pi.*(r_s21_.^4-r_s22_.^4))./2.0-(G_s1_.*t67.*t71.*pi)./2.0).*(t155.*t168-t156.*t167+t102.*t124.*t165.*2.0+t103.*t124.*t166.*2.0)];