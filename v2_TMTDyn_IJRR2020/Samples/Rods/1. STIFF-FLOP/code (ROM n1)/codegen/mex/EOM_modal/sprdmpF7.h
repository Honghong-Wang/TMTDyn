/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * sprdmpF7.h
 *
 * Code generation for function 'sprdmpF7'
 *
 */

#ifndef SPRDMPF7_H
#define SPRDMPF7_H

/* Include files */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "rtwtypes.h"
#include "EOM_modal_types.h"

/* Function Declarations */
extern void b_sprdmpF7(const emlrtStack *sp, const real_T in1[34], const real_T
  in2[12], real_T s, real_T out1[36], real_T out2[6], real_T out3[6], real_T
  out4[6], real_T out5[3], real_T out6[36], real_T out7[36]);
extern void sprdmpF7(const emlrtStack *sp, const real_T in1[34], const real_T
                     in2[12], real_T s, real_T out1[36], real_T out2[6], real_T
                     out3[6], real_T out4[6], real_T out5[3]);

#endif

/* End of code generation (sprdmpF7.h) */