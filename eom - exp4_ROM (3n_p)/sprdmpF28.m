function [out1,out2,out3,out4,out5,out6,out7] = sprdmpF28(in1,in2,s,ds,t_sym)
%SPRDMPF28
%    [OUT1,OUT2,OUT3,OUT4,OUT5,OUT6,OUT7] = SPRDMPF28(IN1,IN2,S,DS,T_SYM)

%    This function was generated by the Symbolic Math Toolbox version 8.6.
%    27-Feb-2021 15:22:09

E_s_ = in1(:,2);
gamma_ = in1(:,21);
lambda_ = in1(:,34);
mu_x_ = in1(:,6);
mu_y_ = in1(:,7);
mu_z_ = in1(:,8);
mu_xx_ = in1(:,9);
mu_yy_ = in1(:,10);
mu_zz_ = in1(:,11);
p1_ = in1(:,22);
p2_ = in1(:,23);
p3_ = in1(:,24);
p4_ = in1(:,25);
p5_ = in1(:,26);
p6_ = in1(:,27);
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
q19 = in2(19,:);
q20 = in2(20,:);
q21 = in2(21,:);
q22 = in2(22,:);
q23 = in2(23,:);
q24 = in2(24,:);
q25 = in2(25,:);
q26 = in2(26,:);
q27 = in2(27,:);
r_o_ = in1(:,20);
r_p1_ = in1(:,19);
r_s1_ = in1(:,3);
r_s2_ = in1(:,4);
u1 = in2(28,:);
u2 = in2(29,:);
u3 = in2(30,:);
u4 = in2(31,:);
u5 = in2(32,:);
u6 = in2(33,:);
u7 = in2(34,:);
u8 = in2(35,:);
u9 = in2(36,:);
u10 = in2(37,:);
u11 = in2(38,:);
u12 = in2(39,:);
u13 = in2(40,:);
u14 = in2(41,:);
u15 = in2(42,:);
u16 = in2(43,:);
u17 = in2(44,:);
u18 = in2(45,:);
u19 = in2(46,:);
u20 = in2(47,:);
u21 = in2(48,:);
u22 = in2(49,:);
u23 = in2(50,:);
u24 = in2(51,:);
u25 = in2(52,:);
u26 = in2(53,:);
u27 = in2(54,:);
t2 = cos(gamma_);
t3 = sin(gamma_);
t4 = q13.*s;
t5 = q18.*s;
t6 = q23.*s;
t7 = lambda_.^2;
t8 = r_o_.^2;
t9 = r_p1_.^2;
t11 = r_s1_.^2;
t12 = r_s2_.^2;
t15 = s.*2.0;
t16 = s.^2;
t17 = s.^3;
t28 = 1.0./lambda_;
t35 = q1.*s.*-2.0;
t36 = q5.*s.*-2.0;
t37 = q9.*s.*-2.0;
t39 = q14.*s.*-2.0;
t41 = q19.*s.*-2.0;
t43 = q24.*s.*-2.0;
t50 = s.*2.0e+2;
t70 = 1.0./sqrt(lambda_);
t71 = q1./2.0e+1;
t72 = q5./2.0e+1;
t73 = q9./2.0e+1;
t74 = q14./2.0e+1;
t75 = q19./2.0e+1;
t76 = q24./2.0e+1;
t77 = q13./4.0e+1;
t78 = q18./4.0e+1;
t79 = q23./4.0e+1;
t80 = s./2.0e+1;
t82 = sqrt(7.0e+1);
t96 = s-1.0./4.0e+1;
t99 = q2.*1.875e-3;
t100 = q6.*1.875e-3;
t101 = q10.*1.875e-3;
t102 = q14./1.6e+3;
t103 = q15.*1.875e-3;
t104 = q19./1.6e+3;
t105 = q20.*1.875e-3;
t106 = q24./1.6e+3;
t107 = q25.*1.875e-3;
t108 = s.*1.875e-3;
t113 = q15./6.4e+4;
t114 = q20./6.4e+4;
t115 = q25./6.4e+4;
t10 = t9.^2;
t13 = t11.^2;
t14 = t12.^2;
t18 = t2.^2;
t19 = q1.*t15;
t20 = q5.*t15;
t21 = q9.*t15;
t22 = t4.*2.0;
t23 = q14.*t15;
t24 = t5.*2.0;
t25 = q19.*t15;
t26 = t6.*2.0;
t27 = q24.*t15;
t29 = 1.0./t7;
t30 = s.*t15;
t31 = t16.*3.0;
t32 = t15.*t16;
t33 = 1.0./t3.^2;
t38 = -t4;
t40 = -t5;
t42 = -t6;
t44 = q14.*t16;
t45 = q15.*t17;
t46 = q19.*t16;
t47 = q20.*t17;
t48 = q24.*t16;
t49 = q25.*t17;
t51 = -t12;
t53 = -t16;
t54 = t16.*-2.0;
t55 = -t17;
t57 = t17.*-2.0;
t81 = -t50;
t83 = q2.*t16.*-3.0;
t84 = q6.*t16.*-3.0;
t85 = q10.*t16.*-3.0;
t88 = q15.*t16.*-3.0;
t91 = q20.*t16.*-3.0;
t94 = q25.*t16.*-3.0;
t95 = -t80;
t109 = t15-1.0./2.0e+1;
t110 = t96.^2;
t111 = t96.^3;
t116 = -t108;
t144 = q13+t74+t103;
t145 = q18+t75+t105;
t146 = q23+t76+t107;
t34 = t33.^2;
t52 = -t14;
t56 = -t31;
t58 = q2.*t31;
t59 = q6.*t31;
t60 = q10.*t31;
t61 = s.*t23;
t62 = q15.*t31;
t63 = q15.*t32;
t64 = s.*t25;
t65 = q20.*t31;
t66 = q20.*t32;
t67 = s.*t27;
t68 = q25.*t31;
t69 = q25.*t32;
t86 = -t44;
t87 = -t45;
t89 = -t46;
t90 = -t47;
t92 = -t48;
t93 = -t49;
t97 = t81+5.0;
t98 = t7.*t18;
t117 = t11+t51;
t119 = q3.*t109;
t120 = q7.*t109;
t121 = q11.*t109;
t122 = q16.*t109;
t123 = q21.*t109;
t124 = q26.*t109;
t125 = q16.*t110;
t126 = q17.*t111;
t127 = q21.*t110;
t128 = q22.*t111;
t129 = q26.*t110;
t130 = q27.*t111;
t133 = q4.*t110.*3.0;
t134 = q8.*t110.*3.0;
t135 = q12.*t110.*3.0;
t136 = q17.*t110.*3.0;
t137 = q22.*t110.*3.0;
t138 = q27.*t110.*3.0;
t140 = t31-1.875e-3;
t147 = t16+t95+6.25e-4;
t148 = t17+t116+3.125e-5;
t152 = t96.*t144;
t153 = t96.*t145;
t154 = t96.*t146;
t112 = exp(t97);
t118 = t13+t52;
t131 = t98-1.0;
t142 = t28.*t117;
t174 = t35+t71+t83+t99+t119+t133;
t175 = t36+t72+t84+t100+t120+t134;
t176 = t37+t73+t85+t101+t121+t135;
t177 = t39+t74+t88+t103+t122+t136;
t178 = t41+t75+t91+t105+t123+t137;
t179 = t43+t76+t94+t107+t124+t138;
t197 = t38+t77+t86+t87+t102+t113+t125+t126+t152;
t198 = t40+t78+t89+t90+t104+t114+t127+t128+t153;
t199 = t42+t79+t92+t93+t106+t115+t129+t130+t154;
t132 = t112+1.0;
t139 = t131.^2;
t143 = t29.*t118;
t149 = t9.*t33.*t131.*6.0;
t141 = 1.0./t132;
t150 = -t149;
t151 = t10.*t34.*t139.*6.0;
t155 = t109.*t141;
t156 = t110.*t141.*3.0;
t158 = t140.*t141;
t161 = t141.*t147;
t163 = t141.*t148;
t167 = t142+t150;
t169 = t143+t151;
t180 = t141.*t174;
t181 = t141.*t175;
t182 = t141.*t176;
t183 = t141.*t177;
t184 = t141.*t178;
t185 = t141.*t179;
t212 = t141.*t197;
t213 = t141.*t198;
t214 = t141.*t199;
t157 = -t155;
t160 = -t158;
t162 = t161.*2.0;
t164 = t56+t158;
t165 = t163.*2.0;
t168 = t53+t161;
t171 = t55+t163;
t173 = (t169.*pi)./4.0;
t186 = t19+t58+t180;
t187 = t20+t59+t181;
t188 = q13+t23+t62+t183;
t189 = q18+t25+t65+t184;
t190 = q23+t27+t68+t185;
t215 = t212.*2.0;
t216 = t213.*2.0;
t217 = t214.*2.0;
t224 = t4+t44+t45+t212;
t225 = t5+t46+t47+t213;
t226 = t6+t48+t49+t214;
t159 = t15+t157;
t166 = t31+t160;
t170 = t54+t162;
t172 = t57+t165;
t191 = t15.*t188;
t192 = t15.*t189;
t193 = t15.*t190;
t194 = s.*t188.*-2.0;
t195 = s.*t189.*-2.0;
t196 = s.*t190.*-2.0;
t200 = t110.*t141.*t188.*2.0;
t201 = t111.*t141.*t188.*2.0;
t202 = t110.*t141.*t189.*2.0;
t203 = t111.*t141.*t189.*2.0;
t204 = t110.*t141.*t190.*2.0;
t205 = t111.*t141.*t190.*2.0;
t218 = t188.*(t16-t161).*-2.0;
t219 = -t188.*(t16.*2.0-t162);
t220 = t189.*(t16-t161).*-2.0;
t221 = -t189.*(t16.*2.0-t162);
t222 = t190.*(t16-t161).*-2.0;
t223 = -t190.*(t16.*2.0-t162);
t227 = mu_x_.*t224;
t228 = mu_y_.*t224;
t229 = mu_z_.*t224;
t230 = mu_x_.*t225;
t231 = mu_y_.*t225;
t232 = mu_z_.*t225;
t233 = mu_x_.*t226;
t234 = mu_y_.*t226;
t235 = mu_z_.*t226;
t236 = t224.^2;
t237 = t225.^2;
t238 = t226.^2;
t239 = t188.*(t17-t163).*-2.0;
t240 = -t188.*(t17.*2.0-t165);
t241 = t189.*(t17-t163).*-2.0;
t242 = -t189.*(t17.*2.0-t165);
t243 = t190.*(t17-t163).*-2.0;
t244 = -t190.*(t17.*2.0-t165);
t248 = t22+t61+t63+t215;
t249 = t24+t64+t66+t216;
t250 = t26+t67+t69+t217;
t251 = t188.*(t17.*2.0-t165);
t252 = t189.*(t17.*2.0-t165);
t253 = t190.*(t17.*2.0-t165);
t257 = t155.*t224.*2.0;
t258 = t155.*t225.*2.0;
t259 = t155.*t226.*2.0;
t260 = t110.*t141.*t224.*6.0;
t261 = t110.*t141.*t225.*6.0;
t262 = t110.*t141.*t226.*6.0;
t293 = E_s_.*t28.*t167.*t224.*pi;
t294 = E_s_.*t28.*t167.*t225.*pi;
t295 = E_s_.*t28.*t167.*t226.*pi;
t302 = t188.*t224.*2.0;
t303 = t189.*t225.*2.0;
t304 = t190.*t226.*2.0;
t206 = -t200;
t207 = -t201;
t208 = -t202;
t209 = -t203;
t210 = -t204;
t211 = -t205;
t245 = -t229;
t246 = -t230;
t247 = -t234;
t254 = -t236;
t255 = -t237;
t256 = -t238;
t263 = t155.*t248;
t264 = t155.*t249;
t265 = t155.*t250;
t266 = t156.*t248;
t267 = t156.*t249;
t268 = t156.*t250;
t269 = t157.*t248;
t270 = t157.*t249;
t271 = t157.*t250;
t272 = t110.*t141.*t248.*-3.0;
t273 = t110.*t141.*t249.*-3.0;
t274 = t110.*t141.*t250.*-3.0;
t275 = t159.*t224.*2.0;
t276 = t159.*t225.*2.0;
t277 = t159.*t226.*2.0;
t281 = t159.*t248;
t282 = t159.*t249;
t283 = t159.*t250;
t284 = t166.*t224.*-2.0;
t285 = t166.*t225.*-2.0;
t286 = t166.*t226.*-2.0;
t287 = -t166.*t248;
t288 = -t166.*t249;
t289 = -t166.*t250;
t290 = t166.*t248;
t291 = t166.*t249;
t292 = t166.*t250;
t296 = -t293;
t297 = t293./3.0;
t298 = t294./3.0;
t299 = t295./3.0;
t305 = t191+t248;
t306 = t192+t249;
t307 = t193+t250;
t308 = t200+t257;
t309 = t202+t258;
t310 = t204+t259;
t311 = t201+t260;
t312 = t203+t261;
t313 = t205+t262;
t320 = t227+t231+t235;
t353 = t302+t303+t304;
t278 = -t275;
t279 = -t276;
t280 = -t277;
t300 = -t298;
t301 = -t299;
t317 = t239+t284;
t318 = t241+t285;
t319 = t243+t286;
t321 = t254+t255+t256+1.0;
t337 = t295+t297+t298;
t314 = t218+t278;
t315 = t220+t279;
t316 = t222+t280;
t322 = sqrt(t321);
t323 = 1.0./t322;
t325 = t322.*2.0;
t326 = mu_x_.*t322;
t327 = mu_y_.*t322;
t328 = mu_z_.*t322;
t330 = t110.*t141.*t322.*6.0;
t332 = t159.*t322.*-2.0;
t333 = t166.*t322.*-2.0;
t335 = E_s_.*t28.*t167.*t322.*pi;
t324 = t323.^3;
t329 = t155.*t325;
t331 = t159.*t325;
t334 = t166.*t325;
t336 = t335./3.0;
t338 = t191.*t224.*t323;
t339 = t192.*t224.*t323;
t340 = t191.*t225.*t323;
t341 = t193.*t224.*t323;
t342 = t192.*t225.*t323;
t343 = t191.*t226.*t323;
t344 = t193.*t225.*t323;
t345 = t192.*t226.*t323;
t346 = t193.*t226.*t323;
t347 = t194.*t224.*t323;
t348 = t194.*t225.*t323;
t349 = t196.*t224.*t323;
t350 = t195.*t225.*t323;
t351 = t195.*t226.*t323;
t352 = t196.*t226.*t323;
t354 = t200.*t224.*t323;
t355 = t201.*t224.*t323;
t356 = t202.*t224.*t323;
t357 = t203.*t224.*t323;
t358 = t200.*t225.*t323;
t359 = t201.*t225.*t323;
t360 = t204.*t224.*t323;
t361 = t205.*t224.*t323;
t362 = t202.*t225.*t323;
t363 = t203.*t225.*t323;
t364 = t200.*t226.*t323;
t365 = t201.*t226.*t323;
t366 = t204.*t225.*t323;
t367 = t205.*t225.*t323;
t368 = t202.*t226.*t323;
t369 = t203.*t226.*t323;
t370 = t204.*t226.*t323;
t371 = t205.*t226.*t323;
t372 = t110.*t141.*t188.*t224.*t323.*-2.0;
t373 = t111.*t141.*t188.*t224.*t323.*-2.0;
t374 = t110.*t141.*t189.*t224.*t323.*-2.0;
t375 = t111.*t141.*t189.*t224.*t323.*-2.0;
t376 = t110.*t141.*t188.*t225.*t323.*-2.0;
t377 = t111.*t141.*t188.*t225.*t323.*-2.0;
t378 = t110.*t141.*t190.*t224.*t323.*-2.0;
t379 = t111.*t141.*t190.*t224.*t323.*-2.0;
t380 = t110.*t141.*t189.*t225.*t323.*-2.0;
t381 = t111.*t141.*t189.*t225.*t323.*-2.0;
t382 = t110.*t141.*t188.*t226.*t323.*-2.0;
t383 = t111.*t141.*t188.*t226.*t323.*-2.0;
t384 = t110.*t141.*t190.*t225.*t323.*-2.0;
t385 = t111.*t141.*t190.*t225.*t323.*-2.0;
t386 = t110.*t141.*t189.*t226.*t323.*-2.0;
t387 = t111.*t141.*t189.*t226.*t323.*-2.0;
t388 = t110.*t141.*t190.*t226.*t323.*-2.0;
t389 = t111.*t141.*t190.*t226.*t323.*-2.0;
t390 = t218.*t224.*t323;
t391 = t220.*t224.*t323;
t392 = t218.*t225.*t323;
t393 = t222.*t224.*t323;
t394 = t220.*t225.*t323;
t395 = t218.*t226.*t323;
t396 = t222.*t225.*t323;
t397 = t220.*t226.*t323;
t398 = t222.*t226.*t323;
t399 = t224.*t239.*t323;
t400 = t224.*t241.*t323;
t401 = t225.*t239.*t323;
t402 = t224.*t243.*t323;
t403 = t225.*t241.*t323;
t404 = t226.*t239.*t323;
t405 = t225.*t243.*t323;
t406 = t226.*t241.*t323;
t407 = t226.*t243.*t323;
t408 = t228+t246+t328;
t409 = t233+t245+t327;
t410 = t232+t247+t326;
t411 = (t248.*t305.*t323)./2.0;
t412 = (t249.*t305.*t323)./2.0;
t413 = (t248.*t306.*t323)./2.0;
t414 = (t250.*t305.*t323)./2.0;
t415 = (t249.*t306.*t323)./2.0;
t416 = (t248.*t307.*t323)./2.0;
t417 = (t250.*t306.*t323)./2.0;
t418 = (t249.*t307.*t323)./2.0;
t419 = (t250.*t307.*t323)./2.0;
t420 = (t248.*t308.*t323)./2.0;
t421 = (t249.*t308.*t323)./2.0;
t422 = (t248.*t309.*t323)./2.0;
t423 = (t250.*t308.*t323)./2.0;
t424 = (t249.*t309.*t323)./2.0;
t425 = (t248.*t310.*t323)./2.0;
t426 = (t250.*t309.*t323)./2.0;
t427 = (t249.*t310.*t323)./2.0;
t428 = (t250.*t310.*t323)./2.0;
t429 = (t248.*t311.*t323)./2.0;
t430 = (t249.*t311.*t323)./2.0;
t431 = (t248.*t312.*t323)./2.0;
t432 = (t250.*t311.*t323)./2.0;
t433 = (t249.*t312.*t323)./2.0;
t434 = (t248.*t313.*t323)./2.0;
t435 = (t250.*t312.*t323)./2.0;
t436 = (t249.*t313.*t323)./2.0;
t437 = (t250.*t313.*t323)./2.0;
t438 = t297+t300+t335;
t441 = t248.*t323.*(t275+t188.*(t16-t161).*2.0).*(-1.0./2.0);
t442 = t249.*t323.*(t275+t188.*(t16-t161).*2.0).*(-1.0./2.0);
t443 = t248.*t323.*(t276+t189.*(t16-t161).*2.0).*(-1.0./2.0);
t444 = t250.*t323.*(t275+t188.*(t16-t161).*2.0).*(-1.0./2.0);
t445 = t249.*t323.*(t276+t189.*(t16-t161).*2.0).*(-1.0./2.0);
t446 = t248.*t323.*(t277+t190.*(t16-t161).*2.0).*(-1.0./2.0);
t447 = t250.*t323.*(t276+t189.*(t16-t161).*2.0).*(-1.0./2.0);
t448 = t249.*t323.*(t277+t190.*(t16-t161).*2.0).*(-1.0./2.0);
t449 = t250.*t323.*(t277+t190.*(t16-t161).*2.0).*(-1.0./2.0);
t450 = (t248.*t323.*(t276+t189.*(t16-t161).*2.0))./2.0;
t451 = (t250.*t323.*(t275+t188.*(t16-t161).*2.0))./2.0;
t452 = (t249.*t323.*(t277+t190.*(t16-t161).*2.0))./2.0;
t453 = t248.*t323.*(t166.*t224.*2.0+t188.*(t17-t163).*2.0).*(-1.0./2.0);
t454 = t249.*t323.*(t166.*t224.*2.0+t188.*(t17-t163).*2.0).*(-1.0./2.0);
t455 = t248.*t323.*(t166.*t225.*2.0+t189.*(t17-t163).*2.0).*(-1.0./2.0);
t456 = t250.*t323.*(t166.*t224.*2.0+t188.*(t17-t163).*2.0).*(-1.0./2.0);
t457 = t249.*t323.*(t166.*t225.*2.0+t189.*(t17-t163).*2.0).*(-1.0./2.0);
t458 = t248.*t323.*(t166.*t226.*2.0+t190.*(t17-t163).*2.0).*(-1.0./2.0);
t459 = t250.*t323.*(t166.*t225.*2.0+t189.*(t17-t163).*2.0).*(-1.0./2.0);
t460 = t249.*t323.*(t166.*t226.*2.0+t190.*(t17-t163).*2.0).*(-1.0./2.0);
t461 = t250.*t323.*(t166.*t226.*2.0+t190.*(t17-t163).*2.0).*(-1.0./2.0);
t462 = s.*t323.*t353;
t463 = t110.*t141.*t323.*t353;
t464 = t111.*t141.*t323.*t353;
t465 = t323.*t353.*(t16.*2.0-t162).*(-1.0./2.0);
t466 = (t323.*t353.*(t16.*2.0-t162))./2.0;
t467 = t323.*t353.*(t17.*2.0-t165).*(-1.0./2.0);
t468 = (t323.*t353.*(t17.*2.0-t165))./2.0;
t439 = t294+t301+t336;
t440 = t296+t299+t336;
t469 = (s.*t224.*t248.*t324.*t353)./2.0;
t470 = (s.*t224.*t249.*t324.*t353)./2.0;
t471 = (s.*t225.*t248.*t324.*t353)./2.0;
t472 = (s.*t224.*t250.*t324.*t353)./2.0;
t473 = (s.*t226.*t248.*t324.*t353)./2.0;
t474 = (s.*t225.*t249.*t324.*t353)./2.0;
t475 = (s.*t225.*t250.*t324.*t353)./2.0;
t476 = (s.*t226.*t249.*t324.*t353)./2.0;
t477 = (s.*t226.*t250.*t324.*t353)./2.0;
t478 = (t110.*t141.*t224.*t248.*t324.*t353)./2.0;
t479 = (t111.*t141.*t224.*t248.*t324.*t353)./2.0;
t480 = (t110.*t141.*t224.*t249.*t324.*t353)./2.0;
t481 = (t110.*t141.*t225.*t248.*t324.*t353)./2.0;
t482 = (t111.*t141.*t224.*t249.*t324.*t353)./2.0;
t483 = (t111.*t141.*t225.*t248.*t324.*t353)./2.0;
t484 = (t110.*t141.*t224.*t250.*t324.*t353)./2.0;
t485 = (t110.*t141.*t226.*t248.*t324.*t353)./2.0;
t486 = (t110.*t141.*t225.*t249.*t324.*t353)./2.0;
t487 = (t111.*t141.*t224.*t250.*t324.*t353)./2.0;
t488 = (t111.*t141.*t226.*t248.*t324.*t353)./2.0;
t489 = (t111.*t141.*t225.*t249.*t324.*t353)./2.0;
t490 = (t110.*t141.*t225.*t250.*t324.*t353)./2.0;
t491 = (t110.*t141.*t226.*t249.*t324.*t353)./2.0;
t492 = (t111.*t141.*t225.*t250.*t324.*t353)./2.0;
t493 = (t111.*t141.*t226.*t249.*t324.*t353)./2.0;
t494 = (t110.*t141.*t226.*t250.*t324.*t353)./2.0;
t495 = (t111.*t141.*t226.*t250.*t324.*t353)./2.0;
t496 = t224.*t248.*t324.*t353.*(t16-t161).*(-1.0./2.0);
t497 = t224.*t249.*t324.*t353.*(t16-t161).*(-1.0./2.0);
t498 = t225.*t248.*t324.*t353.*(t16-t161).*(-1.0./2.0);
t499 = t224.*t250.*t324.*t353.*(t16-t161).*(-1.0./2.0);
t500 = t226.*t248.*t324.*t353.*(t16-t161).*(-1.0./2.0);
t501 = t225.*t249.*t324.*t353.*(t16-t161).*(-1.0./2.0);
t502 = t225.*t250.*t324.*t353.*(t16-t161).*(-1.0./2.0);
t503 = t226.*t249.*t324.*t353.*(t16-t161).*(-1.0./2.0);
t504 = t226.*t250.*t324.*t353.*(t16-t161).*(-1.0./2.0);
t505 = (t225.*t248.*t324.*t353.*(t16-t161))./2.0;
t506 = (t224.*t250.*t324.*t353.*(t16-t161))./2.0;
t507 = (t226.*t249.*t324.*t353.*(t16-t161))./2.0;
t508 = t224.*t248.*t324.*t353.*(t17-t163).*(-1.0./2.0);
t509 = t224.*t249.*t324.*t353.*(t17-t163).*(-1.0./2.0);
t510 = t225.*t248.*t324.*t353.*(t17-t163).*(-1.0./2.0);
t511 = t224.*t250.*t324.*t353.*(t17-t163).*(-1.0./2.0);
t512 = t226.*t248.*t324.*t353.*(t17-t163).*(-1.0./2.0);
t513 = t225.*t249.*t324.*t353.*(t17-t163).*(-1.0./2.0);
t514 = t225.*t250.*t324.*t353.*(t17-t163).*(-1.0./2.0);
t515 = t226.*t249.*t324.*t353.*(t17-t163).*(-1.0./2.0);
t516 = t226.*t250.*t324.*t353.*(t17-t163).*(-1.0./2.0);
t517 = t195+t249+t349+t414+t472;
t518 = t196+t250+t348+t413+t471;
t519 = t194+t248+t351+t418+t476;
t520 = t210+t265+t376+t422+t481;
t521 = t208+t264+t378+t423+t484;
t522 = t206+t263+t386+t427+t491;
t523 = t204+t271+t374+t421+t480;
t524 = t202+t270+t382+t425+t485;
t525 = t200+t269+t384+t426+t490;
t526 = t205+t274+t375+t430+t482;
t527 = t211+t268+t377+t431+t483;
t528 = t209+t267+t379+t432+t487;
t529 = t203+t273+t383+t434+t488;
t530 = t201+t272+t385+t435+t492;
t531 = t207+t266+t387+t436+t493;
t532 = t221+t282+t393+t451+t506;
t533 = t223+t283+t392+t450+t505;
t534 = t219+t281+t397+t452+t507;
t535 = t325+t347+t411+t462+t469;
t536 = t325+t350+t415+t462+t474;
t537 = t325+t352+t419+t462+t477;
t538 = t329+t372+t420+t463+t478;
t539 = t329+t380+t424+t463+t486;
t540 = t329+t388+t428+t463+t494;
t541 = t330+t373+t429+t464+t479;
t542 = t330+t381+t433+t464+t489;
t543 = t330+t389+t437+t464+t495;
out1 = reshape([t159,t166,t155,t156,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,t159,t166,t155,t156,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,t159,t166,t155,t156,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,t535,t331+t390+t466+(t248.*t323.*(t275+t188.*(t16-t161).*2.0))./2.0+(t224.*t248.*t324.*t353.*(t16-t161))./2.0,t334+t399+t468+(t248.*t323.*(t166.*t224.*2.0+t188.*(t17-t163).*2.0))./2.0+(t224.*t248.*t324.*t353.*(t17-t163))./2.0,t538,t541,t518,t533,t244+t292+t401+(t248.*t323.*(t166.*t225.*2.0+t189.*(t17-t163).*2.0))./2.0+(t225.*t248.*t324.*t353.*(t17-t163))./2.0,t520,t527,-t24-t46.*2.0-t47.*2.0+t192-t216+t416+t473+t194.*t226.*t323,-t282+t395+t189.*(t16.*2.0-t162)+(t248.*t323.*(t277+t190.*(t16-t161).*2.0))./2.0+(t226.*t248.*t324.*t353.*(t16-t161))./2.0,t252+t288+t404+(t248.*t323.*(t166.*t226.*2.0+t190.*(t17-t163).*2.0))./2.0+(t226.*t248.*t324.*t353.*(t17-t163))./2.0,t524,t529,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,-t26-t48.*2.0-t49.*2.0+t193-t217+t412+t470+t195.*t224.*t323,-t283+t391+t190.*(t16.*2.0-t162)+(t249.*t323.*(t275+t188.*(t16-t161).*2.0))./2.0+(t224.*t249.*t324.*t353.*(t16-t161))./2.0,t253+t289+t400+(t249.*t323.*(t166.*t224.*2.0+t188.*(t17-t163).*2.0))./2.0+(t224.*t249.*t324.*t353.*(t17-t163))./2.0,t523,t526,t536,t331+t394+t466+(t249.*t323.*(t276+t189.*(t16-t161).*2.0))./2.0+(t225.*t249.*t324.*t353.*(t16-t161))./2.0,t334+t403+t468+(t249.*t323.*(t166.*t225.*2.0+t189.*(t17-t163).*2.0))./2.0+(t225.*t249.*t324.*t353.*(t17-t163))./2.0,t539,t542,t519,t534,t240+t290+t406+(t249.*t323.*(t166.*t226.*2.0+t190.*(t17-t163).*2.0))./2.0+(t226.*t249.*t324.*t353.*(t17-t163))./2.0,t522,t531,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,t517,t532,t242+t291+t402+(t250.*t323.*(t166.*t224.*2.0+t188.*(t17-t163).*2.0))./2.0+(t224.*t250.*t324.*t353.*(t17-t163))./2.0,t521,t528,-t22-t44.*2.0-t45.*2.0+t191-t215+t417+t475+t196.*t225.*t323,-t281+t396+t188.*(t16.*2.0-t162)+(t250.*t323.*(t276+t189.*(t16-t161).*2.0))./2.0+(t225.*t250.*t324.*t353.*(t16-t161))./2.0,t251+t287+t405+(t250.*t323.*(t166.*t225.*2.0+t189.*(t17-t163).*2.0))./2.0+(t225.*t250.*t324.*t353.*(t17-t163))./2.0,t525,t530,t537,t331+t398+t466+(t250.*t323.*(t277+t190.*(t16-t161).*2.0))./2.0+(t226.*t250.*t324.*t353.*(t16-t161))./2.0,t334+t407+t468+(t250.*t323.*(t166.*t226.*2.0+t190.*(t17-t163).*2.0))./2.0+(t226.*t250.*t324.*t353.*(t17-t163))./2.0,t540,t543],[27,6]);
if nargout > 1
    out2 = [t186.*(t224.*t337+t225.*t438-t226.*t440+t322.*t439);t187.*(t225.*t337-t224.*t438+t226.*t439+t322.*t440);(t21+t60+t182).*(t226.*t337+t224.*t440-t225.*t439+t322.*t438);E_s_.*t28.*(t173-t8.*t9.*t28.*t33.*t131.*pi.*3.0).*(t189.*t250-t190.*t249+t188.*t325+(t248.*t323.*t353)./2.0);E_s_.*t28.*(t173-t8.*t9.*t28.*t33.*t131.*pi.*3.0).*(-t188.*t250+t190.*t248+t189.*t325+(t249.*t323.*t353)./2.0);(E_s_.*t28.*t169.*pi.*(t188.*t249-t189.*t248+t190.*t325+(t250.*t323.*t353)./2.0))./6.0];
