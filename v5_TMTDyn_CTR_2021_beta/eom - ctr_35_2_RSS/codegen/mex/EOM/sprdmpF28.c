/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * sprdmpF28.c
 *
 * Code generation for function 'sprdmpF28'
 *
 */

/* Include files */
#include "sprdmpF28.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"
#include <string.h>

/* Function Definitions */
void sprdmpF28(const real_T in1[60], const real_T in2[48], real_T s, real_T
               out1[144], real_T out2[6], real_T out3[6], real_T out4[6], real_T
               *out6)
{
  real_T t14;
  real_T t15;
  real_T t19;
  real_T t2;
  real_T t25;
  real_T t26;
  real_T t5;
  real_T t7;
  int32_T i;

  /* SPRDMPF28 */
  /*     [OUT1,OUT2,OUT3,OUT4,OUT5,OUT6,OUT7] = SPRDMPF28(IN1,IN2,S,DS,T_SYM) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.6. */
  /*     10-Mar-2021 20:38:37 */
  t2 = in2[20] * s;
  t5 = s * s;
  t7 = in2[19] / 2.0;
  t14 = muDoubleScalarPower(in1[7], 4.0) + -muDoubleScalarPower(in1[8], 4.0);
  t15 = (t2 + t7) + in2[21] * t5 * 1.5;
  t2 = ((in1[49] / 2.0 + s * t7) + s * t2 / 2.0) + in2[21] * muDoubleScalarPower
    (s, 3.0) / 2.0;
  t7 = muDoubleScalarCos(t2);
  t2 = muDoubleScalarSin(t2);
  t19 = t7 * t7;
  t7 = t2 * t2;
  t25 = t19 + t7;
  t26 = s * t19 * 2.0 + s * t7 * 2.0;
  t2 = t5 * t19 * 3.0 + t5 * t7 * 3.0;
  memset(&out1[0], 0, 139U * sizeof(real_T));
  out1[139] = t25;
  out1[140] = t26;
  out1[141] = t2;
  out1[142] = 0.0;
  out1[143] = 0.0;
  out2[0] = 0.0;
  out2[1] = 0.0;
  out2[2] = in1[1] * 3.1415926535897931 * (in1[7] * in1[7] - in1[8] * in1[8]) *
    (t25 - 1.0);
  out2[3] = 0.0;
  out2[4] = 0.0;
  out2[5] = in1[4] * t14 * 3.1415926535897931 * (t15 * t19 * 2.0 + t15 * t7 *
    2.0) / 2.0;
  out3[0] = 0.0;
  out3[1] = 0.0;
  out3[2] = 0.0;
  out3[3] = 0.0;
  out3[4] = 0.0;
  out3[5] = in1[18] * t14 * 3.1415926535897931 * ((t25 * in2[43] + t26 * in2[44])
    + t2 * in2[45]) / 2.0;
  for (i = 0; i < 6; i++) {
    out4[i] = 0.0;
  }

  *out6 = 1.0;
}

/* End of code generation (sprdmpF28.c) */