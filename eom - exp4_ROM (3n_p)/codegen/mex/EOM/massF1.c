/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * massF1.c
 *
 * Code generation for function 'massF1'
 *
 */

/* Include files */
#include "massF1.h"
#include "EOM_data.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo hb_emlrtRSI = { 110,/* lineNo */
  "massF1",                            /* fcnName */
  "C:\\Users\\customer\\MEGAsync\\Hadi\\TMTDyn\\Code\\TMTDyn_beta\\v5_Latest_Version_Examples\\eom\\massF1.m"/* pathName */
};

/* Function Definitions */
void massF1(const emlrtStack *sp, const real_T in1[34], const real_T in2[30],
            real_T s, real_T out1[36], real_T out2[90], real_T out3[90], real_T
            out4[6])
{
  emlrtStack st;
  real_T t10;
  real_T t100;
  real_T t101;
  real_T t102;
  real_T t103;
  real_T t104;
  real_T t105;
  real_T t106;
  real_T t107;
  real_T t11;
  real_T t110;
  real_T t12;
  real_T t13;
  real_T t138;
  real_T t139;
  real_T t14;
  real_T t140;
  real_T t141;
  real_T t142;
  real_T t143;
  real_T t144;
  real_T t145;
  real_T t146;
  real_T t147;
  real_T t148;
  real_T t149;
  real_T t15;
  real_T t150;
  real_T t151;
  real_T t152;
  real_T t153;
  real_T t154;
  real_T t155;
  real_T t160;
  real_T t161;
  real_T t162;
  real_T t163;
  real_T t164;
  real_T t165;
  real_T t166;
  real_T t167;
  real_T t168;
  real_T t169;
  real_T t171;
  real_T t172;
  real_T t173;
  real_T t174;
  real_T t175;
  real_T t176;
  real_T t177;
  real_T t178;
  real_T t179;
  real_T t180;
  real_T t181;
  real_T t182;
  real_T t21;
  real_T t210;
  real_T t211;
  real_T t212;
  real_T t213;
  real_T t214;
  real_T t215;
  real_T t216;
  real_T t217;
  real_T t218;
  real_T t22;
  real_T t228;
  real_T t229;
  real_T t23;
  real_T t230;
  real_T t231;
  real_T t232;
  real_T t233;
  real_T t234;
  real_T t235;
  real_T t236;
  real_T t237;
  real_T t238;
  real_T t239;
  real_T t24;
  real_T t240;
  real_T t241;
  real_T t242;
  real_T t243;
  real_T t244;
  real_T t245;
  real_T t246;
  real_T t247;
  real_T t248;
  real_T t249;
  real_T t25;
  real_T t250;
  real_T t251;
  real_T t252;
  real_T t253;
  real_T t254;
  real_T t255;
  real_T t257;
  real_T t258;
  real_T t259;
  real_T t26;
  real_T t260;
  real_T t261;
  real_T t263;
  real_T t264;
  real_T t265;
  real_T t266;
  real_T t267;
  real_T t268;
  real_T t269;
  real_T t270;
  real_T t271;
  real_T t272;
  real_T t288;
  real_T t4;
  real_T t46;
  real_T t47;
  real_T t48;
  real_T t5;
  real_T t51;
  real_T t52;
  real_T t53;
  real_T t54;
  real_T t55;
  real_T t56;
  real_T t6;
  real_T t61;
  real_T t62;
  real_T t63;
  real_T t64;
  real_T t65;
  real_T t66;
  real_T t67;
  real_T t68;
  real_T t69;
  real_T t70;
  real_T t76;
  real_T t77;
  real_T t81;
  real_T t82;
  real_T t83;
  real_T t84;
  real_T t85;
  real_T t86;
  real_T t87;
  real_T t88;
  real_T t89;
  real_T t9;
  real_T t90;
  real_T t91;
  real_T t92;
  real_T t93;
  real_T t94;
  real_T t95;
  real_T t96;
  real_T t97;
  real_T t98;
  real_T t99;
  st.prev = sp;
  st.tls = sp->tls;

  /* MASSF1 */
  /*     [OUT1,OUT2,OUT3,OUT4] = MASSF1(IN1,IN2,S,DS,T_SYM) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.6. */
  /*     15-Jun-2021 01:48:11 */
  t76 = muDoubleScalarCos(in1[20]);
  t288 = muDoubleScalarSin(in1[20]);
  t4 = in2[6] * s;
  t5 = in2[9] * s;
  t6 = in2[12] * s;
  t9 = in1[2] * in1[2];
  t10 = in1[3] * in1[3];
  t11 = s * s;
  t12 = muDoubleScalarPower(s, 3.0);
  t14 = muDoubleScalarPower(s, 5.0);
  t13 = t11 * t11;
  t15 = muDoubleScalarPower(t11, 3.0);
  t21 = in1[18] * in1[18] * 6.0;
  t22 = t11 * 2.0;
  t23 = t12 * 2.0;
  t25 = t14 * 2.0;
  t24 = t13 * 2.0;
  t26 = t15 * 2.0;
  t46 = (t4 + in2[7] * t11) + in2[8] * t12;
  t47 = (t5 + in2[10] * t11) + in2[11] * t12;
  t48 = (t6 + in2[13] * t11) + in2[14] * t12;
  t51 = t46 * t46;
  t52 = t47 * t47;
  t53 = t48 * t48;
  t54 = (t4 * 2.0 + in2[7] * t22) + in2[8] * t23;
  t55 = (t5 * 2.0 + in2[10] * t22) + in2[11] * t23;
  t56 = (t6 * 2.0 + in2[13] * t22) + in2[14] * t23;
  t61 = s * t54;
  t62 = s * t55;
  t63 = s * t56;
  t64 = -(in1[0] * ((t9 + t21) + -t10) * 3.1415926535897931);
  t65 = t11 * t54;
  t66 = t12 * t54;
  t67 = t11 * t55;
  t68 = t12 * t55;
  t69 = t11 * t56;
  t70 = t12 * t56;
  t4 = (t10 + -t9) + t21 * (1.0 / (t288 * t288)) * (in1[33] * in1[33] * (t76 *
    t76) - 1.0);
  t5 = in1[0] * (1.0 / in1[33]);
  t6 = t5 * (t9 / 4.0 + t10 / 4.0) * t4 * 3.1415926535897931;
  out1[0] = t64;
  out1[1] = 0.0;
  out1[2] = 0.0;
  out1[3] = 0.0;
  out1[4] = 0.0;
  out1[5] = 0.0;
  out1[6] = 0.0;
  out1[7] = t64;
  out1[8] = 0.0;
  out1[9] = 0.0;
  out1[10] = 0.0;
  out1[11] = 0.0;
  out1[12] = 0.0;
  out1[13] = 0.0;
  out1[14] = t64;
  out1[15] = 0.0;
  out1[16] = 0.0;
  out1[17] = 0.0;
  out1[18] = 0.0;
  out1[19] = 0.0;
  out1[20] = 0.0;
  out1[21] = t6;
  out1[22] = 0.0;
  out1[23] = 0.0;
  out1[24] = 0.0;
  out1[25] = 0.0;
  out1[26] = 0.0;
  out1[27] = 0.0;
  out1[28] = t6;
  out1[29] = 0.0;
  out1[30] = 0.0;
  out1[31] = 0.0;
  out1[32] = 0.0;
  out1[33] = 0.0;
  out1[34] = 0.0;
  out1[35] = t5 * t4 * 3.1415926535897931 * (t9 / 2.0 + t10 / 2.0);
  t4 = ((-t51 + -t52) + -t53) + 1.0;
  st.site = &hb_emlrtRSI;
  if (t4 < 0.0) {
    emlrtErrorWithMessageIdR2018a(&st, &emlrtRTEI,
      "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3, 4,
      4, "sqrt");
  }

  t4 = muDoubleScalarSqrt(t4);
  t76 = 1.0 / t4;
  t5 = s * t4 * 2.0;
  t6 = t22 * t4;
  t4 *= t23;
  t77 = muDoubleScalarPower(t76, 3.0);
  t81 = t22 * t46 * t76;
  t82 = t23 * t46 * t76;
  t83 = t24 * t46 * t76;
  t84 = t25 * t46 * t76;
  t85 = t26 * t46 * t76;
  t86 = t22 * t47 * t76;
  t87 = t23 * t47 * t76;
  t88 = t24 * t47 * t76;
  t89 = t25 * t47 * t76;
  t90 = t26 * t47 * t76;
  t91 = t22 * t48 * t76;
  t92 = t23 * t48 * t76;
  t93 = t24 * t48 * t76;
  t94 = t25 * t48 * t76;
  t95 = t26 * t48 * t76;
  t96 = t65 * t76;
  t97 = t66 * t76;
  t98 = t13 * t54 * t76;
  t99 = t14 * t54 * t76;
  t100 = t15 * t54 * t76;
  t101 = t67 * t76;
  t102 = t68 * t76;
  t103 = t13 * t55 * t76;
  t104 = t14 * t55 * t76;
  t105 = t15 * t55 * t76;
  t106 = t69 * t76;
  t107 = t70 * t76;
  out2[0] = t11;
  out2[1] = 0.0;
  out2[2] = 0.0;
  out2[3] = 0.0;
  out2[4] = 0.0;
  out2[5] = 0.0;
  out2[6] = t12;
  out2[7] = 0.0;
  out2[8] = 0.0;
  out2[9] = 0.0;
  out2[10] = 0.0;
  out2[11] = 0.0;
  out2[12] = 0.0;
  out2[13] = t11;
  out2[14] = 0.0;
  out2[15] = 0.0;
  out2[16] = 0.0;
  out2[17] = 0.0;
  out2[18] = 0.0;
  out2[19] = t12;
  out2[20] = 0.0;
  out2[21] = 0.0;
  out2[22] = 0.0;
  out2[23] = 0.0;
  out2[24] = 0.0;
  out2[25] = 0.0;
  out2[26] = t11;
  out2[27] = 0.0;
  out2[28] = 0.0;
  out2[29] = 0.0;
  out2[30] = 0.0;
  out2[31] = 0.0;
  out2[32] = t12;
  out2[33] = 0.0;
  out2[34] = 0.0;
  out2[35] = 0.0;
  out2[36] = 0.0;
  out2[37] = 0.0;
  out2[38] = 0.0;
  out2[39] = t5 + t46 * t61 * t76;
  out2[40] = -t63 + t46 * t62 * t76;
  out2[41] = t62 + t46 * t63 * t76;
  out2[42] = 0.0;
  out2[43] = 0.0;
  out2[44] = 0.0;
  out2[45] = t6 + t46 * t96;
  out2[46] = -t69 + t46 * t101;
  out2[47] = t67 + t46 * t106;
  out2[48] = 0.0;
  out2[49] = 0.0;
  out2[50] = 0.0;
  out2[51] = t4 + t46 * t97;
  out2[52] = -t70 + t46 * t102;
  out2[53] = t68 + t46 * t107;
  out2[54] = 0.0;
  out2[55] = 0.0;
  out2[56] = 0.0;
  out2[57] = t63 + t47 * t61 * t76;
  out2[58] = t5 + t47 * t62 * t76;
  out2[59] = -t61 + t47 * t63 * t76;
  out2[60] = 0.0;
  out2[61] = 0.0;
  out2[62] = 0.0;
  out2[63] = t69 + t47 * t96;
  out2[64] = t6 + t47 * t101;
  out2[65] = -t65 + t47 * t106;
  out2[66] = 0.0;
  out2[67] = 0.0;
  out2[68] = 0.0;
  out2[69] = t70 + t47 * t97;
  out2[70] = t4 + t47 * t102;
  out2[71] = -t66 + t47 * t107;
  out2[72] = 0.0;
  out2[73] = 0.0;
  out2[74] = 0.0;
  out2[75] = -t62 + t48 * t61 * t76;
  out2[76] = t61 + t48 * t62 * t76;
  out2[77] = t5 + t48 * t63 * t76;
  out2[78] = 0.0;
  out2[79] = 0.0;
  out2[80] = 0.0;
  out2[81] = -t67 + t48 * t96;
  out2[82] = t65 + t48 * t101;
  out2[83] = t6 + t48 * t106;
  out2[84] = 0.0;
  out2[85] = 0.0;
  out2[86] = 0.0;
  out2[87] = -t68 + t48 * t97;
  out2[88] = t66 + t48 * t102;
  out2[89] = t4 + t48 * t107;
  t61 = t13 * t56 * t76;
  t62 = t14 * t56 * t76;
  t110 = t15 * t56 * t76;
  t288 = t46 * t47;
  t138 = t288 * t65 * t77;
  t139 = t288 * t66 * t77;
  t4 = t13 * t46;
  t21 = t4 * t47;
  t140 = t21 * t54 * t77;
  t5 = t14 * t46;
  t64 = t5 * t47;
  t141 = t64 * t54 * t77;
  t6 = t15 * t46;
  t9 = t6 * t47;
  t142 = t9 * t54 * t77;
  t10 = t46 * t48;
  t143 = t10 * t65 * t77;
  t144 = t288 * t67 * t77;
  t145 = t10 * t66 * t77;
  t146 = t288 * t68 * t77;
  t4 *= t48;
  t147 = t4 * t54 * t77;
  t148 = t21 * t55 * t77;
  t5 *= t48;
  t149 = t5 * t54 * t77;
  t150 = t64 * t55 * t77;
  t6 *= t48;
  t151 = t6 * t54 * t77;
  t152 = t9 * t55 * t77;
  t153 = t288 * t69 * t77;
  t154 = t10 * t67 * t77;
  t76 = t47 * t48;
  t155 = t76 * t65 * t77;
  t63 = t288 * t70 * t77;
  t11 = t10 * t68 * t77;
  t12 = t76 * t66 * t77;
  t46 = t21 * t56 * t77;
  t160 = t4 * t55 * t77;
  t21 = t13 * t47 * t48;
  t161 = t21 * t54 * t77;
  t162 = t64 * t56 * t77;
  t163 = t5 * t55 * t77;
  t64 = t14 * t47 * t48;
  t164 = t64 * t54 * t77;
  t165 = t9 * t56 * t77;
  t166 = t6 * t55 * t77;
  t288 = t15 * t47 * t48;
  t167 = t288 * t54 * t77;
  t168 = t10 * t69 * t77;
  t169 = t76 * t67 * t77;
  t10 = t10 * t70 * t77;
  t171 = t76 * t68 * t77;
  t172 = t4 * t56 * t77;
  t173 = t21 * t55 * t77;
  t174 = t5 * t56 * t77;
  t175 = t64 * t55 * t77;
  t176 = t6 * t56 * t77;
  t177 = t288 * t55 * t77;
  t178 = t76 * t69 * t77;
  t179 = t76 * t70 * t77;
  t180 = t21 * t56 * t77;
  t181 = t64 * t56 * t77;
  t182 = t288 * t56 * t77;
  t210 = t23 + t63;
  t211 = t23 + t11;
  t212 = t23 + t12;
  t213 = t24 + t46;
  t214 = t24 + t160;
  t215 = t24 + t161;
  t216 = t25 + t162;
  t217 = t25 + t163;
  t218 = t25 + t164;
  t228 = t97 + t51 * t66 * t77;
  t4 = t13 * t51;
  t229 = t98 + t4 * t54 * t77;
  t5 = t14 * t51;
  t230 = t99 + t5 * t54 * t77;
  t231 = t97 + t52 * t66 * t77;
  t21 = t13 * t52;
  t232 = t98 + t21 * t54 * t77;
  t9 = t14 * t52;
  t233 = t99 + t9 * t54 * t77;
  t234 = t97 + t53 * t66 * t77;
  t235 = t102 + t51 * t68 * t77;
  t64 = t13 * t53;
  t236 = t98 + t64 * t54 * t77;
  t237 = t103 + t4 * t55 * t77;
  t6 = t14 * t53;
  t238 = t99 + t6 * t54 * t77;
  t239 = t104 + t5 * t55 * t77;
  t240 = t102 + t52 * t68 * t77;
  t241 = t103 + t21 * t55 * t77;
  t242 = t104 + t9 * t55 * t77;
  t243 = t102 + t53 * t68 * t77;
  t244 = t107 + t51 * t70 * t77;
  t245 = t103 + t64 * t55 * t77;
  t246 = t61 + t4 * t56 * t77;
  t247 = t104 + t6 * t55 * t77;
  t248 = t62 + t5 * t56 * t77;
  t249 = t107 + t52 * t70 * t77;
  t250 = t61 + t21 * t56 * t77;
  t251 = t62 + t9 * t56 * t77;
  t252 = t107 + t53 * t70 * t77;
  t253 = t61 + t64 * t56 * t77;
  t254 = t62 + t6 * t56 * t77;
  t255 = t82 + t146;
  t68 = t87 + t139;
  t257 = t83 + t148;
  t258 = t88 + t140;
  t259 = t84 + t150;
  t260 = t89 + t141;
  t261 = t82 + t10;
  t70 = t92 + t145;
  t263 = t83 + t172;
  t264 = t93 + t147;
  t265 = t84 + t174;
  t266 = t94 + t149;
  t267 = t87 + t179;
  t268 = t92 + t171;
  t269 = t88 + t180;
  t270 = t93 + t173;
  t271 = t89 + t181;
  t272 = t94 + t175;
  t14 = t23 + -t63;
  t107 = t23 + -t11;
  t104 = t23 + -t12;
  t13 = t24 + -t46;
  t103 = t24 + -t160;
  t102 = t24 + -t161;
  t66 = t25 + -t162;
  t99 = t25 + -t163;
  t98 = t25 + -t164;
  t48 = t82 + -t146;
  t97 = t87 + -t139;
  t47 = t83 + -t148;
  t46 = t88 + -t140;
  t12 = t84 + -t150;
  t11 = t89 + -t141;
  t4 = t82 + -t10;
  t63 = t92 + -t145;
  t62 = t83 + -t172;
  t61 = t93 + -t147;
  t76 = t84 + -t174;
  t10 = t94 + -t149;
  t9 = t87 + -t179;
  t64 = t92 + -t171;
  t21 = t88 + -t180;
  t288 = t93 + -t173;
  t6 = t89 + -t181;
  t5 = t94 + -t175;
  memset(&out3[0], 0, 39U * sizeof(real_T));
  out3[39] = (((((((in2[24] * (t86 + t138) + in2[27] * (t91 + t143)) + t228 *
                   in2[22]) + t229 * in2[23]) + t68 * in2[25]) + t258 * in2[26])
               + t70 * in2[28]) + t264 * in2[29]) + in2[21] * (t96 + t51 * t65 *
    t77);
  out3[40] = (((((((in2[27] * (t22 + t154) + t211 * in2[28]) + t214 * in2[29]) +
                  t235 * in2[22]) + t237 * in2[23]) - t48 * in2[25]) - t47 *
               in2[26]) + in2[21] * (t101 + t51 * t67 * t77)) - in2[24] * (t81 -
    t144);
  out3[41] = (((((((-t14 * in2[25] - t13 * in2[26]) + t244 * in2[22]) + t246 *
                  in2[23]) - t4 * in2[28]) - t62 * in2[29]) + in2[21] * (t106 +
    t51 * t69 * t77)) - in2[24] * (t22 - t153)) - in2[27] * (t81 - t168);
  out3[42] = 0.0;
  out3[43] = 0.0;
  out3[44] = 0.0;
  out3[45] = (((((((t228 * in2[21] + t229 * in2[22]) + t230 * in2[23]) + t68 *
                  in2[24]) + t258 * in2[25]) + t260 * in2[26]) + t70 * in2[27])
              + t264 * in2[28]) + t266 * in2[29];
  out3[46] = (((((((t211 * in2[27] + t214 * in2[28]) + t217 * in2[29]) + t235 *
                  in2[21]) + t237 * in2[22]) + t239 * in2[23]) - t48 * in2[24])
              - t47 * in2[25]) - t12 * in2[26];
  out3[47] = (((((((-t14 * in2[24] - t13 * in2[25]) - t66 * in2[26]) + t244 *
                  in2[21]) + t246 * in2[22]) + t248 * in2[23]) - t4 * in2[27]) -
              t62 * in2[28]) - t76 * in2[29];
  out3[48] = 0.0;
  out3[49] = 0.0;
  out3[50] = 0.0;
  t4 = t15 * t51;
  out3[51] = (((((((in2[26] * (t90 + t142) + in2[29] * (t95 + t151)) + t229 *
                   in2[21]) + t230 * in2[22]) + t258 * in2[24]) + t260 * in2[25])
               + t264 * in2[27]) + t266 * in2[28]) + in2[23] * (t100 + t4 * t54 *
    t77);
  out3[52] = (((((((in2[29] * (t26 + t166) + t214 * in2[27]) + t217 * in2[28]) +
                  t237 * in2[21]) + t239 * in2[22]) - t47 * in2[24]) - t12 *
               in2[25]) - in2[26] * (t85 - t152)) + in2[23] * (t105 + t4 * t55 *
    t77);
  out3[53] = (((((((-t13 * in2[24] - t66 * in2[25]) + t246 * in2[21]) + t248 *
                  in2[22]) - t62 * in2[27]) - t76 * in2[28]) - in2[26] * (t26 -
    t165)) - in2[29] * (t85 - t176)) + in2[23] * (t110 + t4 * t56 * t77);
  out3[54] = 0.0;
  out3[55] = 0.0;
  out3[56] = 0.0;
  out3[57] = (((((((-t104 * in2[28] - t102 * in2[29]) + t231 * in2[25]) + t232 *
                  in2[26]) - t97 * in2[22]) - t46 * in2[23]) + in2[24] * (t96 +
    t52 * t65 * t77)) - in2[27] * (t22 - t155)) - in2[21] * (t86 - t138);
  out3[58] = (((((((in2[21] * (t81 + t144) + in2[27] * (t91 + t169)) + t240 *
                   in2[25]) + t241 * in2[26]) + t255 * in2[22]) + t257 * in2[23])
               + t268 * in2[28]) + t270 * in2[29]) + in2[24] * (t101 + t52 * t67
    * t77);
  out3[59] = (((((((in2[21] * (t22 + t153) + t210 * in2[22]) + t213 * in2[23]) +
                  t249 * in2[25]) + t250 * in2[26]) - t9 * in2[28]) - t21 * in2
               [29]) + in2[24] * (t106 + t52 * t69 * t77)) - in2[27] * (t86 -
    t178);
  out3[60] = 0.0;
  out3[61] = 0.0;
  out3[62] = 0.0;
  out3[63] = (((((((-t104 * in2[27] - t102 * in2[28]) + t231 * in2[24]) - t98 *
                  in2[29]) + t232 * in2[25]) + t233 * in2[26]) - t97 * in2[21])
              - t46 * in2[22]) - t11 * in2[23];
  out3[64] = (((((((t240 * in2[24] + t241 * in2[25]) + t242 * in2[26]) + t255 *
                  in2[21]) + t257 * in2[22]) + t259 * in2[23]) + t268 * in2[27])
              + t270 * in2[28]) + t272 * in2[29];
  out3[65] = (((((((t210 * in2[21] + t213 * in2[22]) + t216 * in2[23]) + t249 *
                  in2[24]) + t250 * in2[25]) + t251 * in2[26]) - t9 * in2[27]) -
              t21 * in2[28]) - t6 * in2[29];
  out3[66] = 0.0;
  out3[67] = 0.0;
  out3[68] = 0.0;
  t4 = t15 * t52;
  out3[69] = (((((((-t102 * in2[27] - t98 * in2[28]) + t232 * in2[24]) + t233 *
                  in2[25]) - t46 * in2[21]) - t11 * in2[22]) - in2[29] * (t26 -
    t167)) - in2[23] * (t90 - t142)) + in2[26] * (t100 + t4 * t54 * t77);
  out3[70] = (((((((in2[23] * (t85 + t152) + in2[29] * (t95 + t177)) + t241 *
                   in2[24]) + t242 * in2[25]) + t257 * in2[21]) + t259 * in2[22])
               + t270 * in2[27]) + t272 * in2[28]) + in2[26] * (t105 + t4 * t55 *
    t77);
  out3[71] = (((((((in2[23] * (t26 + t165) + t213 * in2[21]) + t216 * in2[22]) +
                  t250 * in2[24]) + t251 * in2[25]) - t21 * in2[27]) - t6 * in2
               [28]) - in2[29] * (t90 - t182)) + in2[26] * (t110 + t4 * t56 *
    t77);
  out3[72] = 0.0;
  out3[73] = 0.0;
  out3[74] = 0.0;
  out3[75] = (((((((in2[24] * (t22 + t155) + t212 * in2[25]) + t215 * in2[26]) +
                  t234 * in2[28]) + t236 * in2[29]) - t63 * in2[22]) - t61 *
               in2[23]) + in2[27] * (t96 + t53 * t65 * t77)) - in2[21] * (t91 -
    t143);
  out3[76] = (((((((-t107 * in2[22] - t103 * in2[23]) + t243 * in2[28]) + t245 *
                  in2[29]) - t64 * in2[25]) - t288 * in2[26]) + in2[27] * (t101
    + t53 * t67 * t77)) - in2[21] * (t22 - t154)) - in2[24] * (t91 - t169);
  out3[77] = (((((((in2[21] * (t81 + t168) + in2[24] * (t86 + t178)) + t252 *
                   in2[28]) + t253 * in2[29]) + t261 * in2[22]) + t263 * in2[23])
               + t267 * in2[25]) + t269 * in2[26]) + in2[27] * (t106 + t53 * t69
    * t77);
  out3[78] = 0.0;
  out3[79] = 0.0;
  out3[80] = 0.0;
  out3[81] = (((((((t212 * in2[24] + t215 * in2[25]) + t218 * in2[26]) + t234 *
                  in2[27]) + t236 * in2[28]) + t238 * in2[29]) - t63 * in2[21])
              - t61 * in2[22]) - t10 * in2[23];
  out3[82] = (((((((-t107 * in2[21] - t103 * in2[22]) - t99 * in2[23]) + t243 *
                  in2[27]) + t245 * in2[28]) + t247 * in2[29]) - t64 * in2[24])
              - t288 * in2[25]) - t5 * in2[26];
  out3[83] = (((((((t252 * in2[27] + t253 * in2[28]) + t261 * in2[21]) + t254 *
                  in2[29]) + t263 * in2[22]) + t265 * in2[23]) + t267 * in2[24])
              + t269 * in2[25]) + t271 * in2[26];
  out3[84] = 0.0;
  out3[85] = 0.0;
  out3[86] = 0.0;
  t4 = t15 * t53;
  out3[87] = (((((((in2[26] * (t26 + t167) + t215 * in2[24]) + t218 * in2[25]) +
                  t236 * in2[27]) + t238 * in2[28]) - t61 * in2[21]) - t10 *
               in2[22]) - in2[23] * (t95 - t151)) + in2[29] * (t100 + t4 * t54 *
    t77);
  out3[88] = (((((((-t103 * in2[21] - t99 * in2[22]) + t245 * in2[27]) + t247 *
                  in2[28]) - t288 * in2[24]) - t5 * in2[25]) - in2[23] * (t26 -
    t166)) - in2[26] * (t95 - t177)) + in2[29] * (t105 + t4 * t55 * t77);
  out3[89] = (((((((in2[23] * (t85 + t176) + in2[26] * (t90 + t182)) + t253 *
                   in2[27]) + t254 * in2[28]) + t263 * in2[21]) + t265 * in2[22])
               + t269 * in2[24]) + t271 * in2[25]) + in2[29] * (t110 + t4 * t56 *
    t77);
  out4[0] = in1[12];
  out4[1] = in1[13];
  out4[2] = in1[14];
  out4[3] = 0.0;
  out4[4] = 0.0;
  out4[5] = 0.0;
}

/* End of code generation (massF1.c) */
