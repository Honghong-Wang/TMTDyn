/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * sprdmpF104.c
 *
 * Code generation for function 'sprdmpF104'
 *
 */

/* Include files */
#include <string.h>
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "EOM.h"
#include "sprdmpF104.h"
#include "sqrt.h"

/* Variable Definitions */
static emlrtRSInfo ev_emlrtRSI = { 41, /* lineNo */
  "sprdmpF104",                        /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/Fabric/code/sprdmpF104.m"/* pathName */
};

static emlrtRSInfo fv_emlrtRSI = { 47, /* lineNo */
  "sprdmpF104",                        /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/Fabric/code/sprdmpF104.m"/* pathName */
};

static emlrtRSInfo jv_emlrtRSI = { 77, /* lineNo */
  "sprdmpF104",                        /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/Fabric/code/sprdmpF104.m"/* pathName */
};

static emlrtRSInfo kv_emlrtRSI = { 89, /* lineNo */
  "sprdmpF104",                        /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/Fabric/code/sprdmpF104.m"/* pathName */
};

static emlrtRSInfo wv_emlrtRSI = { 297,/* lineNo */
  "sprdmpF104",                        /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/Fabric/code/sprdmpF104.m"/* pathName */
};

/* Function Definitions */
void sprdmpF104(const emlrtStack *sp, const real_T in1[6], const real_T in2[206],
                real_T out1[546], real_T out2[6], real_T out3[6], real_T out4[6])
{
  real_T t2;
  real_T t3;
  real_T t4;
  real_T t5;
  real_T t6;
  real_T t7;
  real_T t8;
  real_T t9;
  real_T t10;
  real_T t11;
  real_T t12;
  real_T t13_tmp;
  real_T t205;
  real_T t15_tmp;
  real_T t17_tmp;
  real_T t17;
  real_T t19;
  real_T t20;
  real_T t236;
  real_T t22_tmp;
  real_T t23_tmp;
  real_T t209;
  real_T t25;
  real_T t232;
  real_T t234;
  real_T t206;
  real_T t27;
  real_T t29_tmp;
  real_T t29;
  real_T t31;
  real_T t177;
  real_T t178;
  real_T t32;
  real_T t34;
  real_T t35;
  real_T t36;
  real_T t41;
  real_T t42;
  real_T t43;
  real_T t46_tmp;
  real_T t46;
  real_T t48;
  real_T t49;
  real_T t50_tmp;
  real_T t51_tmp;
  real_T b_t51_tmp;
  real_T t52_tmp;
  real_T t52;
  real_T t230;
  real_T t53_tmp;
  real_T t54;
  real_T t55;
  real_T t56;
  real_T t58;
  real_T t59;
  real_T t60;
  real_T t61_tmp;
  real_T t62_tmp;
  real_T t63_tmp;
  real_T t64_tmp;
  real_T a_tmp;
  real_T t71;
  real_T t74;
  real_T t79;
  real_T b_a_tmp;
  real_T c_a_tmp;
  real_T a;
  real_T b_a;
  real_T t82;
  real_T t86;
  real_T t90;
  real_T t91;
  real_T t92;
  real_T t93;
  real_T t94;
  real_T t95;
  real_T t106_tmp;
  real_T t106;
  real_T t110;
  real_T t115;
  real_T t116;
  real_T t117;
  real_T t121;
  real_T t122;
  real_T t123;
  real_T t124;
  real_T t125;
  real_T t126;
  real_T t127_tmp;
  real_T b_t127_tmp;
  real_T t127;
  real_T t136_tmp;
  real_T t136;
  real_T t139;
  real_T t149;
  real_T t153;
  real_T t154;
  real_T t155;
  real_T t156;
  real_T t169;
  real_T t172;
  real_T t181;
  real_T t183;
  real_T t186;
  real_T t189;
  real_T t192;
  real_T t196;
  real_T t200;
  real_T t208;
  real_T t212;
  real_T t213;
  real_T t215;
  real_T t218;
  int32_T i;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;

  /* SPRDMPF104 */
  /*     [OUT1,OUT2,OUT3,OUT4,OUT5,OUT6,OUT7,OUT8] = SPRDMPF104(IN1,IN2,S) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.2. */
  /*     09-Jan-2019 03:21:50 */
  t2 = in2[46] * in2[46];
  t3 = in2[47] * in2[47];
  t4 = in2[45] * in2[45];
  t5 = ((-t2 - t3) - t4) + 1.0;
  t6 = t5;
  st.site = &ev_emlrtRSI;
  b_sqrt(&st, &t6);
  t7 = in2[47] * t6 * 2.0;
  t8 = t3 * 2.0;
  t9 = in2[45] * t6 * 2.0;
  t10 = t4 * 2.0;
  t11 = t2 * 2.0;
  st.site = &fv_emlrtRSI;
  b_sqrt(&st, &t5);
  t12 = 1.0 / t5;
  t13_tmp = in2[43] - in2[49];
  t205 = in2[44] - in2[50];
  t15_tmp = in2[42] - in2[48];
  t17_tmp = in2[45] * t12;
  t17 = (-in2[44] + in2[50]) + t17_tmp * t13_tmp;
  t19 = t13_tmp + t17_tmp * t205;
  t20 = t6 * t13_tmp;
  t236 = in2[45] * t205;
  t22_tmp = in2[45] * t13_tmp;
  t23_tmp = t6 * t205;
  t209 = in2[46] * t15_tmp;
  t25 = t6 * t15_tmp;
  t232 = in2[47] * t13_tmp;
  t234 = in2[46] * t205;
  t206 = t25 + t232;
  t27 = t206 - t234;
  t29_tmp = in2[46] * t12;
  t29 = (-in2[42] + in2[48]) + t29_tmp * t205;
  t31 = t205 + t29_tmp * t15_tmp;
  t177 = in2[47] * t15_tmp;
  t178 = t20 + t236;
  t32 = t178 - t177;
  t34 = (-t22_tmp + t23_tmp) + t209;
  t35 = in2[53] * 2.0;
  t36 = in2[45] - in2[51];
  t5 = ((-(in2[51] * in2[51]) - in2[52] * in2[52]) - in2[53] * in2[53]) + 1.0;
  t41 = t5;
  st.site = &jv_emlrtRSI;
  b_sqrt(&st, &t41);
  t42 = in2[46] - in2[52];
  t43 = in2[47] - in2[53];
  t46_tmp = in2[47] * t12;
  t46 = t15_tmp + t46_tmp * t13_tmp;
  t48 = (-in2[43] + in2[49]) + t46_tmp * t15_tmp;
  t49 = in2[51] * 2.0;
  t50_tmp = in2[46] * t6 * 2.0;
  t51_tmp = in2[45] * in2[46];
  b_t51_tmp = t51_tmp * 2.0;
  t52_tmp = in2[45] * in2[47];
  t52 = t52_tmp * 2.0;
  t230 = in2[46] * in2[47];
  t53_tmp = t230 * 2.0;
  st.site = &kv_emlrtRSI;
  b_sqrt(&st, &t5);
  t54 = 1.0 / t5;
  t55 = t6 * 2.0;
  t56 = in2[46] * 2.0;
  t5 = in1[4] / 2.0;
  t58 = muDoubleScalarCos(t5);
  t59 = t58 / 25.0;
  t60 = muDoubleScalarSin(t5);
  t61_tmp = in2[45] * t15_tmp;
  t62_tmp = in2[46] * t13_tmp;
  t63_tmp = in2[47] * t205;
  t64_tmp = (t61_tmp + t62_tmp) + t63_tmp;
  a_tmp = t58 * t58 * 2.635724972E-14 + t60 * t60 * 2.635724972E-14;
  t71 = t59 + t60 * 0.162;
  t74 = t59 + t60 * 0.077;
  t5 = t60 / 25.0;
  t59 = t58 * 0.162 - t5;
  t79 = t58 * 0.077;
  t5 -= t79;
  b_a_tmp = t58 * t71 + t60 * t59;
  c_a_tmp = t58 * t74;
  a = (b_a_tmp - c_a_tmp) + t60 * t5;
  b_a = ((t58 * t59 + t58 * t5) - t60 * t71) + t60 * t74;
  t82 = t6 - t41;
  t74 = t230 * t12;
  t86 = (((((t23_tmp + t209) + t6 * t31) + t29_tmp * t27) + t74 * t13_tmp) -
         in2[46] * t29) - t22_tmp * 2.0;
  t90 = (((((-t20 + t177) + t6 * t48) + in2[47] * t46) + t46_tmp * t27) - t236 *
         2.0) - t74 * t205;
  t91 = (t8 + t11) - 1.0;
  t92 = t7 + b_t51_tmp;
  t93 = t50_tmp - t52;
  t94 = in2[47] * t17;
  t95 = t17_tmp * t27;
  t106_tmp = in2[46] * t19;
  t106 = ((t64_tmp - t94) - t95) + t106_tmp;
  t110 = muDoubleScalarPower(muDoubleScalarAbs((((((((t86 * in2[149] + t90 *
    in2[150]) + t91 * in2[145]) + t93 * in2[147]) + t92 * in2[152]) - t91 * in2
    [151]) - t92 * in2[146]) - t93 * in2[153]) - t106 * in2[148]), in1[1] - 1.0);
  t115 = t6 * t17;
  t116 = in2[45] * t19;
  t117 = t17_tmp * t32;
  t5 = t52_tmp * t12;
  t121 = ((((t206 + t6 * t46) + t46_tmp * t32) + t5 * t205) - in2[47] * t48) -
    t234 * 2.0;
  t122 = (t8 + t10) - 1.0;
  t123 = t9 + t53_tmp;
  t124 = t7 - b_t51_tmp;
  t125 = in2[45] * t29;
  t126 = t29_tmp * t32;
  t127_tmp = t209 * 2.0;
  b_t127_tmp = t5 * t15_tmp;
  t127 = (((((t22_tmp - t23_tmp) + t115) + t116) + t117) - t127_tmp) -
    b_t127_tmp;
  t136_tmp = in2[47] * t31;
  t136 = ((t64_tmp - t125) - t126) + t136_tmp;
  t139 = muDoubleScalarPower(muDoubleScalarAbs((((((((t127 * in2[148] + t121 *
    in2[150]) + t122 * in2[146]) + t124 * in2[145]) + t123 * in2[153]) - t122 *
    in2[152]) - t123 * in2[147]) - t124 * in2[151]) - t136 * in2[149]), in1[1] -
    1.0);
  t59 = t51_tmp * t12;
  t149 = ((((t178 + t6 * t19) + t17_tmp * t34) + t59 * t15_tmp) - in2[45] * t17)
    - t177 * 2.0;
  t153 = (((((-t25 + t234) + t6 * t29) + in2[46] * t31) + t29_tmp * t34) - t232 *
          2.0) - t59 * t13_tmp;
  t154 = (t10 + t11) - 1.0;
  t155 = t50_tmp + t52;
  t156 = t9 - t53_tmp;
  t29 = in2[46] * t48;
  t31 = t46_tmp * t34;
  t19 = in2[45] * t46;
  t169 = ((t64_tmp - t29) - t31) + t19;
  t172 = muDoubleScalarPower(muDoubleScalarAbs((((((((t149 * in2[148] + t153 *
    in2[149]) + t154 * in2[147]) + t156 * in2[146]) + t155 * in2[151]) - t154 *
    in2[153]) - t155 * in2[145]) - t156 * in2[152]) - t169 * in2[150]), in1[1] -
    1.0);
  t177 = t17_tmp * t36 * 2.0;
  t178 = t29_tmp * t36 * 2.0;
  t48 = in2[52] * 2.0;
  t13_tmp = t5 * 2.0;
  t181 = (t48 + t46_tmp * t36 * 2.0) - t13_tmp;
  t183 = t55 + in2[45] * in2[51] * t54 * 2.0;
  t5 = in2[47] * 2.0;
  t186 = t5 + in2[45] * in2[52] * t54 * 2.0;
  t17 = in2[45] * in2[53] * t54 * 2.0;
  t51_tmp = t59 * 2.0;
  t189 = (t35 - t178) + t51_tmp;
  t25 = t41 * 2.0;
  t236 = t4 * t12 * 2.0;
  t192 = (-t177 + t25) + t236;
  t196 = t56 - t17;
  t200 = muDoubleScalarPower(muDoubleScalarAbs(((((t192 * in2[148] + t189 * in2
    [149]) + t196 * in2[156]) - t181 * in2[150]) - t183 * in2[154]) - t186 *
    in2[155]), in1[1] - 1.0);
  t20 = t29_tmp * t42 * 2.0;
  t205 = t17_tmp * t42 * 2.0;
  t206 = t46_tmp * t42 * 2.0;
  t208 = t55 + in2[46] * in2[52] * t54 * 2.0;
  t209 = in2[46] * in2[51] * t54 * 2.0;
  t46 = in2[45] * 2.0;
  t212 = t46 + in2[46] * in2[53] * t54 * 2.0;
  t213 = (t35 - t51_tmp) + t205;
  t58 = t2 * t12 * 2.0;
  t215 = (t25 - t20) + t58;
  t15_tmp = t74 * 2.0;
  t218 = (t49 - t206) + t15_tmp;
  t4 = t5 - t209;
  t2 = muDoubleScalarPower(muDoubleScalarAbs(((((t215 * in2[149] + t218 * in2
    [150]) + t4 * in2[154]) - t213 * in2[148]) - t208 * in2[155]) - t212 * in2
    [156]), in1[1] - 1.0);
  t71 = t46_tmp * t43 * 2.0;
  t59 = t17_tmp * t43 * 2.0;
  t230 = t29_tmp * t43 * 2.0;
  t232 = t55 + in2[47] * in2[53] * t54 * 2.0;
  t234 = t56 + in2[47] * in2[51] * t54 * 2.0;
  t74 = in2[47] * in2[52] * t54 * 2.0;
  memset(&out1[0], 0, 42U * sizeof(real_T));
  out1[42] = t91;
  out1[43] = -t7 - b_t51_tmp;
  out1[44] = t50_tmp - in2[45] * in2[47] * 2.0;
  out1[45] = ((((t94 + t95) - t62_tmp) - t61_tmp) - t63_tmp) - t106_tmp;
  out1[46] = t86;
  out1[47] = t90;
  out1[48] = (-t8 - t11) + 1.0;
  out1[49] = t92;
  out1[50] = -t50_tmp + t52;
  memset(&out1[51], 0, 82U * sizeof(real_T));
  out1[133] = t7 - in2[45] * in2[46] * 2.0;
  out1[134] = t122;
  out1[135] = -t9 - t53_tmp;
  out1[136] = (((((t22_tmp + t115) + t116) + t117) - t127_tmp) - t23_tmp) -
    b_t127_tmp;
  out1[137] = ((((t125 + t126) - t62_tmp) - t61_tmp) - t63_tmp) - t136_tmp;
  out1[138] = t121;
  out1[139] = -t7 + b_t51_tmp;
  out1[140] = (-t8 - t10) + 1.0;
  out1[141] = t123;
  memset(&out1[142], 0, 82U * sizeof(real_T));
  out1[224] = t52_tmp * -2.0 - t50_tmp;
  out1[225] = t9 - in2[46] * in2[47] * 2.0;
  out1[226] = t154;
  out1[227] = t149;
  out1[228] = t153;
  out1[229] = ((((t29 + t31) - t62_tmp) - t61_tmp) - t63_tmp) - t19;
  out1[230] = t155;
  out1[231] = -t9 + t53_tmp;
  out1[232] = (-t10 - t11) + 1.0;
  memset(&out1[233], 0, 85U * sizeof(real_T));
  out1[318] = (t41 * -2.0 + t177) - t236;
  out1[319] = (-t35 + t178) - t51_tmp;
  out1[320] = t181;
  out1[321] = 0.0;
  out1[322] = 0.0;
  out1[323] = 0.0;
  out1[324] = t183;
  out1[325] = t186;
  out1[326] = -t56 + t17;
  memset(&out1[327], 0, 82U * sizeof(real_T));
  out1[409] = (t35 + t205) - t51_tmp;
  out1[410] = (t41 * -2.0 + t20) - t58;
  out1[411] = (-t49 + t206) - t15_tmp;
  out1[412] = 0.0;
  out1[413] = 0.0;
  out1[414] = 0.0;
  out1[415] = in2[47] * -2.0 + t209;
  out1[416] = t208;
  out1[417] = t212;
  memset(&out1[418], 0, 82U * sizeof(real_T));
  out1[500] = (in2[52] * -2.0 + t59) - t13_tmp;
  out1[501] = (t49 + t230) - t15_tmp;
  t5 = t3 * t12 * 2.0;
  out1[502] = (t41 * -2.0 + t71) - t5;
  out1[503] = 0.0;
  out1[504] = 0.0;
  out1[505] = 0.0;
  out1[506] = t234;
  out1[507] = in2[45] * -2.0 + t74;
  out1[508] = t232;
  memset(&out1[509], 0, 37U * sizeof(real_T));
  t236 = (t48 + t13_tmp) - t59;
  t20 = (t25 - t71) + t5;
  t230 += t49 - t15_tmp;
  t71 = t46 - t74;
  t58 = muDoubleScalarPower(muDoubleScalarAbs(((((t20 * in2[150] + t236 * in2
    [148]) + t71 * in2[155]) - t230 * in2[149]) - t232 * in2[156]) - t234 * in2
    [154]), in1[1] - 1.0);
  t5 = (a_tmp * a_tmp + a * a) + b_a * b_a;
  st.site = &wv_emlrtRSI;
  b_sqrt(&st, &t5);
  out2[0] = in1[0] * ((((((b_a_tmp + in2[47] * t32) - in2[46] * t34) + in2[45] *
    t64_tmp) + t6 * t27) - c_a_tmp) + t60 * (t60 / 25.0 - t79)) *
    0.00026666666666666668;
  out2[1] = in1[0] * ((((a_tmp - in2[47] * t27) + in2[45] * t34) + in2[46] *
                       t64_tmp) + t6 * t32) * 0.00026666666666666668;
  out2[2] = in1[0] * ((((t5 + in2[46] * t27) - in2[45] * t32) + in2[47] *
                       t64_tmp) + t6 * t34) * 0.0008;
  out2[3] = in1[0] * (((in2[46] * t43 * 2.0 - in2[47] * t42 * 2.0) + in2[45] *
                       t82 * 2.0) - t6 * t36 * 2.0) * -4.2666666666666668E-11;
  out2[4] = in1[0] * (((in2[47] * t36 * 2.0 - in2[45] * t43 * 2.0) + in2[46] *
                       t82 * 2.0) - t6 * t42 * 2.0) * -1.421066666666666E-8;
  out2[5] = in1[0] * (((in2[46] * t36 * 2.0 - in2[45] * t42 * 2.0) - in2[47] *
                       t82 * 2.0) + t6 * t43 * 2.0) * 4.75111111111111E-9;
  t74 = in1[2] * t91 * t110;
  t59 = in1[2] * t92 * t110;
  t5 = in1[2] * t93 * t110;
  out3[0] = (((((((-in1[2] * t86 * t110 * in2[149] - t74 * in2[145]) + t59 *
                  in2[146]) - in1[2] * t90 * t110 * in2[150]) - t5 * in2[147]) +
               t74 * in2[151]) - t59 * in2[152]) + t5 * in2[153]) + in1[2] *
    t106 * t110 * in2[148];
  t74 = in1[2] * t124 * t139;
  t59 = in1[2] * t123 * t139;
  out3[1] = (((((((-in1[2] * t122 * t139 * in2[146] - t74 * in2[145]) + t59 *
                  in2[147]) - in1[2] * t121 * t139 * in2[150]) + in1[2] * t122 *
                t139 * in2[152]) + t74 * in2[151]) - in1[2] * t127 * t139 * in2
              [148]) - t59 * in2[153]) + in1[2] * t136 * t139 * in2[149];
  t74 = in1[2] * t155 * t172;
  t59 = in1[2] * t154 * t172;
  t5 = in1[2] * t156 * t172;
  out3[2] = (((((((-in1[2] * t149 * t172 * in2[148] + t74 * in2[145]) - t59 *
                  in2[147]) - in1[2] * t153 * t172 * in2[149]) - t5 * in2[146])
               - t74 * in2[151]) + t59 * in2[153]) + t5 * in2[152]) + in1[2] *
    t169 * t172 * in2[150];
  out3[3] = ((((-in1[3] * t181 * t200 * in2[150] - in1[3] * t183 * t200 * in2
                [154]) + in1[3] * t189 * t200 * in2[149]) + in1[3] * t192 * t200
              * in2[148]) - in1[3] * t186 * t200 * in2[155]) + in1[3] * t196 *
    t200 * in2[156];
  out3[4] = ((((-in1[3] * t213 * t2 * in2[148] - in1[3] * t208 * t2 * in2[155])
               + in1[3] * t215 * t2 * in2[149]) - in1[3] * t212 * t2 * in2[156])
             + in1[3] * t218 * t2 * in2[150]) + in1[3] * t4 * t2 * in2[154];
  out3[5] = ((((in1[3] * t236 * t58 * in2[148] - in1[3] * t232 * t58 * in2[156])
               - in1[3] * t234 * t58 * in2[154]) + in1[3] * t20 * t58 * in2[150])
             - in1[3] * t230 * t58 * in2[149]) + in1[3] * t71 * t58 * in2[155];
  for (i = 0; i < 6; i++) {
    out4[i] = 0.0;
  }
}

/* End of code generation (sprdmpF104.c) */