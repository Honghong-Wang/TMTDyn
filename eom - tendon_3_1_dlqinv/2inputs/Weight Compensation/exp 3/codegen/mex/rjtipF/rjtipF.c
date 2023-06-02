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
static emlrtRSInfo i_emlrtRSI = { 115, /* lineNo */
  "rjtipF",                            /* fcnName */
  "C:\\Users\\customer\\MEGAsync\\Hadi\\Friends\\Research\\Tendon Robot - Izad\\Model\\Izad TMTDyn\\eom\\rjtipF.m"/* pathName */
};

static emlrtRSInfo j_emlrtRSI = { 118, /* lineNo */
  "rjtipF",                            /* fcnName */
  "C:\\Users\\customer\\MEGAsync\\Hadi\\Friends\\Research\\Tendon Robot - Izad\\Model\\Izad TMTDyn\\eom\\rjtipF.m"/* pathName */
};

static emlrtRTEInfo emlrtRTEI = { 13,  /* lineNo */
  9,                                   /* colNo */
  "sqrt",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\elfun\\sqrt.m"/* pName */
};

/* Function Definitions */
void rjtipF(const emlrtStack *sp, const real_T in1[33], const real_T in2[38],
            real_T s, real_T ds, real_T t_sym, real_T out1[15])
{
  emlrtStack st;
  real_T t10;
  real_T t22;
  real_T t23;
  real_T t24;
  real_T t26;
  real_T t3;
  real_T t52;
  real_T t61;
  real_T t62;
  real_T t63;
  real_T t64;
  real_T t77;
  real_T t77_tmp;
  real_T t78;
  real_T t8;
  real_T t80;
  real_T t81;
  real_T t9;
  (void)ds;
  (void)t_sym;
  st.prev = sp;
  st.tls = sp->tls;

  /* RJTIPF */
  /*     OUT1 = RJTIPF(IN1,IN2,S,DS,T_SYM) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.6. */
  /*     07-May-2021 20:40:24 */
  t3 = in1[18] + in1[15];
  t8 = in1[16] * 2.0;
  t9 = s * s;
  t10 = muDoubleScalarPower(s, 3.0);
  t22 = s * t3;
  t23 = t3 * t3;
  t24 = muDoubleScalarPower(t3, 3.0);
  t26 = t22 * 2.0;
  t3 = in1[16] + -t22;
  t62 = ((((in2[0] + in1[16] * in2[3]) + in2[1] * t8) + -in2[2]) + in2[1] * t22)
    + -in2[3] * t22;
  t63 = ((((in2[4] + in1[16] * in2[7]) + in2[5] * t8) + -in2[6]) + in2[5] * t22)
    + -in2[7] * t22;
  t64 = ((((in2[8] + in1[16] * in2[11]) + in2[9] * t8) + -in2[10]) + in2[9] *
         t22) + -in2[11] * t22;
  t52 = t3 * t3;
  t61 = 1.0 / (muDoubleScalarExp(in1[16] * 200.0 + -(t22 * 200.0)) + 1.0);
  t77_tmp = t52 * t61;
  t77 = ((in2[12] * t22 / 2.0 + in2[13] * t9 * t23 / 2.0) + in2[14] * t10 * t24 /
         2.0) + -(t77_tmp * (((((in2[13] + in1[16] * in2[16]) + in2[14] * t8) +
    -in2[15]) + in2[14] * t22) + -(in2[16] * t22)) / 2.0);
  t3 = (t8 + -t26) * t61;
  t80 = ((in2[0] * t26 + in2[1] * t9 * t23 * 3.0) + -((in2[1] + -in2[3]) * t52 *
          t61)) + t3 * t62;
  t81 = ((in2[4] * t26 + in2[5] * t9 * t23 * 3.0) + -((in2[5] + -in2[7]) * t52 *
          t61)) + t3 * t63;
  t8 = (((in2[8] * t26 + in2[9] * t9 * t23 * 3.0) + -((in2[9] + -in2[11]) * t52 *
          t61)) + t3 * t64) + 1.0;
  t78 = muDoubleScalarCos(t77);
  t26 = muDoubleScalarSin(t77);
  t3 = (t80 * t80 + t81 * t81) + t8 * t8;
  st.site = &i_emlrtRSI;
  if (t3 < 0.0) {
    emlrtErrorWithMessageIdR2018a(&st, &emlrtRTEI,
      "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3, 4,
      4, "sqrt");
  }

  t3 = muDoubleScalarSqrt(t3);
  t52 = 1.0 / t3;
  t3 = t8 * t52 / 2.0;
  st.site = &j_emlrtRSI;
  if (t3 + 0.5 < 0.0) {
    emlrtErrorWithMessageIdR2018a(&st, &emlrtRTEI,
      "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3, 4,
      4, "sqrt");
  }

  t3 = muDoubleScalarSqrt(t3 + 0.5);
  t8 = 1.0 / t3;
  out1[0] = (in2[0] * t9 * t23 + in2[1] * t10 * t24) - t77_tmp * t62;
  out1[1] = (in2[4] * t9 * t23 + in2[5] * t10 * t24) - t77_tmp * t63;
  out1[2] = ((t22 + in2[8] * t9 * t23) + in2[9] * t10 * t24) - t77_tmp * t64;
  out1[3] = rtNaN;
  out1[4] = rtNaN;
  out1[5] = rtNaN;
  out1[6] = t78 * t3;
  out1[7] = t78 * t81 * t52 * t8 * -0.5 + t26 * t80 * t52 * t8 / 2.0;
  out1[8] = t78 * t80 * t52 * t8 / 2.0 + t26 * t81 * t52 * t8 / 2.0;
  out1[9] = t26 * t3;
  out1[10] = rtNaN;
  out1[11] = rtNaN;
  out1[12] = rtNaN;
  out1[13] = rtNaN;
  out1[14] = in1[7] * t61 - in1[9] * (t61 - 1.0);
}

/* End of code generation (rjtipF.c) */
