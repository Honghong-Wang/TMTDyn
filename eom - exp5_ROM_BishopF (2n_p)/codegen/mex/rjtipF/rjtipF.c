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
static emlrtRSInfo k_emlrtRSI = { 71,  /* lineNo */
  "rjtipF",                            /* fcnName */
  "C:\\Users\\customer\\MEGAsync\\Hadi\\TMTDyn\\Code\\TMTDyn_beta\\v5_Latest_Version_Examples\\eom\\rjtipF.m"/* pathName */
};

static emlrtRSInfo l_emlrtRSI = { 73,  /* lineNo */
  "rjtipF",                            /* fcnName */
  "C:\\Users\\customer\\MEGAsync\\Hadi\\TMTDyn\\Code\\TMTDyn_beta\\v5_Latest_Version_Examples\\eom\\rjtipF.m"/* pathName */
};

static emlrtRSInfo m_emlrtRSI = { 77,  /* lineNo */
  "rjtipF",                            /* fcnName */
  "C:\\Users\\customer\\MEGAsync\\Hadi\\TMTDyn\\Code\\TMTDyn_beta\\v5_Latest_Version_Examples\\eom\\rjtipF.m"/* pathName */
};

static emlrtRSInfo n_emlrtRSI = { 80,  /* lineNo */
  "rjtipF",                            /* fcnName */
  "C:\\Users\\customer\\MEGAsync\\Hadi\\TMTDyn\\Code\\TMTDyn_beta\\v5_Latest_Version_Examples\\eom\\rjtipF.m"/* pathName */
};

static emlrtRSInfo o_emlrtRSI = { 93,  /* lineNo */
  "rjtipF",                            /* fcnName */
  "C:\\Users\\customer\\MEGAsync\\Hadi\\TMTDyn\\Code\\TMTDyn_beta\\v5_Latest_Version_Examples\\eom\\rjtipF.m"/* pathName */
};

static emlrtRTEInfo emlrtRTEI = { 13,  /* lineNo */
  9,                                   /* colNo */
  "sqrt",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\elfun\\sqrt.m"/* pName */
};

