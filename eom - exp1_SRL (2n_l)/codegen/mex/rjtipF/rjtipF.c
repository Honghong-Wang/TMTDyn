/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * rjtipF.c
 *
 * Code generation for function 'rjtipF'
 *
 */

/* Include files */
#include "rjtipF.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 41,    /* lineNo */
  "rjtipF",                            /* fcnName */
  "C:\\Users\\customer\\MEGAsync\\Hadi\\TMTDyn\\Code\\TMTDyn_beta\\v5_Latest_Version_Examples\\eom\\rjtipF.m"/* pathName */
};

static emlrtRTEInfo emlrtRTEI = { 13,  /* lineNo */
  9,                                   /* colNo */
  "sqrt",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\elfun\\sqrt.m"/* pName */
};

/* Function Definitions */
void rjtipF(const emlrtStack *sp, const real_T in1[34], const real_T in2[36],
            real_T s, real_T ds, real_T t_sym, real_T out1[60])
{
  emlrtStack st;
  real_T t10;
  real_T t11;
  real_T t12;
  real_T t125;
  real_T t126;
  real_T t127;
  real_T t128;
  real_T t13;
  real_T t14;
  real_T t144;
  real_T t145;
  real_T t146;
  real_T t147;
  real_T t15;
  real_T t156;
  real_T t16;
  real_T t17;
  real_T t18;
  real_T t19;
  real_T t2;
  real_T t20;
  real_T t21;
  real_T t22;
  real_T t23;
  real_T t24;
  real_T t25;
  real_T t27;
  real_T t3;
  real_T t31;
  real_T t32;
  real_T t33;
  real_T t4;
  real_T t5;
  real_T t6;
  real_T t65;
  real_T t66;
  real_T t67;
  real_T t68;
  real_T t69;
  real_T t7;
  real_T t70;
  real_T t75;
  real_T t76;
  real_T t77;
  real_T t8;
  real_T t9;
  (void)s;
  (void)ds;
  (void)t_sym;
  st.prev = sp;
  st.tls = sp->tls;

  /* RJTIPF */
  /*     OUT1 = RJTIPF(IN1,IN2,S,DS,T_SYM) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.6. */
  /*     15-Jun-2021 01:21:32 */
  t2 = in1[4] / 3.0;
  t3 = in2[3] / 2.0;
  t4 = in2[4] / 2.0;
  t5 = in2[5] / 2.0;
  t6 = in2[9] / 2.0;
  t7 = in2[10] / 2.0;
  t8 = in2[11] / 2.0;
  t9 = in2[15] / 2.0;
  t10 = in2[16] / 2.0;
  t11 = in2[17] / 2.0;
  st.site = &emlrtRSI;
  if (in1[33] < 0.0) {
    emlrtErrorWithMessageIdR2018a(&st, &emlrtRTEI,
      "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3, 4,
      4, "sqrt");
  }

  t12 = muDoubleScalarCos(t3);
  t13 = muDoubleScalarCos(t4);
  t14 = muDoubleScalarCos(t5);
  t15 = muDoubleScalarCos(t6);
  t16 = muDoubleScalarCos(t7);
  t17 = muDoubleScalarCos(t8);
  t18 = muDoubleScalarCos(t9);
  t19 = muDoubleScalarCos(t10);
  t20 = muDoubleScalarCos(t11);
  t21 = muDoubleScalarSin(t3);
  t22 = muDoubleScalarSin(t4);
  t23 = muDoubleScalarSin(t5);
  t24 = muDoubleScalarSin(t6);
  t25 = muDoubleScalarSin(t7);
  t8 = muDoubleScalarSin(t8);
  t27 = muDoubleScalarSin(t9);
  t9 = muDoubleScalarSin(t10);
  t7 = muDoubleScalarSin(t11);
  t31 = in2[8] + t2;
  t32 = in2[14] + t2;
  t33 = in1[3] * (1.0 / muDoubleScalarSqrt(in1[33]));
  t4 = t21 * t22 * t23;
  t3 = t12 * t13;
  t5 = t3 * t14;
  t65 = t3 * t23 + t14 * t21 * t22;
  t66 = t13 * t14 * t21 + t12 * t22 * t23;
  t3 = t15 * t16;
  t67 = t3 * t8 + t17 * t24 * t25;
  t68 = t16 * t17 * t24 + t15 * t25 * t8;
  t6 = t18 * t19;
  t69 = t6 * t7 + t20 * t27 * t9;
  t70 = t19 * t20 * t27 + t18 * t9 * t7;
  t75 = t12 * t14 * t22 + -(t13 * t21 * t23);
  t76 = t4 + -t5;
  t77 = t5 + -t4;
  t23 = t15 * t17 * t25 + -(t16 * t24 * t8);
  t4 = t24 * t25 * t8 + -(t3 * t17);
  t17 = t18 * t20 * t9 + -(t19 * t27 * t7);
  t16 = t27 * t9 * t7 + -(t6 * t20);
  t10 = t65 * t67;
  t7 = t65 * t68;
  t8 = t66 * t67;
  t11 = t66 * t68;
  t22 = t65 * t23;
  t12 = t65 * t4;
  t13 = t66 * t23;
  t21 = t66 * t4;
  t25 = t67 * t75;
  t14 = t68 * t75;
  t27 = t67 * t76;
  t9 = t68 * t76;
  t6 = t75 * t23;
  t5 = t75 * t4;
  t3 = t76 * t23;
  t4 *= t76;
  t125 = (in2[7] * t65 + in2[6] * t75) + t31 * t66;
  t126 = (in2[7] * t66 + in2[6] * t76) + -(t31 * t65);
  t128 = (-(in2[6] * t66) + in2[7] * t76) + t31 * t75;
  t147 = ((t8 + -t7) + t5) + t3;
  t127 = (in2[6] * t65 + -(in2[7] * t75)) + t31 * t76;
  t144 = ((t10 + t11) + t6) + -t4;
  t145 = ((t22 + t21) + t9) + -t25;
  t146 = ((t12 + t14) + t27) + -t13;
  t156 = ((t7 + -t8) + -t5) + -t3;
  t31 = ((-t10 + -t11) + t4) + -t6;
  t68 = ((t25 + -t22) + -t21) + -t9;
  t20 = ((t13 + -t12) + -t14) + -t27;
  t7 = t69 * t147;
  t3 = t70 * t147;
  t4 = t69 * t144;
  t8 = t70 * t144;
  t5 = t17 * t145;
  t9 = t17 * t146;
  t10 = t16 * t145;
  t6 = t16 * t146;
  t14 = (in2[12] * t147 + in2[13] * t146) + t32 * t145;
  t24 = (in2[12] * t145 + in2[13] * t144) + -(t32 * t147);
  t67 = ((t69 * t146 + t70 * t145) + t17 * t147) + t16 * t144;
  t15 = (in2[13] * t147 + -(in2[12] * t146)) + t32 * t144;
  t13 = (in2[12] * t144 + -(in2[13] * t145)) + t32 * t146;
  t18 = t67 * t67;
  t19 = ((t4 + t5) + -t3) + -t6;
  t16 = ((t69 * t145 + t16 * t147) + -(t70 * t146)) + -(t17 * t144);
  t17 = ((t7 + t8) + -t9) + -t10;
  t12 = ((t3 + t6) + -t4) + -t5;
  t11 = ((t9 + t10) + -t7) + -t8;
  t23 = t19 * t19;
  t22 = t16 * t16;
  t21 = t17 * t17;
  t3 = in1[4] * t67;
  t25 = (((in2[1] + t65 * t125) + -(t66 * t126)) + t75 * t127) + t76 * t128;
  t4 = (((t25 + t146 * t14) + t145 * t13) + t144 * t24) + -(t147 * t15);
  t27 = (t4 + -(t3 * t16 * 0.66666666666666663)) + in1[4] * t19 * t17 *
    0.66666666666666663;
  t9 = (((in2[0] + t75 * t125) + t66 * t128) + t76 * t126) + -(t65 * t127);
  t5 = (((t9 + t147 * t14) + t146 * t15) + t144 * t13) + -(t145 * t24);
  t10 = (t5 + -(t3 * t19 * 0.66666666666666663)) + -(in1[4] * t16 * t17 *
    0.66666666666666663);
  t8 = (((in2[2] + t66 * t125) + t65 * t126) + t76 * t127) + -(t75 * t128);
  t3 = (((t8 + t145 * t14) + t144 * t15) + t147 * t24) + -(t146 * t13);
  t7 = (((t3 + t2 * t18) + t2 * t21) + in1[4] * t23 * -0.33333333333333331) +
    in1[4] * t22 * -0.33333333333333331;
  out1[0] = in2[0];
  out1[1] = t9;
  out1[2] = t5;
  out1[3] = t10;
  out1[4] = in2[1];
  out1[5] = t25;
  out1[6] = t4;
  out1[7] = t27;
  out1[8] = in2[2];
  out1[9] = t8;
  out1[10] = t3;
  out1[11] = t7;
  t4 = in1[4] * t65;
  out1[12] = (in2[0] - t4 * t76 * 0.66666666666666663) + in1[4] * t66 * t75 *
    0.66666666666666663;
  t5 = in1[4] * t144;
  t6 = in1[4] * t145;
  out1[13] = (t9 + t5 * t146 * 0.66666666666666663) + t6 * t147 *
    0.66666666666666663;
  out1[14] = t10;
  t3 = in1[16] * t67;
  out1[15] = (t10 - t3 * t19 * 2.0) - in1[16] * t16 * t17 * 2.0;
  out1[16] = (in2[1] + t4 * t66 * 0.66666666666666663) + in1[4] * t75 * t76 *
    0.66666666666666663;
  out1[17] = (t25 - t5 * t147 * 0.66666666666666663) + t6 * t146 *
    0.66666666666666663;
  out1[18] = t27;
  out1[19] = (t27 - t3 * t16 * 2.0) + in1[16] * t19 * t17 * 2.0;
  out1[20] = (((in2[2] - in1[4] * (t65 * t65) / 3.0) - in1[4] * (t75 * t75) /
               3.0) + t2 * (t66 * t66)) + t2 * (t76 * t76);
  out1[21] = (((t8 - in1[4] * (t146 * t146) / 3.0) - in1[4] * (t147 * t147) /
               3.0) + t2 * (t144 * t144)) + t2 * (t145 * t145);
  out1[22] = t7;
  out1[23] = (((t7 + in1[16] * t18) - in1[16] * t23) - in1[16] * t22) + in1[16] *
    t21;
  out1[24] = t77;
  out1[25] = t31;
  out1[26] = t67;
  out1[27] = t67;
  out1[28] = t75;
  out1[29] = t156;
  out1[30] = t16;
  out1[31] = t16;
  out1[32] = t65;
  out1[33] = t20;
  out1[34] = t12;
  out1[35] = t12;
  out1[36] = t66;
  out1[37] = t68;
  out1[38] = t11;
  out1[39] = t11;
  out1[40] = t77;
  out1[41] = t31;
  out1[42] = t67;
  out1[43] = t67;
  out1[44] = t75;
  out1[45] = t156;
  out1[46] = t16;
  out1[47] = t16;
  out1[48] = t65;
  out1[49] = t20;
  out1[50] = t12;
  out1[51] = t12;
  out1[52] = t66;
  out1[53] = t68;
  out1[54] = t11;
  out1[55] = t11;
  out1[56] = t33;
  out1[57] = t33;
  out1[58] = t33;
  out1[59] = in1[17];
}

/* End of code generation (rjtipF.c) */
