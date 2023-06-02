/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: EOM.h
 *
 * MATLAB Coder version            : 5.1
 * C/C++ source code generated on  : 30-Apr-2021 21:54:05
 */

#ifndef EOM_H
#define EOM_H

/* Include Files */
#include "EOM_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>
#ifdef __cplusplus

extern "C" {

#endif

  /* Function Declarations */
  extern void EOM(double t, const double z[34], const struct0_T *par_mex, double
                  dz[34], double *flag);

#ifdef __cplusplus

}
#endif
#endif

/*
 * File trailer for EOM.h
 *
 * [EOF]
 */