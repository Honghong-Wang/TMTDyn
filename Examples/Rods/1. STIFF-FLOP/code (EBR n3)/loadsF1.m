function [out1,out2] = loadsF1(in1,in2,s)
%LOADSF1
%    [OUT1,OUT2] = LOADSF1(IN1,IN2,S)

%    This function was generated by the Symbolic Math Toolbox version 8.0.
%    30-Jan-2019 17:48:29

f_tx_sym = in1(:,28);
f_ty_sym = in1(:,29);
f_tz_sym = in1(:,30);
l_f_sym = in1(:,17);
l_s_sym = in1(:,5);
q4 = in2(:,4);
q5 = in2(:,5);
q6 = in2(:,6);
q7 = in2(:,7);
q8 = in2(:,8);
q9 = in2(:,9);
q10 = in2(:,10);
q11 = in2(:,11);
q12 = in2(:,12);
q13 = in2(:,13);
q14 = in2(:,14);
q15 = in2(:,15);
q16 = in2(:,16);
q17 = in2(:,17);
q18 = in2(:,18);
tau_tx_sym = in1(:,31);
tau_ty_sym = in1(:,32);
tau_tz_sym = in1(:,33);
t2 = l_s_sym.*(1.0./3.0);
t3 = q6.*(1.0./2.0);
t4 = q12.*(1.0./2.0);
t5 = q4.*q11.*(1.0./4.0);
t17 = q5.*q10.*(1.0./4.0);
t6 = t3+t4+t5-t17;
t7 = q15+t2;
t8 = q5.*(1.0./2.0);
t9 = q11.*(1.0./2.0);
t10 = q6.*q10.*(1.0./4.0);
t18 = q4.*q12.*(1.0./4.0);
t11 = t8+t9+t10-t18;
t12 = q4.*(1.0./2.0);
t13 = q10.*(1.0./2.0);
t14 = q5.*q12.*(1.0./4.0);
t23 = q6.*q11.*(1.0./4.0);
t15 = t12+t13+t14-t23;
t16 = l_s_sym.*(1.0./6.0);
t19 = q4.*q10.*(1.0./4.0);
t20 = q5.*q11.*(1.0./4.0);
t21 = q6.*q12.*(1.0./4.0);
t22 = t19+t20+t21-1.0;
t24 = q15.*(1.0./2.0);
t25 = q10.*q14.*(1.0./4.0);
t73 = q11.*q13.*(1.0./4.0);
t26 = t16+t24+t25-t73;
t27 = q10.*q13.*(1.0./4.0);
t28 = q11.*q14.*(1.0./4.0);
t29 = q12.*t7.*(1.0./4.0);
t30 = t27+t28+t29;
t31 = q14.*(1.0./2.0);
t32 = q12.*q13.*(1.0./4.0);
t74 = q10.*t7.*(1.0./4.0);
t33 = t31+t32-t74;
t34 = q13.*(1.0./2.0);
t35 = q11.*t7.*(1.0./4.0);
t76 = q12.*q14.*(1.0./4.0);
t36 = t34+t35-t76;
t37 = t7.*t15;
t38 = q14.*t22;
t97 = q13.*t6;
t39 = t37+t38-t97;
t40 = q14.*t6;
t41 = q13.*t22;
t82 = t7.*t11;
t42 = t40+t41-t82;
t43 = q10.*q16.*(1.0./8.0);
t44 = q11.*q17.*(1.0./8.0);
t45 = q12.*q18.*(1.0./8.0);
t46 = t43+t44+t45-1.0./2.0;
t47 = q16.*t15.*(1.0./2.0);
t48 = q17.*t11.*(1.0./2.0);
t49 = q18.*t6.*(1.0./2.0);
t50 = t19+t20+t21+t47+t48+t49-1.0;
t51 = q10.*(1.0./4.0);
t52 = q16.*(1.0./4.0);
t53 = q11.*q18.*(1.0./8.0);
t85 = q12.*q17.*(1.0./8.0);
t54 = t51+t52+t53-t85;
t55 = q18.*t11.*(1.0./2.0);
t83 = q17.*t6.*(1.0./2.0);
t84 = q16.*t22.*(1.0./2.0);
t56 = t12+t13+t14-t23+t55-t83-t84;
t57 = q11.*(1.0./4.0);
t58 = q17.*(1.0./4.0);
t59 = q12.*q16.*(1.0./8.0);
t86 = q10.*q18.*(1.0./8.0);
t60 = t57+t58+t59-t86;
t61 = q16.*t6.*(1.0./2.0);
t90 = q18.*t15.*(1.0./2.0);
t91 = q17.*t22.*(1.0./2.0);
t62 = t8+t9+t10-t18+t61-t90-t91;
t63 = q12.*(1.0./4.0);
t64 = q18.*(1.0./4.0);
t65 = q10.*q17.*(1.0./8.0);
t89 = q11.*q16.*(1.0./8.0);
t66 = t63+t64+t65-t89;
t67 = q17.*t15.*(1.0./2.0);
t87 = q16.*t11.*(1.0./2.0);
t88 = q18.*t22.*(1.0./2.0);
t68 = t3+t4+t5-t17+t67-t87-t88;
t69 = q13.*t15;
t70 = q14.*t11;
t71 = t6.*t7;
t72 = t69+t70+t71;
t75 = q9+t2;
t77 = q9.*(1.0./2.0);
t78 = t16+t77;
t79 = t7.*t22;
t80 = q13.*t11;
t114 = q14.*t15;
t81 = t79+t80-t114;
t92 = t22.*t26;
t93 = t7.*t22.*(1.0./2.0);
t94 = q5.*q7.*(1.0./2.0);
t95 = q13.*t11.*(1.0./2.0);
t96 = t11.*t36;
t98 = q10.*t39.*(1.0./4.0);
t99 = l_f_sym.*t54.*t56.*2.0;
t100 = l_f_sym.*t60.*t62.*2.0;
t101 = q4.*q7.*(1.0./2.0);
t102 = q5.*q8.*(1.0./2.0);
t103 = q13.*t15.*(1.0./2.0);
t104 = q14.*t11.*(1.0./2.0);
t105 = t6.*t26;
t106 = q6.*t75.*(1.0./4.0);
t107 = t6.*t7.*(1.0./2.0);
t108 = t11.*t33;
t109 = t15.*t36;
t110 = q6.*t78.*(1.0./2.0);
t111 = t22.*t30;
t112 = q10.*t42.*(1.0./4.0);
t113 = q11.*t39.*(1.0./4.0);
t115 = q12.*t81.*(1.0./4.0);
t116 = l_f_sym.*t56.*t60.*2.0;
t117 = l_f_sym.*t50.*t66.*2.0;
t143 = l_f_sym.*t46.*t68.*2.0;
t144 = l_f_sym.*t54.*t62.*2.0;
t118 = t101+t102+t103+t104+t105+t106+t107+t108+t109+t110+t111+t112+t113+t115+t116+t117-t143-t144;
t119 = t54.*t62.*2.0;
t120 = t56.*t60.*2.0;
t121 = t50.*t66.*2.0;
t122 = t46.*t68.*2.0;
t123 = t54.*t56.*2.0;
t124 = t46.*t50.*2.0;
t125 = t11.*t30;
t126 = q6.*q7.*(1.0./2.0);
t127 = q13.*t6.*(1.0./2.0);
t128 = q11.*t72.*(1.0./4.0);
t129 = t6.*t36;
t130 = q10.*t81.*(1.0./4.0);
t131 = l_f_sym.*t46.*t56.*2.0;
t132 = l_f_sym.*t50.*t54.*2.0;
t133 = l_f_sym.*t60.*t68.*2.0;
t134 = l_f_sym.*t62.*t66.*2.0;
t135 = q6.*q8.*(1.0./2.0);
t136 = q14.*t6.*(1.0./2.0);
t137 = t22.*t36;
t138 = t6.*t33;
t139 = q13.*t22.*(1.0./2.0);
t140 = q11.*t81.*(1.0./4.0);
t141 = l_f_sym.*t46.*t62.*2.0;
t142 = l_f_sym.*t50.*t60.*2.0;
t145 = t54.*t68.*2.0;
t146 = t56.*t66.*2.0;
t147 = t50.*t54.*2.0;
t148 = t60.*t68.*2.0;
t149 = t62.*t66.*2.0;
t150 = t46.*t56.*2.0;
t151 = t60.*t62.*2.0;
t152 = q4.*q5.*(1.0./2.0);
t153 = q4.^2;
t154 = t153.*(1.0./4.0);
t155 = q5.^2;
t156 = q6.^2;
t157 = q4.*q6.*(1.0./2.0);
t158 = q5.*q6.*(1.0./2.0);
t159 = t155.*(1.0./4.0);
t160 = q4.*q14.*(1.0./4.0);
t161 = q5.*q13.*(1.0./4.0);
t162 = t16+t24+t160+t161;
t163 = q5.*q14.*(1.0./4.0);
t164 = q6.*t7.*(1.0./4.0);
t185 = q4.*q13.*(1.0./4.0);
t165 = t163+t164-t185;
t166 = q14.*t15.*(1.0./2.0);
t167 = q6.*q13.*(1.0./4.0);
t168 = q4.*t7.*(1.0./4.0);
t169 = -t31+t167+t168;
t170 = q6.*q14.*(1.0./4.0);
t187 = q5.*t7.*(1.0./4.0);
t171 = t34+t170-t187;
t172 = q5.*q17.*(1.0./8.0);
t173 = q6.*q18.*(1.0./8.0);
t189 = q4.*q16.*(1.0./8.0);
t174 = t172+t173-t189+1.0./2.0;
t175 = q4.*(1.0./4.0);
t176 = q6.*q17.*(1.0./8.0);
t190 = q5.*q18.*(1.0./8.0);
t177 = t52+t175+t176-t190;
t178 = q5.*(1.0./4.0);
t179 = q4.*q18.*(1.0./8.0);
t180 = q6.*q16.*(1.0./8.0);
t181 = -t58+t178+t179+t180;
t182 = q4.*q17.*(1.0./8.0);
t183 = q5.*q16.*(1.0./8.0);
t191 = q6.*(1.0./4.0);
t184 = t64+t182+t183-t191;
t186 = t7.*t15.*(1.0./2.0);
t188 = q14.*t22.*(1.0./2.0);
t192 = q6.*t72.*(1.0./4.0);
t193 = q4.*t39.*(1.0./4.0);
t194 = q5.*t42.*(1.0./4.0);
t195 = t16+t24-t160-t161;
t196 = t31-t167+t168;
t197 = t34+t170+t187;
t198 = -t163+t164+t185;
t199 = q4.*t42.*(1.0./4.0);
t200 = -t172+t173+t189+1.0./2.0;
t201 = t52-t175+t176+t190;
t202 = t58+t178+t179-t180;
t203 = -t64+t182+t183+t191;
t204 = t7.*t11.*(1.0./2.0);
t205 = q4.*t81.*(1.0./4.0);
t206 = q6.*t42.*(1.0./4.0);
t207 = t163-t164+t185;
t208 = q4.*t72.*(1.0./4.0);
t209 = t16+t24-t160+t161;
t210 = -t34+t170+t187;
t211 = t31+t167+t168;
t212 = q5.*t81.*(1.0./4.0);
t213 = q6.*t39.*(1.0./4.0);
t214 = t172-t173+t189+1.0./2.0;
t215 = -t52+t175+t176+t190;
t216 = t58-t178+t179+t180;
t217 = t64-t182+t183+t191;
t218 = q5.*t39.*(1.0./4.0);
t219 = t11.*t15.*2.0;
t220 = t22.^2;
t221 = t15.^2;
t222 = t11.^2;
t223 = t6.^2;
t224 = t11.*t22.*2.0;
t225 = t6.*t15.*2.0;
t226 = t6.*t11.*2.0;
t227 = q4.*q10.*(1.0./8.0);
t228 = q5.*q11.*(1.0./8.0);
t229 = q6.*q12.*(1.0./8.0);
t230 = t227+t228+t229-1.0./2.0;
t231 = q5.*q12.*(1.0./8.0);
t237 = q6.*q11.*(1.0./8.0);
t232 = t51+t175+t231-t237;
t233 = q6.*q10.*(1.0./8.0);
t238 = q4.*q12.*(1.0./8.0);
t234 = t57+t178+t233-t238;
t235 = q4.*q11.*(1.0./8.0);
t239 = q5.*q10.*(1.0./8.0);
t236 = t63+t191+t235-t239;
t240 = l_f_sym.*t56.*t232.*2.0;
t241 = l_f_sym.*t68.*t236.*2.0;
t242 = t62.*t232.*2.0;
t243 = t68.*t230.*2.0;
t244 = t56.*t232.*2.0;
t245 = t62.*t234.*2.0;
t246 = t68.*t236.*2.0;
t247 = t50.*t230.*2.0;
t248 = t244+t245+t246+t247;
t249 = l_f_sym.*t56.*t230.*2.0;
t250 = l_f_sym.*t50.*t232.*2.0;
t251 = l_f_sym.*t62.*t230.*2.0;
t252 = l_f_sym.*t68.*t232.*2.0;
t253 = l_f_sym.*t50.*t234.*2.0;
t254 = l_f_sym.*t56.*t236.*2.0;
t255 = l_f_sym.*t62.*t232.*2.0;
t256 = l_f_sym.*t56.*t234.*2.0;
t257 = t68.*t232.*2.0;
t258 = t50.*t234.*2.0;
t259 = t68.*t234.*2.0;
t260 = t56.*t230.*2.0;
out1 = reshape([1.0,0.0,0.0,t118,q9+t2-t92-t93-t94-t95-t96-t98-t99-t100+t166+q4.*q8.*(1.0./2.0)+q11.*t42.*(1.0./4.0)+q12.*t72.*(1.0./4.0)+t6.*t30+t15.*t33+l_f_sym.*t46.*t50.*2.0+l_f_sym.*t66.*t68.*2.0,-q8-t125-t126-t127-t128-t129-t130-t131-t132-t133-t134+t186+t188+q12.*t42.*(1.0./4.0)+q4.*t75.*(1.0./4.0)+q4.*t78.*(1.0./2.0)+t15.*t26+t22.*t33,t154-t155.*(1.0./4.0)-t156.*(1.0./4.0)+1.0,-q6+t152,q5+t157,t103+t104+t107+t199-q5.*t39.*(1.0./4.0)-q6.*t81.*(1.0./4.0)+t6.*t162-t11.*t169+t15.*t171-t22.*t165+l_f_sym.*t50.*t184.*2.0-l_f_sym.*t56.*t181.*2.0-l_f_sym.*t62.*t177.*2.0+l_f_sym.*t68.*t174.*2.0,-t93-t95+t166-t192+t193+t194-t6.*t198-t11.*t197+t15.*t196-t22.*t195-l_f_sym.*t50.*t200.*2.0-l_f_sym.*t56.*t201.*2.0-l_f_sym.*t62.*t202.*2.0-l_f_sym.*t68.*t203.*2.0,-t127+t186+t188+t205+t206+q5.*t72.*(1.0./4.0)+t6.*t210+t11.*t207+t15.*t209+t22.*t211+l_f_sym.*t50.*t215.*2.0+l_f_sym.*t56.*t214.*2.0-l_f_sym.*t62.*t217.*2.0-l_f_sym.*t68.*t216.*2.0,t220+t221-t222-t223,t219+t6.*t22.*2.0,-t224+t225,l_f_sym.*t50.*t236.*-2.0-l_f_sym.*t56.*t234.*2.0-l_f_sym.*t62.*t232.*2.0-l_f_sym.*t68.*t230.*2.0,t240-t241+l_f_sym.*t50.*t230.*2.0-l_f_sym.*t62.*t234.*2.0,-t249+t250-l_f_sym.*t62.*t236.*2.0+l_f_sym.*t68.*t234.*2.0,0.0,1.0,0.0,-q9-t2+t92+t93+t94+t95+t96+t98+t99+t100-q4.*q8.*(1.0./2.0)-q14.*t15.*(1.0./2.0)-q11.*t42.*(1.0./4.0)-q12.*t72.*(1.0./4.0)-t6.*t30-t15.*t33-l_f_sym.*t46.*t50.*2.0-l_f_sym.*t66.*t68.*2.0,t118,q7-t135-t136-t137-t138-t139-t140-t141-t142+t204+q12.*t39.*(1.0./4.0)+q5.*t75.*(1.0./4.0)+q10.*t72.*(1.0./4.0)+q5.*t78.*(1.0./2.0)+t11.*t26+t15.*t30+l_f_sym.*t54.*t68.*2.0+l_f_sym.*t56.*t66.*2.0,q6+t152,-t154-t156.*(1.0./4.0)+t159+1.0,-q4+t158,t93+t95-t166+t192+t193+t194+t6.*t165+t11.*t171+t15.*t169+t22.*t162+l_f_sym.*t50.*t174.*2.0+l_f_sym.*t56.*t177.*2.0-l_f_sym.*t62.*t181.*2.0-l_f_sym.*t68.*t184.*2.0,t103+t104+t107-t199+t218-q6.*t81.*(1.0./4.0)+t6.*t195+t11.*t196+t15.*t197-t22.*t198-l_f_sym.*t50.*t203.*2.0+l_f_sym.*t56.*t202.*2.0-l_f_sym.*t62.*t201.*2.0+l_f_sym.*t68.*t200.*2.0,-t136-t139+t204-t208+t212+t213-t6.*t211+t11.*t209-t15.*t207+t22.*t210-l_f_sym.*t50.*t216.*2.0+l_f_sym.*t56.*t217.*2.0+l_f_sym.*t62.*t214.*2.0-l_f_sym.*t68.*t215.*2.0,t219-t6.*t22.*2.0,t220-t221+t222-t223,t226+t15.*t22.*2.0,t240+t241-l_f_sym.*t50.*t230.*2.0-l_f_sym.*t62.*t234.*2.0,t255+t256-l_f_sym.*t50.*t236.*2.0-l_f_sym.*t68.*t230.*2.0,-t251-t252+t253+t254,0.0,0.0,1.0,q8+t125+t126+t127+t128+t129+t130+t131+t132+t133+t134-q14.*t22.*(1.0./2.0)-q12.*t42.*(1.0./4.0)-q4.*t75.*(1.0./4.0)-q4.*t78.*(1.0./2.0)-t7.*t15.*(1.0./2.0)-t15.*t26-t22.*t33,-q7+t135+t136+t137+t138+t139+t140+t141+t142-q12.*t39.*(1.0./4.0)-q5.*t75.*(1.0./4.0)-q10.*t72.*(1.0./4.0)-q5.*t78.*(1.0./2.0)-t7.*t11.*(1.0./2.0)-t11.*t26-t15.*t30-l_f_sym.*t54.*t68.*2.0-l_f_sym.*t56.*t66.*2.0,t118,-q5+t157,q4+t158,-t154+t156.*(1.0./4.0)-t159+1.0,t127-t186-t188+t205+t206-q5.*t72.*(1.0./4.0)-t11.*t165+t6.*t171-t15.*t162+t22.*t169+l_f_sym.*t50.*t177.*2.0-l_f_sym.*t56.*t174.*2.0+l_f_sym.*t62.*t184.*2.0-l_f_sym.*t68.*t181.*2.0,t136+t139-t204+t208+t212+t213+t6.*t196-t11.*t195+t15.*t198+t22.*t197+l_f_sym.*t50.*t202.*2.0+l_f_sym.*t56.*t203.*2.0-l_f_sym.*t62.*t200.*2.0-l_f_sym.*t68.*t201.*2.0,t103+t104+t107-t199-t218+q6.*t81.*(1.0./4.0)+t6.*t209+t11.*t211-t15.*t210-t22.*t207+l_f_sym.*t50.*t217.*2.0+l_f_sym.*t56.*t216.*2.0+l_f_sym.*t62.*t215.*2.0+l_f_sym.*t68.*t214.*2.0,t224+t225,t226-t15.*t22.*2.0,t220-t221-t222+t223,t249+t250-l_f_sym.*t62.*t236.*2.0-l_f_sym.*t68.*t234.*2.0,t251+t252+t253+t254,t255-t256+l_f_sym.*t50.*t236.*2.0-l_f_sym.*t68.*t230.*2.0,0.0,0.0,0.0,t123+t124-t60.*t62.*2.0-t66.*t68.*2.0,t119+t120-t121-t122,t145+t146+t46.*t62.*2.0+t50.*t60.*2.0,0.0,0.0,0.0,t50.*t174.*-2.0+t56.*t177.*2.0+t62.*t181.*2.0-t68.*t184.*2.0,t50.*t203.*2.0+t56.*t202.*2.0+t62.*t201.*2.0+t68.*t200.*2.0,t50.*t216.*2.0+t56.*t217.*2.0-t62.*t214.*2.0-t68.*t215.*2.0,0.0,0.0,0.0,t248,-t242-t243+t50.*t236.*2.0+t56.*t234.*2.0,-t257-t258+t56.*t236.*2.0+t62.*t230.*2.0,0.0,0.0,0.0,t119+t120+t121+t122,-t123+t124+t151-t66.*t68.*2.0,-t147+t148+t149-t150,0.0,0.0,0.0,t50.*t184.*2.0-t56.*t181.*2.0+t62.*t177.*2.0-t68.*t174.*2.0,t50.*t200.*-2.0-t56.*t201.*2.0+t62.*t202.*2.0+t68.*t203.*2.0,t50.*t215.*2.0+t56.*t214.*2.0+t62.*t217.*2.0+t68.*t216.*2.0,0.0,0.0,0.0,t242+t243-t50.*t236.*2.0-t56.*t234.*2.0,t248,-t259-t260+t50.*t232.*2.0+t62.*t236.*2.0,0.0,0.0,0.0,t145+t146-t46.*t62.*2.0-t50.*t60.*2.0,t147+t148+t149+t150,-t123+t124-t151+t66.*t68.*2.0,0.0,0.0,0.0,t50.*t181.*2.0+t62.*t174.*2.0+t56.*t184.*2.0+t68.*t177.*2.0,t50.*t201.*2.0-t56.*t200.*2.0-t62.*t203.*2.0+t68.*t202.*2.0,t50.*t214.*-2.0+t56.*t215.*2.0-t62.*t216.*2.0+t68.*t217.*2.0,0.0,0.0,0.0,t257+t258-t56.*t236.*2.0-t62.*t230.*2.0,t259+t260-t50.*t232.*2.0-t62.*t236.*2.0,t248],[18,6]);
if nargout > 1
    t261 = t56.*tau_tx_sym;
    t262 = t62.*tau_ty_sym;
    t263 = t68.*tau_tz_sym;
    t264 = t261+t262+t263;
    t265 = t68.*tau_tx_sym;
    t266 = t50.*tau_ty_sym;
    t274 = t56.*tau_tz_sym;
    t267 = t265+t266-t274;
    t268 = t50.*tau_tx_sym;
    t269 = t62.*tau_tz_sym;
    t275 = t68.*tau_ty_sym;
    t270 = t268+t269-t275;
    t271 = t56.*tau_ty_sym;
    t272 = t50.*tau_tz_sym;
    t276 = t62.*tau_tx_sym;
    t273 = t271+t272-t276;
    out2 = [f_tx_sym;f_ty_sym;f_tz_sym;t50.*t270+t56.*t264+t62.*t273-t68.*t267;t50.*t267+t62.*t264-t56.*t273+t68.*t270;t50.*t273+t56.*t267-t62.*t270+t68.*t264];
end
