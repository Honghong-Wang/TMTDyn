/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * sprdmpF7.c
 *
 * Code generation for function 'sprdmpF7'
 *
 */

/* Include files */
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "EOM_eq.h"
#include "sprdmpF7.h"
#include "error.h"
#include "EOM_eq_data.h"

/* Variable Definitions */
static emlrtRSInfo k_emlrtRSI = { 28,  /* lineNo */
  "sprdmpF7",                          /* fcnName */
  "/home/hadi/Safe/MEGAsync/Hadi/TMTDyn/Code/TMTDyn/Beta/v1.0/Rods/1. STIFF-FLOP/code/sprdmpF7.m"/* pathName */
};

static emlrtRSInfo l_emlrtRSI = { 33,  /* lineNo */
  "sprdmpF7",                          /* fcnName */
  "/home/hadi/Safe/MEGAsync/Hadi/TMTDyn/Code/TMTDyn/Beta/v1.0/Rods/1. STIFF-FLOP/code/sprdmpF7.m"/* pathName */
};

static emlrtRSInfo m_emlrtRSI = { 35,  /* lineNo */
  "sprdmpF7",                          /* fcnName */
  "/home/hadi/Safe/MEGAsync/Hadi/TMTDyn/Code/TMTDyn/Beta/v1.0/Rods/1. STIFF-FLOP/code/sprdmpF7.m"/* pathName */
};

static emlrtRSInfo n_emlrtRSI = { 41,  /* lineNo */
  "sprdmpF7",                          /* fcnName */
  "/home/hadi/Safe/MEGAsync/Hadi/TMTDyn/Code/TMTDyn/Beta/v1.0/Rods/1. STIFF-FLOP/code/sprdmpF7.m"/* pathName */
};

static emlrtRSInfo o_emlrtRSI = { 60,  /* lineNo */
  "sprdmpF7",                          /* fcnName */
  "/home/hadi/Safe/MEGAsync/Hadi/TMTDyn/Code/TMTDyn/Beta/v1.0/Rods/1. STIFF-FLOP/code/sprdmpF7.m"/* pathName */
};

/* Function Definitions */
void b_sprdmpF7(const emlrtStack *sp, const real_T in1[34], const real_T in2[12],
                real_T out2[6], real_T out3[6], real_T out4[6])
{
  real_T t2;
  real_T t4_tmp;
  real_T t6;
  real_T t8;
  real_T t12;
  real_T t13;
  real_T t14;
  real_T t17;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;

  /* SPRDMPF7 */
  /*     [OUT1,OUT2,OUT3,OUT4,OUT5,OUT6,OUT7,OUT8] = SPRDMPF7(IN1,IN2,S) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.2. */
  /*     15-May-2019 14:15:55 */
  t2 = 1.0 / in1[33];
  st.site = &k_emlrtRSI;
  t4_tmp = in1[33] * in1[33];
  t6 = (t2 * 0.000136 + t4_tmp * 1.672238728974578E-7) - 3.7667223872897458E-5;
  t8 = t4_tmp * 0.0044395061728395571;
  st.site = &l_emlrtRSI;
  st.site = &m_emlrtRSI;
  t12 = (t8 - 1.0) * (t8 - 1.0) * 2.36469959048496E-10 - 1.0 / t4_tmp *
    2.4004E-8;
  t13 = t12 * 3.1415926535897931 * 1.025E+6;
  t14 = t4_tmp * 2.7870645482909631E-8;
  st.site = &n_emlrtRSI;
  if (in1[33] < 0.0) {
    b_st.site = &q_emlrtRSI;
    error(&b_st);
  }

  t17 = 1.0 / muDoubleScalarSqrt(in1[33]);
  out2[0] = in2[0] * t2 * t6 * 3.1415926535897931 * -1.366666666666667E+6;
  out2[1] = in2[1] * t2 * t6 * 3.1415926535897931 * -1.366666666666667E+6;
  out2[2] = t2 * t6 * 3.1415926535897931 * (in2[2] - 0.05) * -4.1E+6;
  t8 = t2 * (t4_tmp * 2.7870645482909631E-8 - 6.2778706454829094E-6) *
    3.1415926535897931;
  out2[3] = in2[3] * t2 * (t13 - t8 * 888.67500000000007) * 2.0;
  out2[4] = in2[4] * t2 * (t13 - t8 * 888.675) * 2.0;
  out2[5] = in2[5] * t2 * t12 * 3.1415926535897931 * 1.366666666666667E+6;
  out3[0] = muDoubleScalarAbs(in2[6]) * in2[6] * -100.0;
  out3[1] = muDoubleScalarAbs(in2[7]) * in2[7] * -100.0;
  out3[2] = muDoubleScalarAbs(in2[8]) * in2[8] * -100.0;
  out3[3] = muDoubleScalarAbs(in2[9]) * in2[9] * -0.04;
  out3[4] = muDoubleScalarAbs(in2[10]) * in2[10] * -0.04;
  out3[5] = muDoubleScalarAbs(in2[11]) * in2[11] * -0.04;
  out4[0] = 0.0;
  out4[1] = 0.0;
  out4[2] = -(t14 - 6.2778706454829094E-6) * 3.1415926535897931 * ((in1[21] *
    2.0 + in1[23] * 2.0) + in1[25] * 2.0);
  t4_tmp = in1[21] * (t14 - 6.2778706454829094E-6) * t17 * 3.1415926535897931;
  t6 = in1[23] * (t14 - 6.2778706454829094E-6) * t17 * 3.1415926535897931;
  t8 = in1[25] * (t14 - 6.2778706454829094E-6) * t17 * 3.1415926535897931;
  out4[3] = (t4_tmp * -0.01594117647058824 + t6 * 0.0079705882352941182) + t8 *
    0.0079705882352941147;
  out4[4] = (t4_tmp * 1.3010426069826049E-18 + t6 * 0.01380546378974017) - t8 *
    0.01380546378974017;
  out4[5] = 0.0;
}

