function out1 = rjtipF(in1,in2,s,ds,t_sym)
%RJTIPF
%    OUT1 = RJTIPF(IN1,IN2,S,DS,T_SYM)

%    This function was generated by the Symbolic Math Toolbox version 8.6.
%    15-Jun-2021 05:42:49

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
r_f_ = in1(:,18);
r_s2_ = in1(:,4);
t2 = NaN;
t3 = l_s_.*q13;
t4 = l_s_.*s;
t5 = l_s_.*2.0;
t6 = l_s_.^2;
t7 = l_s_.^3;
t8 = s.^2;
t9 = s.^3;
t15 = -l_s_;
t16 = l_s_.*q1.*-2.0;
t17 = l_s_.*q5.*-2.0;
t18 = l_s_.*q9.*-2.0;
t20 = sqrt(2.0);
t32 = l_s_.*2.0e+2;
t66 = q1.*(1.1e+1./2.5e+2);
t67 = q5.*(1.1e+1./2.5e+2);
t68 = q9.*(1.1e+1./2.5e+2);
t69 = q14.*(1.1e+1./2.5e+2);
t70 = q13.*(1.1e+1./5.0e+2);
t74 = l_s_-1.1e+1./5.0e+2;
t90 = q1.*4.84e-4;
t91 = q5.*4.84e-4;
t92 = q9.*4.84e-4;
t93 = q14.*4.84e-4;
t94 = q2.*1.452e-3;
t95 = q6.*1.452e-3;
t96 = q10.*1.452e-3;
t97 = q15.*1.452e-3;
t125 = q2.*1.0648e-5;
t126 = q6.*1.0648e-5;
t127 = q10.*1.0648e-5;
t128 = q15.*1.0648e-5;
t10 = q1.*t5;
t11 = q5.*t5;
t12 = q9.*t5;
t13 = t4.*2.0;
t14 = s.*t3;
t19 = -t3;
t21 = q1.*t6;
t22 = q2.*t7;
t23 = q5.*t6;
t24 = q6.*t7;
t25 = q9.*t6;
t26 = q10.*t7;
t27 = q14.*t6;
t28 = q15.*t7;
t33 = t3./2.0;
t34 = t4.*2.0e+2;
t35 = q2.*t6.*3.0;
t36 = q6.*t6.*3.0;
t37 = q10.*t6.*3.0;
t38 = q1.*t4.*-2.0;
t39 = q5.*t4.*-2.0;
t40 = q9.*t4.*-2.0;
t42 = -t32;
t56 = q1.*t4.^2;
t57 = q2.*t4.^3;
t58 = q5.*t4.^2;
t59 = q6.*t4.^3;
t60 = q9.*t4.^2;
t61 = q10.*t4.^3;
t62 = q14.*t4.^2;
t63 = q15.*t4.^3;
t71 = q2.*t4.^2.*3.0;
t72 = q6.*t4.^2.*3.0;
t73 = q10.*t4.^2.*3.0;
t81 = t5-1.1e+1./2.5e+2;
t82 = t74.^2;
t83 = t74.^3;
t86 = t4-1.1e+1./5.0e+2;
t131 = t66+t94;
t132 = t67+t95;
t133 = t68+t96+1.0;
t134 = q13+t69+t97;
t29 = q1.*t13;
t30 = q5.*t13;
t31 = q9.*t13;
t41 = -t14;
t43 = -t34;
t44 = -t21;
t45 = -t22;
t46 = -t35;
t47 = -t23;
t48 = -t24;
t49 = -t36;
t50 = -t25;
t51 = -t26;
t52 = -t37;
t53 = -t27;
t54 = -t28;
t55 = t14./2.0;
t64 = t27./2.0;
t65 = t28./2.0;
t75 = -t71;
t76 = -t72;
t77 = -t73;
t78 = -t62;
t79 = -t63;
t80 = t42+2.2e+1./5.0;
t84 = t62./2.0;
t85 = t63./2.0;
t89 = t13-1.1e+1./2.5e+2;
t99 = q3.*t81;
t100 = q7.*t81;
t101 = q11.*t81;
t102 = q3.*t82;
t103 = q4.*t83;
t104 = q7.*t82;
t105 = q8.*t83;
t106 = q11.*t82;
t107 = q12.*t83;
t108 = q16.*t82;
t109 = q17.*t83;
t110 = t86.^2;
t111 = t86.^3;
t116 = q4.*t82.*3.0;
t117 = q8.*t82.*3.0;
t118 = q12.*t82.*3.0;
t135 = t74.*t131;
t136 = t74.*t132;
t137 = t74.*t133;
t138 = t74.*t134;
t139 = t86.*t134;
t87 = exp(t80);
t88 = t43+2.2e+1./5.0;
t112 = q3.*t89;
t113 = q7.*t89;
t114 = q11.*t89;
t120 = q16.*t110;
t121 = q17.*t111;
t122 = q4.*t110.*3.0;
t123 = q8.*t110.*3.0;
t124 = q12.*t110.*3.0;
t140 = t16+t46+t99+t116+t131;
t141 = t17+t49+t100+t117+t132;
t142 = t18+t52+t68+t96+t101+t118;
t158 = t44+t45+t90+t102+t103+t125+t135;
t159 = t47+t48+t91+t104+t105+t126+t136;
t166 = t15+t50+t51+t92+t106+t107+t127+t137+1.1e+1./5.0e+2;
t167 = t19+t53+t54+t70+t93+t108+t109+t128+t138;
t98 = exp(t88);
t115 = t87+1.0;
t143 = t38+t75+t112+t122+t131;
t144 = t39+t76+t113+t123+t132;
t145 = t40+t68+t77+t96+t114+t124;
t170 = t41+t70+t78+t79+t93+t120+t121+t128+t139;
t119 = t98+1.0;
t129 = 1.0./t115;
t130 = 1.0./t119;
t146 = t129.*t140;
t147 = t129.*t141;
t148 = t129.*t142;
t168 = t129.*t158;
t169 = t129.*t159;
t171 = t129.*t166;
t172 = (t129.*t167)./2.0;
t149 = t130.*t143;
t150 = t130.*t144;
t151 = t130.*t145;
t152 = t10+t35+t146;
t153 = t11+t36+t147;
t154 = t12+t37+t148+1.0;
t173 = (t130.*t170)./2.0;
t174 = t33+t64+t65+t172;
t155 = t152.^2;
t156 = t153.^2;
t157 = t154.^2;
t160 = t29+t71+t149;
t161 = t30+t72+t150;
t162 = t31+t73+t151+1.0;
t175 = cos(t174);
t176 = sin(t174);
t177 = t55+t84+t85+t173;
t163 = t160.^2;
t164 = t161.^2;
t165 = t162.^2;
t178 = cos(t177);
t179 = sin(t177);
t180 = t155+t156+t157;
t181 = 1.0./sqrt(t180);
t182 = t163+t164+t165;
t183 = 1.0./sqrt(t182);
t184 = t154.*t181;
t185 = t184+1.0;
t188 = t162.*t183;
t186 = sqrt(t185);
t189 = t188+1.0;
t187 = 1.0./t186;
t190 = sqrt(t189);
t192 = (t20.*t175.*t186)./2.0;
t193 = (t20.*t176.*t186)./2.0;
t191 = 1.0./t190;
t194 = (t20.*t152.*t175.*t181.*t187)./2.0;
t195 = (t20.*t153.*t175.*t181.*t187)./2.0;
t196 = (t20.*t152.*t176.*t181.*t187)./2.0;
t197 = (t20.*t153.*t176.*t181.*t187)./2.0;
t198 = -t195;
t199 = -t196;
t200 = t194+t197;
t201 = t196+t198;
t202 = t195+t199;
out1 = reshape([t56+t57+t130.*(-t56-t57+t90+t125+q3.*t110+q4.*t111+t86.*t131),t21+t22+t168,t58+t59+t130.*(-t58-t59+t91+t126+q7.*t110+q8.*t111+t86.*t132),t23+t24+t169,t4+t60+t61+t130.*(-t4-t60-t61+t92+t127+q11.*t110+q12.*t111+t86.*t133+1.1e+1./5.0e+2),l_s_+t25+t26+t171,t2,t21+t22+t168+l_f_.*t20.*t175.*t186.*t200-l_f_.*t20.*t176.*t186.*t202,t2,t23+t24+t169+l_f_.*t20.*t176.*t186.*t200+l_f_.*t20.*t175.*t186.*t202,t2,l_s_+t25+t26+t171-l_f_.*t200.^2-l_f_.*t202.^2+(l_f_.*t175.^2.*t185)./2.0+(l_f_.*t176.^2.*t185)./2.0,(t20.*t178.*t190)./2.0,t192,(t20.*t160.*t179.*t183.*t191)./2.0-(t20.*t161.*t178.*t183.*t191)./2.0,t201,(t20.*t160.*t178.*t183.*t191)./2.0+(t20.*t161.*t179.*t183.*t191)./2.0,t200,(t20.*t179.*t190)./2.0,t193,t2,t192,t2,t201,t2,t200,t2,t193,1.0./sqrt(lambda_).*r_s2_,r_f_],[2,15]);
