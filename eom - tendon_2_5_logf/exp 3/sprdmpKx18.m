function out1 = sprdmpKx18(in1,in2,s,ds,t_sym)
%SPRDMPKX18
%    OUT1 = SPRDMPKX18(IN1,IN2,S,DS,T_SYM)

%    This function was generated by the Symbolic Math Toolbox version 8.6.
%    30-Apr-2021 15:51:29

E_s1_ = in1(:,3);
E_s2_ = in1(:,4);
G_s1_ = in1(:,5);
G_s2_ = in1(:,6);
kappa_x_ = in1(:,20);
kappa_y_ = in1(:,21);
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
t74 = q1+t2+t6+t24+t34+t44;
t75 = q5+t3+t8+t25+t36+t45;
t76 = q9+t4+t10+t26+t38+t46;
t77 = q14+t5+t13+t27+t40+t47;
t69 = exp(t68);
t71 = (E_s1_.*t67.*pi)./4.0;
t70 = t69+1.0;
t72 = 1.0./t70;
t73 = t72-1.0;
t78 = t54.*t66.*t72;
t79 = t55.*t66.*t72;
t80 = t56.*t66.*t72;
t81 = t54.*t65.*t72.*2.0;
t82 = t55.*t65.*t72.*2.0;
t83 = t56.*t65.*t72.*2.0;
t87 = (t57.*t66.*t72)./2.0;
t89 = t72.*t74.*2.0;
t90 = t72.*t75.*2.0;
t91 = t72.*t76.*2.0;
t95 = t65.*t72.*t74;
t96 = t65.*t72.*t75;
t97 = t65.*t72.*t76;
t98 = (t65.*t72.*t77)./2.0;
t99 = (t66.*t72.*t77)./2.0;
t84 = -t78;
t85 = -t79;
t86 = -t80;
t88 = -t87;
t92 = -t89;
t93 = -t90;
t94 = -t91;
t100 = -t99;
t101 = E_s2_.*t73.*2.585444850980278e-11;
t102 = t52+t62+t63+t100;
t105 = t71+t101;
t106 = t16+t30+t81+t92;
t107 = t17+t32+t82+t93;
t108 = t18+t33+t83+t94;
t109 = t28+t58+t84+t95;
t110 = t29+t59+t85+t96;
t111 = t31+t60+t86+t97+1.0;
t115 = t12+t49+t64+t88+t98;
t103 = cos(t102);
t104 = sin(t102);
t112 = t109.^2;
t113 = t110.^2;
t114 = t111.^2;
t116 = t106.*t109.*2.0;
t117 = t107.*t110.*2.0;
t118 = t108.*t111.*2.0;
t119 = t112+t113+t114;
t128 = t116+t117+t118;
t120 = 1.0./sqrt(t119);
t121 = t120.^3;
t122 = (t108.*t120)./2.0;
t123 = (t111.*t120)./2.0;
t124 = t123+1.0./2.0;
t143 = (t111.*t121.*t128)./4.0;
t125 = sqrt(t124);
t144 = -t143;
t126 = 1.0./t125;
t129 = t103.*t115.*t125;
t130 = t104.*t115.*t125;
t150 = t122+t144;
t127 = t126.^3;
t131 = (t103.*t106.*t120.*t126)./2.0;
t132 = (t103.*t107.*t120.*t126)./2.0;
t133 = (t104.*t106.*t120.*t126)./2.0;
t134 = (t104.*t107.*t120.*t126)./2.0;
t138 = t103.*t109.*t120.*t126;
t139 = t103.*t110.*t120.*t126;
t140 = t104.*t109.*t120.*t126;
t141 = t104.*t110.*t120.*t126;
t151 = (t103.*t109.*t121.*t126.*t128)./4.0;
t152 = (t103.*t110.*t121.*t126.*t128)./4.0;
t153 = (t104.*t109.*t121.*t126.*t128)./4.0;
t154 = (t104.*t110.*t121.*t126.*t128)./4.0;
t158 = (t103.*t126.*t150)./2.0;
t159 = (t104.*t126.*t150)./2.0;
t135 = -t131;
t136 = -t132;
t137 = -t134;
t142 = -t140;
t145 = (t115.*t138)./2.0;
t146 = (t115.*t139)./2.0;
t147 = (t115.*t140)./2.0;
t148 = (t115.*t141)./2.0;
t155 = -t153;
t156 = t138+t141;
t160 = -t158;
t161 = (t103.*t109.*t120.*t127.*t150)./4.0;
t162 = (t103.*t110.*t120.*t127.*t150)./4.0;
t163 = (t104.*t109.*t120.*t127.*t150)./4.0;
t164 = (t104.*t110.*t120.*t127.*t150)./4.0;
t166 = t129+t159;
t149 = -t146;
t157 = t139+t142;
t165 = -t163;
t167 = t130+t160;
t168 = t135+t137+t147+t149+t151+t154+t161+t164;
t169 = t133+t136+t145+t148+t152+t155+t162+t165;
out1 = [0.0;0.0;(1.0./t120-1.0).*(E_s1_.*pi.*(r_s11_.^2-r_s12_.^2)-E_s2_.*t73.*pi.*(r_s21_.^2-r_s22_.^2));-t105.*(-kappa_x_.*t73+t156.*t166+t157.*t167-t103.*t125.*t169.*2.0+t104.*t125.*t168.*2.0);-t105.*(-kappa_y_.*t73-t156.*t167+t157.*t166+t103.*t125.*t168.*2.0+t104.*t125.*t169.*2.0);((G_s1_.*t67.*pi)./2.0-(G_s2_.*t73.*pi.*(r_s21_.^4-r_s22_.^4))./2.0).*(t156.*t169-t157.*t168+t103.*t125.*t166.*2.0+t104.*t125.*t167.*2.0)];