void sprdmpF7(const emlrtStack *sp, const real_T in1[34], const real_T in2[12],
              real_T out2[6], real_T out3[6], real_T out4[6], real_T *out5)
{
  real_T t2;
  real_T t4_tmp;
  real_T t6;
  real_T t8;
  real_T t12;
  real_T t13;
  real_T t14;
  real_T t17;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;

  /* SPRDMPF7 */
  /*     [OUT1,OUT2,OUT3,OUT4,OUT5,OUT6,OUT7,OUT8] = SPRDMPF7(IN1,IN2,S) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.2. */
  /*     15-May-2019 14:15:55 */
  t2 = 1.0 / in1[33];
  st.site = &k_emlrtRSI;
  t4_tmp = in1[33] * in1[33];
  t6 = (t2 * 0.000136 + t4_tmp * 1.672238728974578E-7) - 3.7667223872897458E-5;
  t8 = t4_tmp * 0.0044395061728395571;
  st.site = &l_emlrtRSI;
  st.site = &m_emlrtRSI;
  t12 = (t8 - 1.0) * (t8 - 1.0) * 2.36469959048496E-10 - 1.0 / t4_tmp *
    2.4004E-8;
  t13 = t12 * 3.1415926535897931 * 1.025E+6;
  t14 = t4_tmp * 2.7870645482909631E-8;
  st.site = &n_emlrtRSI;
  if (in1[33] < 0.0) {
    b_st.site = &q_emlrtRSI;
    error(&b_st);
  }

  t17 = 1.0 / muDoubleScalarSqrt(in1[33]);
  out2[0] = in2[0] * t2 * t6 * 3.1415926535897931 * -1.366666666666667E+6;
  out2[1] = in2[1] * t2 * t6 * 3.1415926535897931 * -1.366666666666667E+6;
  out2[2] = t2 * t6 * 3.1415926535897931 * (in2[2] - 0.05) * -4.1E+6;
  t8 = t2 * (t4_tmp * 2.7870645482909631E-8 - 6.2778706454829094E-6) *
    3.1415926535897931;
  out2[3] = in2[3] * t2 * (t13 - t8 * 888.67500000000007) * 2.0;
  out2[4] = in2[4] * t2 * (t13 - t8 * 888.675) * 2.0;
  out2[5] = in2[5] * t2 * t12 * 3.1415926535897931 * 1.366666666666667E+6;
  out3[0] = muDoubleScalarAbs(in2[6]) * in2[6] * -100.0;
  out3[1] = muDoubleScalarAbs(in2[7]) * in2[7] * -100.0;
  out3[2] = muDoubleScalarAbs(in2[8]) * in2[8] * -100.0;
  out3[3] = muDoubleScalarAbs(in2[9]) * in2[9] * -0.04;
  out3[4] = muDoubleScalarAbs(in2[10]) * in2[10] * -0.04;
  out3[5] = muDoubleScalarAbs(in2[11]) * in2[11] * -0.04;
  out4[0] = 0.0;
  out4[1] = 0.0;
  out4[2] = -(t14 - 6.2778706454829094E-6) * 3.1415926535897931 * ((in1[21] *
    2.0 + in1[23] * 2.0) + in1[25] * 2.0);
  t4_tmp = in1[21] * (t14 - 6.2778706454829094E-6) * t17 * 3.1415926535897931;
  t6 = in1[23] * (t14 - 6.2778706454829094E-6) * t17 * 3.1415926535897931;
  t8 = in1[25] * (t14 - 6.2778706454829094E-6) * t17 * 3.1415926535897931;
  out4[3] = (t4_tmp * -0.01594117647058824 + t6 * 0.0079705882352941182) + t8 *
    0.0079705882352941147;
  out4[4] = (t4_tmp * 1.3010426069826049E-18 + t6 * 0.01380546378974017) - t8 *
    0.01380546378974017;
  out4[5] = 0.0;
  st.site = &o_emlrtRSI;
  st.site = &o_emlrtRSI;
  st.site = &o_emlrtRSI;
  st.site = &o_emlrtRSI;
  t8 = (in2[0] * in2[0] + in2[1] * in2[1]) + in2[2] * in2[2];
  if (t8 < 0.0) {
    b_st.site = &q_emlrtRSI;
    error(&b_st);
  }

  t8 = muDoubleScalarSqrt(t8);
  *out5 = t8 - 0.05;
}

/* End of code generation (sprdmpF7.c) */