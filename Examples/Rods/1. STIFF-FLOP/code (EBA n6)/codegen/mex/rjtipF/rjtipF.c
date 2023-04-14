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
#include "rt_nonfinite.h"
#include "rjtipF.h"
#include "error.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 30,    /* lineNo */
  "rjtipF",                            /* fcnName */
  "C:\\Users\\ss17282\\Desktop\\1. STIFF-FLOP\\code\\rjtipF.m"/* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 31,  /* lineNo */
  "rjtipF",                            /* fcnName */
  "C:\\Users\\ss17282\\Desktop\\1. STIFF-FLOP\\code\\rjtipF.m"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 32,  /* lineNo */
  "rjtipF",                            /* fcnName */
  "C:\\Users\\ss17282\\Desktop\\1. STIFF-FLOP\\code\\rjtipF.m"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 34,  /* lineNo */
  "rjtipF",                            /* fcnName */
  "C:\\Users\\ss17282\\Desktop\\1. STIFF-FLOP\\code\\rjtipF.m"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 49,  /* lineNo */
  "power",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017b\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 12,  /* lineNo */
  "sqrt",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017b\\toolbox\\eml\\lib\\matlab\\elfun\\sqrt.m"/* pathName */
};

/* Function Definitions */
void rjtipF(const emlrtStack *sp, const real_T in1[34], const real_T in2[72],
            real_T s, real_T r_jtip[42])
{
  real_T t2;
  real_T t3;
  real_T t4;
  real_T t5;
  real_T b_in2[42];
  int32_T i0;
  int32_T i1;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  (void)s;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;

  /* RJTIPF */
  /*     R_JTIP = RJTIPF(IN1,IN2,S) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.0. */
  /*     30-Jan-2019 18:15:18 */
  st.site = &emlrtRSI;
  b_st.site = &e_emlrtRSI;
  t2 = in2[33] * in2[33];
  st.site = &b_emlrtRSI;
  b_st.site = &e_emlrtRSI;
  t3 = in2[34] * in2[34];
  st.site = &c_emlrtRSI;
  b_st.site = &e_emlrtRSI;
  t4 = in2[35] * in2[35];
  t5 = ((-t2 - t3) - t4) + 1.0;
  st.site = &d_emlrtRSI;
  if (t5 < 0.0) {
    b_st.site = &f_emlrtRSI;
    c_st.site = &f_emlrtRSI;
    error(&c_st);
  }

  t5 = muDoubleScalarSqrt(t5);
  b_in2[0] = in2[0];
  b_in2[1] = in2[6];
  b_in2[2] = in2[12];
  b_in2[3] = in2[18];
  b_in2[4] = in2[24];
  b_in2[5] = in2[30];
  b_in2[6] = in2[30];
  b_in2[7] = in2[1];
  b_in2[8] = in2[7];
  b_in2[9] = in2[13];
  b_in2[10] = in2[19];
  b_in2[11] = in2[25];
  b_in2[12] = in2[31];
  b_in2[13] = in2[31];
  b_in2[14] = in2[2];
  b_in2[15] = in2[8];
  b_in2[16] = in2[14];
  b_in2[17] = in2[20];
  b_in2[18] = in2[26];
  b_in2[19] = in2[32];
  b_in2[20] = in2[32];
  b_in2[21] = in2[0];
  b_in2[22] = in2[6];
  b_in2[23] = in2[12];
  b_in2[24] = in2[18];
  b_in2[25] = in2[24];
  b_in2[26] = in2[30];
  b_in2[27] = (in2[30] + in1[16] * in2[33] * in2[35] * 2.0) + in1[16] * in2[34] *
    t5 * 2.0;
  b_in2[28] = in2[1];
  b_in2[29] = in2[7];
  b_in2[30] = in2[13];
  b_in2[31] = in2[19];
  b_in2[32] = in2[25];
  b_in2[33] = in2[31];
  b_in2[34] = (in2[31] + in1[16] * in2[34] * in2[35] * 2.0) - in1[16] * in2[33] *
    t5 * 2.0;
  b_in2[35] = in2[2];
  b_in2[36] = in2[8];
  b_in2[37] = in2[14];
  b_in2[38] = in2[20];
  b_in2[39] = in2[26];
  b_in2[40] = in2[32];
  b_in2[41] = (((in2[32] - in1[16] * t2) - in1[16] * t3) + in1[16] * t4) - in1
    [16] * (((t2 + t3) + t4) - 1.0);
  for (i0 = 0; i0 < 6; i0++) {
    for (i1 = 0; i1 < 7; i1++) {
      r_jtip[i1 + 7 * i0] = b_in2[i1 + 7 * i0];
    }
  }
}

/* End of code generation (rjtipF.c) */