/* Function Definitions */
void rjtipF(const emlrtStack *sp, const real_T in1[34], const real_T in2[18],
            real_T s, real_T ds, real_T t_sym, real_T out1[30])
{
  emlrtStack st;
  real_T t11;
  real_T t12;
  real_T t13;
  real_T t14;
  real_T t15;
  real_T t16;
  real_T t20;
  real_T t21;
  real_T t22;
  real_T t23;
  real_T t25;
  real_T t3;
  real_T t30;
  real_T t31;
  real_T t34;
  real_T t38;
  real_T t39;
  real_T t4;
  real_T t45;
  real_T t46;
  real_T t48;
  real_T t49;
  real_T t5;
  real_T t53;
  real_T t54;
  real_T t56;
  real_T t6;
  real_T t61;
  real_T t7;
  real_T t8;
  real_T t9;
  (void)ds;
  (void)t_sym;
  st.prev = sp;
  st.tls = sp->tls;

  /* RJTIPF */
  /*     OUT1 = RJTIPF(IN1,IN2,S,DS,T_SYM) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.6. */
  /*     15-Jun-2021 02:09:43 */
  t3 = in1[4] * in1[4];
  t4 = muDoubleScalarPower(in1[4], 3.0);
  t5 = s * s;
  t6 = muDoubleScalarPower(s, 3.0);
  t7 = in1[4] * in2[0] * 2.0;
  t8 = in1[4] * in2[2] * 2.0;
  t9 = in1[4] * in2[4] * 2.0;
  t20 = in1[4] * in2[6] / 2.0;
  t11 = in2[0] * t3;
  t12 = in2[2] * t3;
  t13 = in2[1] * t4;
  t14 = in2[4] * t3;
  t15 = in2[3] * t4;
  t16 = in2[5] * t4;
  t21 = in2[1] * t3 * 3.0;
  t22 = in2[3] * t3 * 3.0;
  t23 = in2[5] * t3 * 3.0;
  t25 = in2[7] * t3 / 2.0;
  t4 = in2[8] * t4 / 2.0;
  t30 = t7 + t21;
  t31 = t8 + t22;
  t34 = (t9 + t23) + 1.0;
  t3 = (t20 + t25) + t4;
  t38 = s * t7 + t5 * t21;
  t39 = s * t8 + t5 * t22;
  t7 = (s * t9 + t5 * t23) + 1.0;
  t45 = muDoubleScalarCos(t3);
  t46 = muDoubleScalarSin(t3);
  t3 = (s * t20 + t5 * t25) + t6 * t4;
  t48 = muDoubleScalarCos(t3);
  t49 = muDoubleScalarSin(t3);
  st.site = &k_emlrtRSI;
  t3 = (t30 * t30 + t31 * t31) + t34 * t34;
  if (t3 < 0.0) {
    emlrtErrorWithMessageIdR2018a(&st, &emlrtRTEI,
      "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3, 4,
      4, "sqrt");
  }

  t21 = 1.0 / muDoubleScalarSqrt(t3);
  st.site = &l_emlrtRSI;
  t3 = (t38 * t38 + t39 * t39) + t7 * t7;
  if (t3 < 0.0) {
    emlrtErrorWithMessageIdR2018a(&st, &emlrtRTEI,
      "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3, 4,
      4, "sqrt");
  }

  t53 = 1.0 / muDoubleScalarSqrt(t3);
  t54 = t34 * t21;
  st.site = &m_emlrtRSI;
  if (t54 + 1.0 < 0.0) {
    emlrtErrorWithMessageIdR2018a(&st, &emlrtRTEI,
      "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3, 4,
      4, "sqrt");
  }

  t56 = muDoubleScalarSqrt(t54 + 1.0);
  t4 = 1.0 / t56;
  st.site = &n_emlrtRSI;
  t3 = t7 * t53 + 1.0;
  if (t3 < 0.0) {
    emlrtErrorWithMessageIdR2018a(&st, &emlrtRTEI,
      "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3, 4,
      4, "sqrt");
  }

  t25 = muDoubleScalarSqrt(t3);
  t20 = 1.4142135623730951 * t45 * t56 / 2.0;
  t34 = 1.4142135623730951 * t46 * t56 / 2.0;
  t61 = 1.0 / t25;
  t3 = 1.4142135623730951 * t31 * t45 * t21 * t4 / 2.0;
  t7 = 1.4142135623730951 * t30 * t46 * t21 * t4 / 2.0;
  t9 = 1.4142135623730951 * t30 * t45 * t21 * t4 / 2.0 + 1.4142135623730951 *
    t31 * t46 * t21 * t4 / 2.0;
  t23 = t7 + -t3;
  t22 = t3 + -t7;
  st.site = &o_emlrtRSI;
  if (in1[33] < 0.0) {
    emlrtErrorWithMessageIdR2018a(&st, &emlrtRTEI,
      "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3, 4,
      4, "sqrt");
  }

  out1[0] = t5 * t11 + t6 * t13;
  t8 = t11 + t13;
  out1[1] = t8;
  out1[2] = t5 * t12 + t6 * t15;
  t21 = t12 + t15;
  out1[3] = t21;
  out1[4] = (in1[4] * s + t5 * t14) + t6 * t16;
  t4 = (in1[4] + t14) + t16;
  out1[5] = t4;
  out1[6] = rtNaN;
  t7 = in1[16] * 1.4142135623730951 * t46 * t56;
  t3 = in1[16] * 1.4142135623730951 * t45 * t56;
  out1[7] = (t8 + t3 * t9) - t7 * t22;
  out1[8] = rtNaN;
  out1[9] = (t21 + t7 * t9) + t3 * t22;
  out1[10] = rtNaN;
  out1[11] = (((t4 - in1[16] * (t9 * t9)) - in1[16] * (t22 * t22)) + in1[16] *
              (t45 * t45) * (t54 + 1.0) / 2.0) + in1[16] * (t46 * t46) * (t54 +
    1.0) / 2.0;
  out1[12] = 1.4142135623730951 * t48 * t25 / 2.0;
  out1[13] = t20;
  out1[14] = 1.4142135623730951 * t38 * t49 * t53 * t61 / 2.0 -
    1.4142135623730951 * t39 * t48 * t53 * t61 / 2.0;
  out1[15] = t23;
  out1[16] = 1.4142135623730951 * t38 * t48 * t53 * t61 / 2.0 +
    1.4142135623730951 * t39 * t49 * t53 * t61 / 2.0;
  out1[17] = t9;
  out1[18] = 1.4142135623730951 * t49 * t25 / 2.0;
  out1[19] = t34;
  out1[20] = rtNaN;
  out1[21] = t20;
  out1[22] = rtNaN;
  out1[23] = t23;
  out1[24] = rtNaN;
  out1[25] = t9;
  out1[26] = rtNaN;
  out1[27] = t34;
  out1[28] = 1.0 / muDoubleScalarSqrt(in1[33]) * in1[3];
  out1[29] = in1[17];
}

/* End of code generation (rjtipF.c) */
