/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * massT1.c
 *
 * Code generation for function 'massT1'
 *
 */

/* Include files */
#include "massT1.h"
#include "EOM_data.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo qb_emlrtRSI = { 134,/* lineNo */
  "massT1",                            /* fcnName */
  "C:\\Users\\customer\\MEGAsync\\Hadi\\Friends\\Research\\Tendon Robot - Izad\\Model\\Izad TMTDyn\\eom\\massT1.m"/* pathName */
};

static emlrtRSInfo sb_emlrtRSI = { 146,/* lineNo */
  "massT1",                            /* fcnName */
  "C:\\Users\\customer\\MEGAsync\\Hadi\\Friends\\Research\\Tendon Robot - Izad\\Model\\Izad TMTDyn\\eom\\massT1.m"/* pathName */
};

/* Function Definitions */
void massT1(const emlrtStack *sp, const real_T in1[27], const real_T in2[34],
            real_T s, real_T out1[102])
{
  emlrtStack st;
  real_T b_t217_tmp_tmp;
  real_T b_t230_tmp_tmp;
  real_T b_t243_tmp_tmp;
  real_T b_t319_tmp;
  real_T b_t321_tmp;
  real_T b_t323_tmp;
  real_T b_t325_tmp;
  real_T t10;
  real_T t100;
  real_T t101;
  real_T t103;
  real_T t104;
  real_T t105;
  real_T t106;
  real_T t109;
  real_T t111;
  real_T t117_tmp;
  real_T t118;
  real_T t119;
  real_T t12;
  real_T t120;
  real_T t129;
  real_T t130;
  real_T t131;
  real_T t132;
  real_T t133;
  real_T t134;
  real_T t135;
  real_T t136;
  real_T t137;
  real_T t138;
  real_T t139;
  real_T t14;
  real_T t140;
  real_T t141;
  real_T t142;
  real_T t143;
  real_T t144;
  real_T t15;
  real_T t16;
  real_T t17;
  real_T t179_tmp;
  real_T t203;
  real_T t203_tmp;
  real_T t204;
  real_T t204_tmp_tmp;
  real_T t207_tmp;
  real_T t209_tmp;
  real_T t216;
  real_T t216_tmp_tmp;
  real_T t217;
  real_T t217_tmp_tmp;
  real_T t229;
  real_T t229_tmp_tmp;
  real_T t230;
  real_T t230_tmp_tmp;
  real_T t242;
  real_T t242_tmp_tmp;
  real_T t243;
  real_T t243_tmp_tmp;
  real_T t255;
  real_T t259;
  real_T t263;
  real_T t264;
  real_T t267;
  real_T t268;
  real_T t271_tmp;
  real_T t274_tmp;
  real_T t291;
  real_T t292;
  real_T t293;
  real_T t294;
  real_T t295;
  real_T t296;
  real_T t297;
  real_T t298;
  real_T t301;
  real_T t302;
  real_T t303;
  real_T t305;
  real_T t306;
  real_T t307;
  real_T t308;
  real_T t310;
  real_T t311;
  real_T t314;
  real_T t315;
  real_T t318;
  real_T t319;
  real_T t319_tmp;
  real_T t321;
  real_T t321_tmp;
  real_T t323;
  real_T t323_tmp;
  real_T t325;
  real_T t325_tmp;
  real_T t39;
  real_T t43;
  real_T t51;
  real_T t6;
  real_T t62;
  real_T t67;
  real_T t68;
  real_T t69;
  real_T t72;
  real_T t73;
  real_T t8;
  real_T t80;
  real_T t87;
  real_T t89;
  real_T t95;
  real_T t96;
  real_T t98;
  real_T t99;
  st.prev = sp;
  st.tls = sp->tls;

  /* MASST1 */
  /*     OUT1 = MASST1(IN1,IN2,S,DS,T_SYM) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.6. */
  /*     30-Apr-2021 15:46:27 */
  t6 = in2[1] * s;
  t8 = in2[5] * s;
  t10 = in2[9] * s;
  t12 = in2[14] * s;
  t14 = in1[16] * 2.0;
  t15 = s * 2.0;
  t16 = s * s;
  t17 = muDoubleScalarPower(s, 3.0);
  t39 = s + t14;
  t43 = in1[16] + -s;
  t51 = t16 / 2.0;
  t62 = 1.0 / (muDoubleScalarExp(in1[16] * 200.0 + -(s * 200.0)) + 1.0);
  t67 = (t14 + -t15) * t62;
  t68 = t43 * t43 * t62;
  t69 = muDoubleScalarPower(t43, 3.0) * t62;
  t72 = t68 / 2.0;
  t73 = t15 + t67;
  t80 = t16 + -t68;
  t95 = t68 + t43 * t67;
  t96 = (t16 * 3.0 + -t68) + t39 * t67;
  t62 = ((in2[12] * s / 2.0 + in2[13] * t51) + t12 * t51) + (((((in2[13] + in1
    [16] * in2[16]) + t12) + in2[14] * t14) + -in2[15]) + -(in2[16] * s)) * t68 *
    -0.5;
  t87 = t17 + t39 * -t68;
  t89 = t17 / 2.0 + t39 * t68 * -0.5;
  t98 = muDoubleScalarCos(t62);
  t99 = muDoubleScalarSin(t62);
  t6 = ((in2[0] * t15 + s * t6 * 3.0) + (in2[1] + -in2[3]) * -t68) + (((((in2[0]
    + in1[16] * in2[3]) + t6) + in2[1] * t14) + -in2[2]) + -(in2[3] * s)) * t67;
  t103 = ((in2[4] * t15 + s * t8 * 3.0) + (in2[5] + -in2[7]) * -t68) + (((((in2
    [4] + in1[16] * in2[7]) + t8) + in2[5] * t14) + -in2[6]) + -(in2[7] * s)) *
    t67;
  t104 = (((in2[8] * t15 + s * t10 * 3.0) + (in2[9] + -in2[11]) * -t68) +
          (((((in2[8] + in1[16] * in2[11]) + t10) + in2[9] * t14) + -in2[10]) +
           -(in2[11] * s)) * t67) + 1.0;
  t100 = t98 * t98;
  t101 = t99 * t99;
  t105 = t6 * t6;
  t106 = t103 * t103;
  t43 = t104 * t104;
  t62 = (t105 + t106) + t43;
  t109 = 1.0 / (t62 * t62);
  st.site = &qb_emlrtRSI;
  if (t62 < 0.0) {
    emlrtErrorWithMessageIdR2018a(&st, &c_emlrtRTEI,
      "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3, 4,
      4, "sqrt");
  }

  t39 = 1.0 / muDoubleScalarSqrt(t62);
  t111 = muDoubleScalarPower(t39, 3.0);
  t62 = t67 * t39 / 2.0;
  t16 = t73 * t39 / 2.0;
  t12 = t95 * t39 / 2.0;
  t17 = t96 * t39 / 2.0;
  t117_tmp = t104 * t39 / 2.0 + 0.5;
  st.site = &sb_emlrtRSI;
  if (t117_tmp < 0.0) {
    emlrtErrorWithMessageIdR2018a(&st, &c_emlrtRTEI,
      "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3, 4,
      4, "sqrt");
  }

  t118 = muDoubleScalarSqrt(t117_tmp);
  t119 = 1.0 / t118;
  t129 = t62 + -(t67 * t43 * t111 / 2.0);
  t130 = t16 + -(t73 * t43 * t111 / 2.0);
  t135 = t12 + -(t95 * t43 * t111 / 2.0);
  t136 = t17 + -(t96 * t43 * t111 / 2.0);
  t120 = muDoubleScalarPower(t119, 3.0);
  t131 = t98 * t62 * t119;
  t132 = t99 * t62 * t119;
  t133 = t98 * t16 * t119;
  t134 = t99 * t16 * t119;
  t137 = t98 * t12 * t119;
  t138 = t99 * t12 * t119;
  t139 = t98 * t17 * t119;
  t140 = t99 * t17 * t119;
  t15 = t98 * t6 * t39;
  t141 = t15 * t119;
  t14 = t98 * t103 * t39;
  t142 = t14 * t119;
  t10 = t99 * t6 * t39;
  t143 = t10 * t119;
  t308 = t99 * t103 * t39;
  t144 = t308 * t119;
  t203_tmp = t67 * t98;
  t305 = t203_tmp * t6;
  t43 = t305 * t103;
  t203 = t43 * t111 * t119 / 2.0;
  t204_tmp_tmp = t67 * t99;
  t62 = t204_tmp_tmp * t6;
  t16 = t62 * t103;
  t204 = t16 * t111 * t119 / 2.0;
  t207_tmp = t203_tmp * t103 * t104 * t111 * t119;
  t209_tmp = t62 * t104 * t111 * t119;
  t216_tmp_tmp = t73 * t98;
  t67 = t216_tmp_tmp * t6;
  t62 = t67 * t103;
  t216 = t62 * t111 * t119 / 2.0;
  t217_tmp_tmp = t73 * t99;
  b_t217_tmp_tmp = t217_tmp_tmp * t6;
  t12 = b_t217_tmp_tmp * t103;
  t217 = t12 * t111 * t119 / 2.0;
  t229_tmp_tmp = t95 * t98;
  t73 = t229_tmp_tmp * t6;
  t17 = t73 * t103;
  t229 = t17 * t111 * t119 / 2.0;
  t230_tmp_tmp = t95 * t99;
  b_t230_tmp_tmp = t230_tmp_tmp * t6;
  t39 = b_t230_tmp_tmp * t103;
  t230 = t39 * t111 * t119 / 2.0;
  t242_tmp_tmp = t96 * t98;
  t95 = t242_tmp_tmp * t6;
  t8 = t95 * t103;
  t242 = t8 * t111 * t119 / 2.0;
  t243_tmp_tmp = t96 * t99;
  b_t243_tmp_tmp = t243_tmp_tmp * t6;
  t6 = b_t243_tmp_tmp * t103;
  t243 = t6 * t111 * t119 / 2.0;
  t179_tmp = t51 - t72;
  t255 = t43 * t104 * t109 * t120 / 8.0;
  t96 = t16 * t104 * t109 * t120 / 8.0;
  t259 = t62 * t104 * t109 * t120 / 8.0;
  t51 = t12 * t104 * t109 * t120 / 8.0;
  t263 = t17 * t104 * t109 * t120 / 8.0;
  t264 = t39 * t104 * t109 * t120 / 8.0;
  t267 = t8 * t104 * t109 * t120 / 8.0;
  t268 = t6 * t104 * t109 * t120 / 8.0;
  t271_tmp = t10 * t120;
  t274_tmp = t14 * t120;
  t291 = t141 + t144;
  t292 = t142 + -t143;
  t293 = s * t141 / 4.0 + s * t144 / 4.0;
  t295 = t68 * t144 / 4.0 + t68 * t141 / 4.0;
  t296 = t69 * t144 / 4.0 + t69 * t141 / 4.0;
  t301 = t89 * t141 / 2.0 + t89 * t144 / 2.0;
  t16 = t203_tmp * t104;
  t303 = (((t131 + -(t203_tmp * t105 * t111 * t119 / 2.0)) + -t204) + t16 * t105
          * t109 * t120 / 8.0) + t96;
  t12 = t204_tmp_tmp * t104;
  t306 = (((t132 + -(t204_tmp_tmp * t106 * t111 * t119 / 2.0)) + -t203) + t12 *
          t106 * t109 * t120 / 8.0) + t255;
  t17 = t216_tmp_tmp * t104;
  t307 = (((t133 + -(t216_tmp_tmp * t105 * t111 * t119 / 2.0)) + -t217) + t17 *
          t105 * t109 * t120 / 8.0) + t51;
  t39 = t217_tmp_tmp * t104;
  t310 = (((t134 + -(t217_tmp_tmp * t106 * t111 * t119 / 2.0)) + -t216) + t39 *
          t106 * t109 * t120 / 8.0) + t259;
  t6 = t229_tmp_tmp * t104;
  t311 = (((t137 + -(t229_tmp_tmp * t105 * t111 * t119 / 2.0)) + -t230) + t6 *
          t105 * t109 * t120 / 8.0) + t264;
  t8 = t230_tmp_tmp * t104;
  t314 = (((t138 + -(t230_tmp_tmp * t106 * t111 * t119 / 2.0)) + -t229) + t8 *
          t106 * t109 * t120 / 8.0) + t263;
  t10 = t242_tmp_tmp * t104;
  t315 = (((t139 + -(t242_tmp_tmp * t105 * t111 * t119 / 2.0)) + -t243) + t10 *
          t105 * t109 * t120 / 8.0) + t268;
  t14 = t243_tmp_tmp * t104;
  t318 = (((t140 + -(t243_tmp_tmp * t106 * t111 * t119 / 2.0)) + -t242) + t14 *
          t106 * t109 * t120 / 8.0) + t267;
  t43 = t15 * t120;
  t62 = t308 * t120;
  t319_tmp = t305 * t104 * t111 * t119;
  b_t319_tmp = t204_tmp_tmp * t103 * t104 * t111 * t119;
  t319 = ((t319_tmp / 2.0 + b_t319_tmp / 2.0) + t62 * t129 / 4.0) + t43 * t129 /
    4.0;
  t321_tmp = t67 * t104 * t111 * t119;
  b_t321_tmp = t217_tmp_tmp * t103 * t104 * t111 * t119;
  t321 = ((t321_tmp / 2.0 + b_t321_tmp / 2.0) + t43 * t130 / 4.0) + t62 * t130 /
    4.0;
  t323_tmp = t73 * t104 * t111 * t119;
  b_t323_tmp = t230_tmp_tmp * t103 * t104 * t111 * t119;
  t323 = ((t323_tmp / 2.0 + b_t323_tmp / 2.0) + t43 * t135 / 4.0) + t62 * t135 /
    4.0;
  t325_tmp = t95 * t104 * t111 * t119;
  b_t325_tmp = t243_tmp_tmp * t103 * t104 * t111 * t119;
  t325 = ((t325_tmp / 2.0 + b_t325_tmp / 2.0) + t43 * t136 / 4.0) + t62 * t136 /
    4.0;
  t294 = s * t142 / 4.0 + -(s * t143 / 4.0);
  t297 = t68 * t143 / 4.0 + -(t68 * t142 / 4.0);
  t298 = t69 * t143 / 4.0 + -(t69 * t142 / 4.0);
  t302 = t89 * t142 / 2.0 + -(t89 * t143 / 2.0);
  t204 = (((t131 + -(t203_tmp * t106 * t111 * t119 / 2.0)) + t204) + t16 * t106 *
          t109 * t120 / 8.0) + -t96;
  t305 = (((t132 + -(t204_tmp_tmp * t105 * t111 * t119 / 2.0)) + t203) + t12 *
          t105 * t109 * t120 / 8.0) + -t255;
  t308 = (((t133 + -(t216_tmp_tmp * t106 * t111 * t119 / 2.0)) + t217) + t17 *
          t106 * t109 * t120 / 8.0) + -t51;
  t51 = (((t134 + -(t217_tmp_tmp * t105 * t111 * t119 / 2.0)) + t216) + t39 *
         t105 * t109 * t120 / 8.0) + -t259;
  t96 = (((t137 + -(t229_tmp_tmp * t106 * t111 * t119 / 2.0)) + t230) + t6 *
         t106 * t109 * t120 / 8.0) + -t264;
  t95 = (((t138 + -(t230_tmp_tmp * t105 * t111 * t119 / 2.0)) + t229) + t8 *
         t105 * t109 * t120 / 8.0) + -t263;
  t73 = (((t139 + -(t242_tmp_tmp * t106 * t111 * t119 / 2.0)) + t243) + t10 *
         t106 * t109 * t120 / 8.0) + -t268;
  t14 = (((t140 + -(t243_tmp_tmp * t105 * t111 * t119 / 2.0)) + t242) + t14 *
         t105 * t109 * t120 / 8.0) + -t267;
  t10 = b_t217_tmp_tmp * t104 * t111 * t119;
  t17 = t216_tmp_tmp * t103 * t104 * t111 * t119;
  t67 = ((t17 / 2.0 + -(t10 / 2.0)) + t274_tmp * t130 / 4.0) + -(t271_tmp * t130
    / 4.0);
  t12 = b_t230_tmp_tmp * t104 * t111 * t119;
  t16 = t229_tmp_tmp * t103 * t104 * t111 * t119;
  t15 = ((t16 / 2.0 + -(t12 / 2.0)) + t274_tmp * t135 / 4.0) + -(t271_tmp * t135
    / 4.0);
  t43 = b_t243_tmp_tmp * t104 * t111 * t119;
  t62 = t242_tmp_tmp * t103 * t104 * t111 * t119;
  t39 = ((t62 / 2.0 + -(t43 / 2.0)) + t274_tmp * t136 / 4.0) + -(t271_tmp * t136
    / 4.0);
  out1[0] = t80;
  out1[1] = 0.0;
  out1[2] = 0.0;
  t6 = t98 * t118;
  t8 = t99 * t118;
  out1[3] = ((t8 * t307 * 2.0 + t6 * t51 * 2.0) - t321_tmp * t292 / 4.0) + t10 *
    t291 / 4.0;
  out1[4] = ((t6 * t307 * 2.0 - t8 * t51 * 2.0) + t321_tmp * t291 / 4.0) + t10 *
    t292 / 4.0;
  out1[5] = t292 * t307 + t291 * t51;
  out1[6] = t87;
  out1[7] = 0.0;
  out1[8] = 0.0;
  out1[9] = ((t8 * t315 * 2.0 + t6 * t14 * 2.0) - t325_tmp * t292 / 4.0) + t43 *
    t291 / 4.0;
  out1[10] = ((t6 * t315 * 2.0 - t8 * t14 * 2.0) + t325_tmp * t291 / 4.0) + t43 *
    t292 / 4.0;
  out1[11] = t292 * t315 + t291 * t14;
  out1[12] = t68;
  out1[13] = 0.0;
  out1[14] = 0.0;
  out1[15] = ((t8 * t303 * -2.0 - t6 * t305 * 2.0) + t319_tmp * t292 / 4.0) -
    t209_tmp * t291 / 4.0;
  out1[16] = ((t6 * t303 * -2.0 + t8 * t305 * 2.0) - t319_tmp * t291 / 4.0) -
    t209_tmp * t292 / 4.0;
  out1[17] = -t292 * t303 - t291 * t305;
  out1[18] = -t69;
  out1[19] = 0.0;
  out1[20] = 0.0;
  out1[21] = ((t8 * t311 * 2.0 + t6 * t95 * 2.0) - t323_tmp * t292 / 4.0) + t12 *
    t291 / 4.0;
  out1[22] = ((t6 * t311 * 2.0 - t8 * t95 * 2.0) + t323_tmp * t291 / 4.0) + t12 *
    t292 / 4.0;
  out1[23] = t292 * t311 + t291 * t95;
  out1[24] = 0.0;
  out1[25] = t80;
  out1[26] = 0.0;
  out1[27] = ((t6 * t308 * -2.0 + t8 * t310 * 2.0) - t17 * t292 / 4.0) +
    b_t321_tmp * t291 / 4.0;
  out1[28] = ((t8 * t308 * 2.0 + t6 * t310 * 2.0) + t17 * t291 / 4.0) +
    b_t321_tmp * t292 / 4.0;
  out1[29] = -t291 * t308 + t292 * t310;
  out1[30] = 0.0;
  out1[31] = t87;
  out1[32] = 0.0;
  out1[33] = ((t6 * t73 * -2.0 + t8 * t318 * 2.0) - t62 * t292 / 4.0) +
    b_t325_tmp * t291 / 4.0;
  out1[34] = ((t8 * t73 * 2.0 + t6 * t318 * 2.0) + t62 * t291 / 4.0) +
    b_t325_tmp * t292 / 4.0;
  out1[35] = -t291 * t73 + t292 * t318;
  out1[36] = 0.0;
  out1[37] = t68;
  out1[38] = 0.0;
  out1[39] = ((t6 * t204 * 2.0 - t8 * t306 * 2.0) + t207_tmp * t292 / 4.0) -
    b_t319_tmp * t291 / 4.0;
  out1[40] = ((t8 * t204 * -2.0 - t6 * t306 * 2.0) - t207_tmp * t291 / 4.0) -
    b_t319_tmp * t292 / 4.0;
  out1[41] = t291 * t204 - t292 * t306;
  out1[42] = 0.0;
  out1[43] = -t69;
  out1[44] = 0.0;
  out1[45] = ((t6 * t96 * -2.0 + t8 * t314 * 2.0) - t16 * t292 / 4.0) +
    b_t323_tmp * t291 / 4.0;
  out1[46] = ((t8 * t96 * 2.0 + t6 * t314 * 2.0) + t16 * t291 / 4.0) +
    b_t323_tmp * t292 / 4.0;
  out1[47] = -t291 * t96 + t292 * t314;
  out1[48] = 0.0;
  out1[49] = 0.0;
  out1[50] = t80;
  t12 = t98 * t119;
  t17 = t12 * t130;
  t16 = t99 * t119;
  t43 = t16 * t130;
  out1[51] = ((t6 * t67 * 2.0 - t8 * t321 * 2.0) + t17 * t292 / 2.0) - t43 *
    t291 / 2.0;
  out1[52] = ((t6 * t321 * -2.0 - t8 * t67 * 2.0) - t17 * t291 / 2.0) - t43 *
    t292 / 2.0;
  out1[53] = t291 * t67 - t292 * t321;
  out1[54] = 0.0;
  out1[55] = 0.0;
  out1[56] = t87;
  t17 = t12 * t136;
  t43 = t16 * t136;
  out1[57] = ((t6 * t39 * 2.0 - t8 * t325 * 2.0) + t17 * t292 / 2.0) - t43 *
    t291 / 2.0;
  out1[58] = ((t6 * t325 * -2.0 - t8 * t39 * 2.0) - t17 * t291 / 2.0) - t43 *
    t292 / 2.0;
  out1[59] = t291 * t39 - t292 * t325;
  out1[60] = 0.0;
  out1[61] = 0.0;
  out1[62] = t68;
  t17 = ((t207_tmp / 2.0 - t209_tmp / 2.0) - t271_tmp * t129 / 4.0) + t274_tmp *
    t129 / 4.0;
  t43 = t12 * t129;
  t62 = t16 * t129;
  out1[63] = ((t6 * t17 * -2.0 + t8 * t319 * 2.0) - t43 * t292 / 2.0) + t62 *
    t291 / 2.0;
  out1[64] = ((t8 * t17 * 2.0 + t6 * t319 * 2.0) + t43 * t291 / 2.0) + t62 *
    t292 / 2.0;
  out1[65] = t292 * t319 - t291 * t17;
  out1[66] = 0.0;
  out1[67] = 0.0;
  out1[68] = -t69;
  t17 = t12 * t135;
  t43 = t16 * t135;
  out1[69] = ((t6 * t15 * 2.0 - t8 * t323 * 2.0) + t17 * t292 / 2.0) - t43 *
    t291 / 2.0;
  out1[70] = ((t6 * t323 * -2.0 - t8 * t15 * 2.0) - t17 * t291 / 2.0) - t43 *
    t292 / 2.0;
  out1[71] = t291 * t15 - t292 * t323;
  out1[72] = 0.0;
  out1[73] = 0.0;
  out1[74] = 0.0;
  t17 = s * t98 * t118;
  t43 = s * t99 * t118;
  out1[75] = ((t6 * t293 * 2.0 + t8 * t294 * 2.0) - t17 * t291 / 2.0) - t43 *
    t292 / 2.0;
  out1[76] = ((t6 * t294 * 2.0 - t8 * t293 * 2.0) - t17 * t292 / 2.0) + t43 *
    t291 / 2.0;
  out1[77] = ((t291 * t293 + t292 * t294) + s * t100 * t117_tmp) + s * t101 *
    t117_tmp;
  out1[78] = 0.0;
  out1[79] = 0.0;
  out1[80] = 0.0;
  t17 = t143 * t179_tmp * -0.5 + t142 * t179_tmp / 2.0;
  t43 = t141 * t179_tmp / 2.0 + t144 * t179_tmp / 2.0;
  out1[81] = ((t8 * t17 * 2.0 + t6 * t43 * 2.0) - t6 * t291 * t179_tmp) - t8 *
    t292 * t179_tmp;
  out1[82] = ((t6 * t17 * 2.0 - t8 * t43 * 2.0) - t6 * t292 * t179_tmp) + t8 *
    t291 * t179_tmp;
  out1[83] = ((t292 * t17 + t291 * t43) + t100 * t117_tmp * t179_tmp * 2.0) +
    t101 * t117_tmp * t179_tmp * 2.0;
  out1[84] = 0.0;
  out1[85] = 0.0;
  out1[86] = 0.0;
  t17 = t89 * t98 * t118;
  t43 = t89 * t99 * t118;
  out1[87] = ((t6 * t301 * 2.0 + t8 * t302 * 2.0) - t17 * t291) - t43 * t292;
  out1[88] = ((t6 * t302 * 2.0 - t8 * t301 * 2.0) - t17 * t292) + t43 * t291;
  out1[89] = ((t291 * t301 + t292 * t302) + t89 * t100 * t117_tmp * 2.0) + t89 *
    t101 * t117_tmp * 2.0;
  out1[90] = 0.0;
  out1[91] = 0.0;
  out1[92] = 0.0;
  t17 = t68 * t98 * t118;
  out1[93] = ((t6 * t295 * 2.0 - t8 * t297 * 2.0) - t17 * t291 / 2.0) - t68 *
    t99 * t118 * t292 / 2.0;
  out1[94] = ((t8 * t295 * -2.0 - t6 * t297 * 2.0) - t17 * t292 / 2.0) + t72 *
    t99 * t118 * t291;
  out1[95] = ((t291 * t295 - t292 * t297) + t68 * t100 * t117_tmp) + t68 * t101 *
    t117_tmp;
  out1[96] = 0.0;
  out1[97] = 0.0;
  out1[98] = 0.0;
  t17 = t69 * t98 * t118;
  t43 = t69 * t99 * t118;
  out1[99] = ((t6 * t296 * -2.0 + t8 * t298 * 2.0) + t17 * t291 / 2.0) + t43 *
    t292 / 2.0;
  out1[100] = ((t8 * t296 * 2.0 + t6 * t298 * 2.0) + t17 * t292 / 2.0) - t43 *
    t291 / 2.0;
  out1[101] = ((-t291 * t296 + t292 * t298) + -t69 * t100 * t117_tmp) + -t69 *
    t101 * t117_tmp;
}

/* End of code generation (massT1.c) */