end
if nargout > 2
    out3 = [-(t224.*t320+t225.*t408-t226.*t409+t322.*t410).*(t155.*u3+t156.*u4+t159.*u1+t166.*u2);-(t225.*t320-t224.*t408+t226.*t410+t322.*t409).*(t155.*u7+t156.*u8+t159.*u5+t166.*u6);-(t226.*t320+t224.*t409-t225.*t410+t322.*t408).*(t155.*u11+t156.*u12+t159.*u9+t166.*u10);-mu_xx_.*(-u23.*(t195+t249+t343-t416-t473)+t518.*u18+t520.*u21+t535.*u13+t527.*u22+t524.*u26+t533.*u19+t538.*u16+t529.*u27+t541.*u17+u24.*(-t282+t395+t189.*(t16.*2.0-t162)+(t248.*t323.*(t277+t190.*(t16-t161).*2.0))./2.0+(t226.*t248.*t324.*t353.*(t16-t161))./2.0)+u20.*(t244+t292+t401+(t248.*t323.*(t166.*t225.*2.0+t189.*(t17-t163).*2.0))./2.0+(t225.*t248.*t324.*t353.*(t17-t163))./2.0)+u25.*(t252+t288+t404+(t248.*t323.*(t166.*t226.*2.0+t190.*(t17-t163).*2.0))./2.0+(t226.*t248.*t324.*t353.*(t17-t163))./2.0)+u15.*(t334+t399+t468+(t248.*t323.*(t166.*t224.*2.0+t188.*(t17-t163).*2.0))./2.0+(t224.*t248.*t324.*t353.*(t17-t163))./2.0)+u14.*(t331+t390+t466+(t248.*t323.*(t275+t188.*(t16-t161).*2.0))./2.0+(t224.*t248.*t324.*t353.*(t16-t161))./2.0));-mu_yy_.*(-u13.*(t196+t250+t339-t412-t470)+t523.*u16+t519.*u23+t526.*u17+t522.*u26+t536.*u18+t531.*u27+t534.*u24+t539.*u21+t542.*u22+u14.*(-t283+t391+t190.*(t16.*2.0-t162)+(t249.*t323.*(t275+t188.*(t16-t161).*2.0))./2.0+(t224.*t249.*t324.*t353.*(t16-t161))./2.0)+u15.*(t253+t289+t400+(t249.*t323.*(t166.*t224.*2.0+t188.*(t17-t163).*2.0))./2.0+(t224.*t249.*t324.*t353.*(t17-t163))./2.0)+u25.*(t240+t290+t406+(t249.*t323.*(t166.*t226.*2.0+t190.*(t17-t163).*2.0))./2.0+(t226.*t249.*t324.*t353.*(t17-t163))./2.0)+u20.*(t334+t403+t468+(t249.*t323.*(t166.*t225.*2.0+t189.*(t17-t163).*2.0))./2.0+(t225.*t249.*t324.*t353.*(t17-t163))./2.0)+u19.*(t331+t394+t466+(t249.*t323.*(t276+t189.*(t16-t161).*2.0))./2.0+(t225.*t249.*t324.*t353.*(t16-t161))./2.0));-mu_zz_.*(-u18.*(t194+t248+t344-t417-t475)+t517.*u13+t521.*u16+t528.*u17+t525.*u21+t532.*u14+t530.*u22+t537.*u23+t540.*u26+t543.*u27+u19.*(-t281+t396+t188.*(t16.*2.0-t162)+(t250.*t323.*(t276+t189.*(t16-t161).*2.0))./2.0+(t225.*t250.*t324.*t353.*(t16-t161))./2.0)+u15.*(t242+t291+t402+(t250.*t323.*(t166.*t224.*2.0+t188.*(t17-t163).*2.0))./2.0+(t224.*t250.*t324.*t353.*(t17-t163))./2.0)+u20.*(t251+t287+t405+(t250.*t323.*(t166.*t225.*2.0+t189.*(t17-t163).*2.0))./2.0+(t225.*t250.*t324.*t353.*(t17-t163))./2.0)+u25.*(t334+t407+t468+(t250.*t323.*(t166.*t226.*2.0+t190.*(t17-t163).*2.0))./2.0+(t226.*t250.*t324.*t353.*(t17-t163))./2.0)+u24.*(t331+t398+t466+(t250.*t323.*(t277+t190.*(t16-t161).*2.0))./2.0+(t226.*t250.*t324.*t353.*(t16-t161))./2.0))];
