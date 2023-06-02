function out1 = massT1(in1,in2,s,ds,t_sym)
%MASST1
%    OUT1 = MASST1(IN1,IN2,S,DS,T_SYM)

%    This function was generated by the Symbolic Math Toolbox version 8.6.
%    30-Apr-2021 15:46:27

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
t12 = q15.*s;
t13 = q17.*s;
t14 = l_s2_.*2.0;
t15 = s.*2.0;
t16 = s.^2;
t17 = s.^3;
t25 = -q3;
t26 = -q4;
t27 = -q7;
t28 = -q8;
t29 = -q11;
t30 = -q12;
t31 = -q16;
t32 = -s;
t40 = l_s2_.*2.0e+2;
t41 = s.*2.0e+2;
t42 = (q13.*s)./2.0;
t18 = q2.*t14;
t19 = q6.*t14;
t20 = q10.*t14;
t21 = q15.*t14;
t22 = q1.*t15;
t23 = q5.*t15;
t24 = q9.*t15;
t33 = -t15;
t34 = t16.*3.0;
t35 = -t7;
t36 = -t9;
t37 = -t11;
t38 = -t13;
t39 = s+t14;
t43 = l_s2_+t32;
t44 = q2+t26;
t45 = q6+t28;
t46 = q10+t30;
t47 = s.*t6.*3.0;
t48 = s.*t8.*3.0;
t49 = s.*t10.*3.0;
t50 = -t41;
t51 = t16./2.0;
t52 = t17./2.0;
t53 = -t51;
t54 = q14.*t51;
t55 = t12.*t51;
t56 = t14+t33;
t57 = t43.^2;
t58 = t43.^3;
t59 = t40+t50;
t63 = q1+t2+t6+t18+t25+t35;
t64 = q5+t3+t8+t19+t27+t36;
t65 = q9+t4+t10+t20+t29+t37;
t66 = q14+t5+t12+t21+t31+t38;
t60 = exp(t59);
t61 = t60+1.0;
t62 = 1.0./t61;
t67 = t56.*t62;
t68 = t57.*t62;
t69 = t58.*t62;
t70 = -t68;
t71 = -t69;
t72 = t68./2.0;
t73 = t15+t67;
t74 = t39.*t67;
t75 = t39.*t68;
t76 = t43.*t67;
t77 = t44.*t68;
t78 = t45.*t68;
t79 = t46.*t68;
t90 = t63.*t67;
t91 = t64.*t67;
t92 = t65.*t67;
t94 = t66.*t68.*(-1.0./2.0);
t80 = t16+t70;
t81 = t39.*t70;
t82 = t39.*t72;
t83 = t44.*t70;
t84 = t45.*t70;
t85 = t46.*t70;
t86 = t75.*(-1.0./2.0);
t88 = t53+t72;
t93 = t66.*t72;
t95 = t68+t76;
t96 = t34+t70+t74;
t97 = t42+t54+t55+t94;
t87 = t17+t81;
t89 = t52+t86;
t98 = cos(t97);
t99 = sin(t97);
t102 = t22+t47+t83+t90;
t103 = t23+t48+t84+t91;
t104 = t24+t49+t85+t92+1.0;
t100 = t98.^2;
t101 = t99.^2;
t105 = t102.^2;
t106 = t103.^2;
t107 = t104.^2;
t108 = t105+t106+t107;
t109 = 1.0./t108.^2;
t110 = 1.0./sqrt(t108);
t111 = t110.^3;
t112 = (t67.*t110)./2.0;
t113 = (t73.*t110)./2.0;
t114 = (t95.*t110)./2.0;
t115 = (t96.*t110)./2.0;
t116 = (t104.*t110)./2.0;
t117 = t116+1.0./2.0;
t121 = (t67.*t107.*t111)./2.0;
t123 = (t73.*t107.*t111)./2.0;
t125 = (t95.*t107.*t111)./2.0;
t127 = (t96.*t107.*t111)./2.0;
t118 = sqrt(t117);
t122 = -t121;
t124 = -t123;
t126 = -t125;
t128 = -t127;
t119 = 1.0./t118;
t129 = t112+t122;
t130 = t113+t124;
t135 = t114+t126;
t136 = t115+t128;
t120 = t119.^3;
t131 = t98.*t112.*t119;
t132 = t99.*t112.*t119;
t133 = t98.*t113.*t119;
t134 = t99.*t113.*t119;
t137 = t98.*t114.*t119;
t138 = t99.*t114.*t119;
t139 = t98.*t115.*t119;
t140 = t99.*t115.*t119;
t141 = t98.*t102.*t110.*t119;
t142 = t98.*t103.*t110.*t119;
t143 = t99.*t102.*t110.*t119;
t144 = t99.*t103.*t110.*t119;
t161 = (t67.*t98.*t105.*t111.*t119)./2.0;
t162 = (t67.*t98.*t106.*t111.*t119)./2.0;
t163 = (t67.*t99.*t105.*t111.*t119)./2.0;
t164 = (t67.*t99.*t106.*t111.*t119)./2.0;
t169 = (t73.*t98.*t105.*t111.*t119)./2.0;
t170 = (t73.*t98.*t106.*t111.*t119)./2.0;
t171 = (t73.*t99.*t105.*t111.*t119)./2.0;
t172 = (t73.*t99.*t106.*t111.*t119)./2.0;
t187 = (t95.*t98.*t105.*t111.*t119)./2.0;
t188 = (t95.*t98.*t106.*t111.*t119)./2.0;
t189 = (t95.*t99.*t105.*t111.*t119)./2.0;
t190 = (t95.*t99.*t106.*t111.*t119)./2.0;
t195 = (t96.*t98.*t105.*t111.*t119)./2.0;
t196 = (t96.*t98.*t106.*t111.*t119)./2.0;
t197 = (t96.*t99.*t105.*t111.*t119)./2.0;
t198 = (t96.*t99.*t106.*t111.*t119)./2.0;
t203 = (t67.*t98.*t102.*t103.*t111.*t119)./2.0;
t204 = (t67.*t99.*t102.*t103.*t111.*t119)./2.0;
t206 = (t67.*t98.*t102.*t104.*t111.*t119)./2.0;
t207 = (t67.*t98.*t103.*t104.*t111.*t119)./2.0;
t209 = (t67.*t99.*t102.*t104.*t111.*t119)./2.0;
t210 = (t67.*t99.*t103.*t104.*t111.*t119)./2.0;
t216 = (t73.*t98.*t102.*t103.*t111.*t119)./2.0;
t217 = (t73.*t99.*t102.*t103.*t111.*t119)./2.0;
t219 = (t73.*t98.*t102.*t104.*t111.*t119)./2.0;
t220 = (t73.*t98.*t103.*t104.*t111.*t119)./2.0;
t222 = (t73.*t99.*t102.*t104.*t111.*t119)./2.0;
t223 = (t73.*t99.*t103.*t104.*t111.*t119)./2.0;
t229 = (t95.*t98.*t102.*t103.*t111.*t119)./2.0;
t230 = (t95.*t99.*t102.*t103.*t111.*t119)./2.0;
t232 = (t95.*t98.*t102.*t104.*t111.*t119)./2.0;
t233 = (t95.*t98.*t103.*t104.*t111.*t119)./2.0;
t235 = (t95.*t99.*t102.*t104.*t111.*t119)./2.0;
t236 = (t95.*t99.*t103.*t104.*t111.*t119)./2.0;
t242 = (t96.*t98.*t102.*t103.*t111.*t119)./2.0;
t243 = (t96.*t99.*t102.*t103.*t111.*t119)./2.0;
t245 = (t96.*t98.*t102.*t104.*t111.*t119)./2.0;
t246 = (t96.*t98.*t103.*t104.*t111.*t119)./2.0;
t248 = (t96.*t99.*t102.*t104.*t111.*t119)./2.0;
t249 = (t96.*t99.*t103.*t104.*t111.*t119)./2.0;
t145 = -t143;
t146 = (s.*t141)./4.0;
t147 = (s.*t142)./4.0;
t148 = (s.*t143)./4.0;
t149 = (s.*t144)./4.0;
t151 = (t68.*t143)./4.0;
t152 = (t69.*t143)./4.0;
t153 = (t68.*t144)./4.0;
t154 = (t69.*t144)./4.0;
t155 = (t68.*t141)./4.0;
t156 = (t69.*t141)./4.0;
t157 = (t68.*t142)./4.0;
t158 = (t69.*t142)./4.0;
t165 = -t161;
t166 = -t162;
t167 = -t163;
t168 = -t164;
t173 = -t169;
t174 = -t170;
t175 = -t171;
t176 = -t172;
t177 = t141.*(t51-t72).*(-1.0./2.0);
t178 = t142.*(t51-t72).*(-1.0./2.0);
t179 = t143.*(t51-t72).*(-1.0./2.0);
t180 = t144.*(t51-t72).*(-1.0./2.0);
t181 = (t143.*(t51-t72))./2.0;
t182 = (t89.*t141)./2.0;
t183 = (t89.*t142)./2.0;
t184 = (t89.*t143)./2.0;
t185 = (t89.*t144)./2.0;
t191 = -t187;
t192 = -t188;
t193 = -t189;
t194 = -t190;
t199 = -t195;
t200 = -t196;
t201 = -t197;
t202 = -t198;
t205 = -t203;
t208 = -t204;
t211 = -t207;
t212 = (t67.*t98.*t104.*t105.*t109.*t120)./8.0;
t213 = (t67.*t98.*t104.*t106.*t109.*t120)./8.0;
t214 = (t67.*t99.*t104.*t105.*t109.*t120)./8.0;
t215 = (t67.*t99.*t104.*t106.*t109.*t120)./8.0;
t218 = -t216;
t221 = -t217;
t224 = -t222;
t225 = (t73.*t98.*t104.*t105.*t109.*t120)./8.0;
t226 = (t73.*t98.*t104.*t106.*t109.*t120)./8.0;
t227 = (t73.*t99.*t104.*t105.*t109.*t120)./8.0;
t228 = (t73.*t99.*t104.*t106.*t109.*t120)./8.0;
t231 = -t229;
t234 = -t230;
t237 = -t235;
t238 = (t95.*t98.*t104.*t105.*t109.*t120)./8.0;
t239 = (t95.*t98.*t104.*t106.*t109.*t120)./8.0;
t240 = (t95.*t99.*t104.*t105.*t109.*t120)./8.0;
t241 = (t95.*t99.*t104.*t106.*t109.*t120)./8.0;
t244 = -t242;
t247 = -t243;
t250 = -t248;
t251 = (t96.*t98.*t104.*t105.*t109.*t120)./8.0;
t252 = (t96.*t98.*t104.*t106.*t109.*t120)./8.0;
t253 = (t96.*t99.*t104.*t105.*t109.*t120)./8.0;
t254 = (t96.*t99.*t104.*t106.*t109.*t120)./8.0;
t255 = (t67.*t98.*t102.*t103.*t104.*t109.*t120)./8.0;
t256 = (t67.*t99.*t102.*t103.*t104.*t109.*t120)./8.0;
t259 = (t73.*t98.*t102.*t103.*t104.*t109.*t120)./8.0;
t260 = (t73.*t99.*t102.*t103.*t104.*t109.*t120)./8.0;
t263 = (t95.*t98.*t102.*t103.*t104.*t109.*t120)./8.0;
t264 = (t95.*t99.*t102.*t103.*t104.*t109.*t120)./8.0;
t267 = (t96.*t98.*t102.*t103.*t104.*t109.*t120)./8.0;
t268 = (t96.*t99.*t102.*t103.*t104.*t109.*t120)./8.0;
t271 = (t99.*t102.*t110.*t120.*t129)./4.0;
t272 = (t99.*t103.*t110.*t120.*t129)./4.0;
t273 = (t98.*t102.*t110.*t120.*t129)./4.0;
t274 = (t98.*t103.*t110.*t120.*t129)./4.0;
t276 = (t98.*t102.*t110.*t120.*t130)./4.0;
t277 = (t98.*t103.*t110.*t120.*t130)./4.0;
t278 = (t99.*t102.*t110.*t120.*t130)./4.0;
t279 = (t99.*t103.*t110.*t120.*t130)./4.0;
t281 = (t98.*t102.*t110.*t120.*t135)./4.0;
t282 = (t98.*t103.*t110.*t120.*t135)./4.0;
t283 = (t99.*t102.*t110.*t120.*t135)./4.0;
t284 = (t99.*t103.*t110.*t120.*t135)./4.0;
t286 = (t98.*t102.*t110.*t120.*t136)./4.0;
t287 = (t98.*t103.*t110.*t120.*t136)./4.0;
t288 = (t99.*t102.*t110.*t120.*t136)./4.0;
t289 = (t99.*t103.*t110.*t120.*t136)./4.0;
t291 = t141+t144;
t150 = -t148;
t159 = -t157;
t160 = -t158;
t186 = -t184;
t257 = -t255;
t258 = -t256;
t261 = -t259;
t262 = -t260;
t265 = -t263;
t266 = -t264;
t269 = -t267;
t270 = -t268;
t275 = -t274;
t280 = -t278;
t285 = -t283;
t290 = -t288;
t292 = t142+t145;
t293 = t146+t149;
t295 = t153+t155;
t296 = t154+t156;
t299 = t177+t180;
t300 = t178+t181;
t301 = t182+t185;
t303 = t131+t165+t208+t212+t256;
t306 = t132+t168+t205+t215+t255;
t307 = t133+t173+t221+t225+t260;
t310 = t134+t176+t218+t228+t259;
t311 = t137+t191+t234+t238+t264;
t314 = t138+t194+t231+t241+t263;
t315 = t139+t199+t247+t251+t268;
t318 = t140+t202+t244+t254+t267;
t319 = t206+t210+t272+t273;
t321 = t219+t223+t276+t279;
t323 = t232+t236+t281+t284;
t325 = t245+t249+t286+t289;
t294 = t147+t150;
t297 = t151+t159;
t298 = t152+t160;
t302 = t183+t186;
t304 = t131+t166+t204+t213+t258;
t305 = t132+t167+t203+t214+t257;
t308 = t133+t174+t217+t226+t262;
t309 = t134+t175+t216+t227+t261;
t312 = t137+t192+t230+t239+t266;
t313 = t138+t193+t229+t240+t265;
t316 = t139+t200+t243+t252+t270;
t317 = t140+t201+t242+t253+t269;
t320 = t209+t211+t271+t275;
t322 = t220+t224+t277+t280;
t324 = t233+t237+t282+t285;
t326 = t246+t250+t287+t290;
out1 = reshape([t80,0.0,0.0,t99.*t118.*t307.*2.0+t98.*t118.*t309.*2.0-(t73.*t98.*t102.*t104.*t111.*t119.*t292)./4.0+(t73.*t99.*t102.*t104.*t111.*t119.*t291)./4.0,t98.*t118.*t307.*2.0-t99.*t118.*t309.*2.0+(t73.*t98.*t102.*t104.*t111.*t119.*t291)./4.0+(t73.*t99.*t102.*t104.*t111.*t119.*t292)./4.0,t292.*t307+t291.*t309,t87,0.0,0.0,t99.*t118.*t315.*2.0+t98.*t118.*t317.*2.0-(t96.*t98.*t102.*t104.*t111.*t119.*t292)./4.0+(t96.*t99.*t102.*t104.*t111.*t119.*t291)./4.0,t98.*t118.*t315.*2.0-t99.*t118.*t317.*2.0+(t96.*t98.*t102.*t104.*t111.*t119.*t291)./4.0+(t96.*t99.*t102.*t104.*t111.*t119.*t292)./4.0,t292.*t315+t291.*t317,t68,0.0,0.0,t99.*t118.*t303.*-2.0-t98.*t118.*t305.*2.0+(t67.*t98.*t102.*t104.*t111.*t119.*t292)./4.0-(t67.*t99.*t102.*t104.*t111.*t119.*t291)./4.0,t98.*t118.*t303.*-2.0+t99.*t118.*t305.*2.0-(t67.*t98.*t102.*t104.*t111.*t119.*t291)./4.0-(t67.*t99.*t102.*t104.*t111.*t119.*t292)./4.0,-t292.*t303-t291.*t305,t71,0.0,0.0,t99.*t118.*t311.*2.0+t98.*t118.*t313.*2.0-(t95.*t98.*t102.*t104.*t111.*t119.*t292)./4.0+(t95.*t99.*t102.*t104.*t111.*t119.*t291)./4.0,t98.*t118.*t311.*2.0-t99.*t118.*t313.*2.0+(t95.*t98.*t102.*t104.*t111.*t119.*t291)./4.0+(t95.*t99.*t102.*t104.*t111.*t119.*t292)./4.0,t292.*t311+t291.*t313,0.0,t80,0.0,t98.*t118.*t308.*-2.0+t99.*t118.*t310.*2.0-(t73.*t98.*t103.*t104.*t111.*t119.*t292)./4.0+(t73.*t99.*t103.*t104.*t111.*t119.*t291)./4.0,t99.*t118.*t308.*2.0+t98.*t118.*t310.*2.0+(t73.*t98.*t103.*t104.*t111.*t119.*t291)./4.0+(t73.*t99.*t103.*t104.*t111.*t119.*t292)./4.0,-t291.*t308+t292.*t310,0.0,t87,0.0,t98.*t118.*t316.*-2.0+t99.*t118.*t318.*2.0-(t96.*t98.*t103.*t104.*t111.*t119.*t292)./4.0+(t96.*t99.*t103.*t104.*t111.*t119.*t291)./4.0,t99.*t118.*t316.*2.0+t98.*t118.*t318.*2.0+(t96.*t98.*t103.*t104.*t111.*t119.*t291)./4.0+(t96.*t99.*t103.*t104.*t111.*t119.*t292)./4.0,-t291.*t316+t292.*t318,0.0,t68,0.0,t98.*t118.*t304.*2.0-t99.*t118.*t306.*2.0+(t67.*t98.*t103.*t104.*t111.*t119.*t292)./4.0-(t67.*t99.*t103.*t104.*t111.*t119.*t291)./4.0,t99.*t118.*t304.*-2.0-t98.*t118.*t306.*2.0-(t67.*t98.*t103.*t104.*t111.*t119.*t291)./4.0-(t67.*t99.*t103.*t104.*t111.*t119.*t292)./4.0,t291.*t304-t292.*t306,0.0,t71,0.0,t98.*t118.*t312.*-2.0+t99.*t118.*t314.*2.0-(t95.*t98.*t103.*t104.*t111.*t119.*t292)./4.0+(t95.*t99.*t103.*t104.*t111.*t119.*t291)./4.0,t99.*t118.*t312.*2.0+t98.*t118.*t314.*2.0+(t95.*t98.*t103.*t104.*t111.*t119.*t291)./4.0+(t95.*t99.*t103.*t104.*t111.*t119.*t292)./4.0,-t291.*t312+t292.*t314,0.0,0.0,t80,t98.*t118.*t322.*2.0-t99.*t118.*t321.*2.0+(t98.*t119.*t130.*t292)./2.0-(t99.*t119.*t130.*t291)./2.0,t98.*t118.*t321.*-2.0-t99.*t118.*t322.*2.0-(t98.*t119.*t130.*t291)./2.0-(t99.*t119.*t130.*t292)./2.0,t291.*t322-t292.*t321,0.0,0.0,t87,t98.*t118.*t326.*2.0-t99.*t118.*t325.*2.0+(t98.*t119.*t136.*t292)./2.0-(t99.*t119.*t136.*t291)./2.0,t98.*t118.*t325.*-2.0-t99.*t118.*t326.*2.0-(t98.*t119.*t136.*t291)./2.0-(t99.*t119.*t136.*t292)./2.0,t291.*t326-t292.*t325,0.0,0.0,t68,t98.*t118.*(t207-t209-t271+t274).*-2.0+t99.*t118.*t319.*2.0-(t98.*t119.*t129.*t292)./2.0+(t99.*t119.*t129.*t291)./2.0,t99.*t118.*(t207-t209-t271+t274).*2.0+t98.*t118.*t319.*2.0+(t98.*t119.*t129.*t291)./2.0+(t99.*t119.*t129.*t292)./2.0,t292.*t319-t291.*(t207-t209-t271+t274),0.0,0.0,t71,t98.*t118.*t324.*2.0-t99.*t118.*t323.*2.0+(t98.*t119.*t135.*t292)./2.0-(t99.*t119.*t135.*t291)./2.0,t98.*t118.*t323.*-2.0-t99.*t118.*t324.*2.0-(t98.*t119.*t135.*t291)./2.0-(t99.*t119.*t135.*t292)./2.0,t291.*t324-t292.*t323,0.0,0.0,0.0,t98.*t118.*t293.*2.0+t99.*t118.*t294.*2.0-(s.*t98.*t118.*t291)./2.0-(s.*t99.*t118.*t292)./2.0,t98.*t118.*t294.*2.0-t99.*t118.*t293.*2.0-(s.*t98.*t118.*t292)./2.0+(s.*t99.*t118.*t291)./2.0,t291.*t293+t292.*t294+s.*t100.*t117+s.*t101.*t117,0.0,0.0,0.0,t99.*t118.*(t179+(t142.*(t51-t72))./2.0).*2.0+t98.*t118.*((t141.*(t51-t72))./2.0+(t144.*(t51-t72))./2.0).*2.0-t98.*t118.*t291.*(t51-t72)-t99.*t118.*t292.*(t51-t72),t98.*t118.*(t179+(t142.*(t51-t72))./2.0).*2.0-t99.*t118.*((t141.*(t51-t72))./2.0+(t144.*(t51-t72))./2.0).*2.0-t98.*t118.*t292.*(t51-t72)+t99.*t118.*t291.*(t51-t72),t292.*(t179+(t142.*(t51-t72))./2.0)+t291.*((t141.*(t51-t72))./2.0+(t144.*(t51-t72))./2.0)+t100.*t117.*(t51-t72).*2.0+t101.*t117.*(t51-t72).*2.0,0.0,0.0,0.0,t98.*t118.*t301.*2.0+t99.*t118.*t302.*2.0-t89.*t98.*t118.*t291-t89.*t99.*t118.*t292,t98.*t118.*t302.*2.0-t99.*t118.*t301.*2.0-t89.*t98.*t118.*t292+t89.*t99.*t118.*t291,t291.*t301+t292.*t302+t89.*t100.*t117.*2.0+t89.*t101.*t117.*2.0,0.0,0.0,0.0,t98.*t118.*t295.*2.0-t99.*t118.*t297.*2.0-(t68.*t98.*t118.*t291)./2.0-(t68.*t99.*t118.*t292)./2.0,t99.*t118.*t295.*-2.0-t98.*t118.*t297.*2.0-(t68.*t98.*t118.*t292)./2.0+t72.*t99.*t118.*t291,t291.*t295-t292.*t297+t68.*t100.*t117+t68.*t101.*t117,0.0,0.0,0.0,t98.*t118.*t296.*-2.0+t99.*t118.*t298.*2.0+(t69.*t98.*t118.*t291)./2.0+(t69.*t99.*t118.*t292)./2.0,t99.*t118.*t296.*2.0+t98.*t118.*t298.*2.0+(t69.*t98.*t118.*t292)./2.0-(t69.*t99.*t118.*t291)./2.0,-t291.*t296+t292.*t298+t71.*t100.*t117+t71.*t101.*t117],[6,17]);
