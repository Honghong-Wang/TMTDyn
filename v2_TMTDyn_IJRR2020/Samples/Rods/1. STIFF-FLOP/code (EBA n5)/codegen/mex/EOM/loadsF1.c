/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * loadsF1.c
 *
 * Code generation for function 'loadsF1'
 *
 */

/* Include files */
#include <string.h>
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "EOM.h"
#include "loadsF1.h"
#include "error.h"
#include "EOM_data.h"

/* Variable Definitions */
static emlrtRSInfo ck_emlrtRSI = { 18, /* lineNo */
  "loadsF1",                           /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/code/loadsF1.m"/* pathName */
};

static emlrtRSInfo dk_emlrtRSI = { 19, /* lineNo */
  "loadsF1",                           /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/code/loadsF1.m"/* pathName */
};

static emlrtRSInfo ek_emlrtRSI = { 20, /* lineNo */
  "loadsF1",                           /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/code/loadsF1.m"/* pathName */
};

static emlrtRSInfo fk_emlrtRSI = { 22, /* lineNo */
  "loadsF1",                           /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/code/loadsF1.m"/* pathName */
};

static emlrtRSInfo gk_emlrtRSI = { 23, /* lineNo */
  "loadsF1",                           /* fcnName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/code/loadsF1.m"/* pathName */
};

/* Function Definitions */
void loadsF1(const emlrtStack *sp, const real_T in1[34], const real_T in2[60],
             real_T out1[180], real_T out2[6])
{
  real_T t2;
  real_T t3;
  real_T t4;
  real_T t5;
  real_T t6_tmp;
  real_T t8;
  real_T t9;
  real_T t10;
  real_T t11;
  real_T t12;
  real_T t13;
  real_T out1_tmp;
  real_T b_out1_tmp;
  real_T c_out1_tmp;
  real_T d_out1_tmp;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;

  /* LOADSF1 */
  /*     [OUT1,OUT2] = LOADSF1(IN1,IN2,S) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.2. */
  /*     06-Jan-2019 19:57:16 */
  st.site = &ck_emlrtRSI;
  t2 = in2[27] * in2[27];
  st.site = &dk_emlrtRSI;
  t3 = in2[28] * in2[28];
  st.site = &ek_emlrtRSI;
  t4 = in2[29] * in2[29];
  t5 = ((-t2 - t3) - t4) + 1.0;
  st.site = &fk_emlrtRSI;
  if (t5 < 0.0) {
    b_st.site = &pb_emlrtRSI;
    error(&b_st);
  }

  t6_tmp = muDoubleScalarSqrt(t5);
  t5 = 1.0 / t6_tmp;
  st.site = &gk_emlrtRSI;
  t8 = in1[16] * in2[29] * 2.0;
  t9 = in2[27] * in2[28] * t5 * 2.0;
  t10 = t6_tmp * 2.0;
  t11 = in2[28] * 2.0;
  t12 = in2[27] * in2[29] * t5 * 2.0;
  t13 = in2[28] * in2[29] * t5 * 2.0;
  memset(&out1[0], 0, 24U * sizeof(real_T));
  out1[24] = 1.0;
  out1[25] = 0.0;
  out1[26] = 0.0;
  out1_tmp = in1[16] * in2[27];
  b_out1_tmp = out1_tmp * in2[28] * t5 * 2.0;
  out1[27] = t8 - b_out1_tmp;
  c_out1_tmp = in1[16] * t6_tmp;
  out1[28] = c_out1_tmp * 2.0 - in1[16] * t3 * t5 * 2.0;
  d_out1_tmp = in1[16] * in2[28];
  out1[29] = out1_tmp * 2.0 - d_out1_tmp * in2[29] * t5 * 2.0;
  memset(&out1[30], 0, 25U * sizeof(real_T));
  out1[55] = 1.0;
  out1[56] = 0.0;
  out1[57] = c_out1_tmp * -2.0 + in1[16] * t2 * t5 * 2.0;
  out1[58] = t8 + b_out1_tmp;
  out1[59] = d_out1_tmp * 2.0 + out1_tmp * in2[29] * t5 * 2.0;
  memset(&out1[60], 0, 26U * sizeof(real_T));
  out1[86] = 1.0;
  out1[87] = out1_tmp * -4.0;
  out1[88] = d_out1_tmp * -4.0;
  memset(&out1[89], 0, 28U * sizeof(real_T));
  out1[117] = t10 + t2 * t5 * 2.0;
  out1[118] = in2[29] * 2.0 + t9;
  out1[119] = -t11 + t12;
  memset(&out1[120], 0, 27U * sizeof(real_T));
  out1[147] = in2[29] * -2.0 + t9;
  out1[148] = t10 + t3 * t5 * 2.0;
  out1[149] = in2[27] * 2.0 + t13;
  memset(&out1[150], 0, 27U * sizeof(real_T));
  out1[177] = t11 + t12;
  out1[178] = in2[27] * -2.0 + t13;
  out1[179] = t10 + t4 * t5 * 2.0;
  t5 = (t6_tmp * in1[31] + in2[27] * in1[32]) - in2[29] * in1[30];
  t8 = (t6_tmp * in1[32] + in2[28] * in1[30]) - in2[27] * in1[31];
  t9 = (t6_tmp * in1[30] + in2[29] * in1[31]) - in2[28] * in1[32];
  t10 = (in2[27] * in1[30] + in2[28] * in1[31]) + in2[29] * in1[32];
  out2[0] = in1[27];
  out2[1] = in1[28];
  out2[2] = in1[29];
  out2[3] = ((in2[29] * t5 - in2[28] * t8) + in2[27] * t10) + t6_tmp * t9;
  out2[4] = ((in2[27] * t8 - in2[29] * t9) + in2[28] * t10) + t6_tmp * t5;
  out2[5] = ((-in2[27] * t5 + in2[28] * t9) + in2[29] * t10) + t6_tmp * t8;
}

/* End of code generation (loadsF1.c) */