end
if nargout > 3
    out4 = [0.0;0.0;-t9.*t33.*t131.*pi.*(p1_+p2_+p3_+p4_+p5_+p6_);p1_.*r_o_.*t9.*t33.*t70.*t131.*pi.*(-2.71e+2./2.89e+2)-p2_.*r_o_.*t9.*t33.*t70.*t131.*pi.*(2.71e+2./2.89e+2)+p3_.*r_o_.*t9.*t33.*t70.*t131.*pi.*1.67999098695029e-1+p4_.*r_o_.*t9.*t33.*t70.*t131.*pi.*7.697171642807495e-1+p5_.*r_o_.*t9.*t33.*t70.*t131.*pi.*7.697171642807493e-1+p6_.*r_o_.*t9.*t33.*t70.*t131.*pi.*1.679990986950289e-1;p3_.*r_o_.*t9.*t33.*t70.*t131.*pi.*9.857871488499218e-1+p4_.*r_o_.*t9.*t33.*t70.*t131.*pi.*6.383850617077452e-1-p5_.*r_o_.*t9.*t33.*t70.*t131.*pi.*6.383850617077454e-1-p6_.*r_o_.*t9.*t33.*t70.*t131.*pi.*9.857871488499218e-1-p1_.*r_o_.*t9.*t33.*t70.*t82.*t131.*pi.*(1.2e+1./2.89e+2)+p2_.*r_o_.*t9.*t33.*t70.*t82.*t131.*pi.*(1.2e+1./2.89e+2);0.0];
end
if nargout > 4
    out5 = zeros(0,0);
end
if nargout > 5
    out6 = 1.0;
end
if nargout > 6
    out7 = [t186,t187,t21+t60+t182+1.0];
end