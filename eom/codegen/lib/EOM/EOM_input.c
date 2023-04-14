/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: EOM_input.c
 *
 * MATLAB Coder version            : 4.2
 * C/C++ source code generated on  : 14-Oct-2020 22:53:18
 */

/* Include Files */
#include <string.h>
#include "EOM.h"
#include "EOM_input.h"

/* Function Definitions */

/*
 * Arguments    : double tspan[3]
 *                double *nz
 *                double z0[64]
 *                struct0_T *par_mex
 * Return Type  : void
 */
void EOM_input(double tspan[3], double *nz, double z0[64], struct0_T *par_mex)
{
  static const double dv0[64] = { 2.0E-6, 2.0E-6, 2.0E-6, 2.0E-6, 2.0E-6, 2.0E-6,
    2.0E-6, 2.0E-6, 2.0E-6, 2.0E-6, 2.0E-6, 2.0E-6, 2.0E-6, 2.0E-6, 2.0E-6,
    2.0E-6, 2.0E-6, 2.0E-6, 2.0E-6, 2.0E-6, 2.0E-6, 2.0E-6, 2.0E-6, 2.0E-6,
    2.0E-6, 2.0E-6, 2.0E-6, 2.0E-6, 2.0E-6, 2.0E-6, 2.0E-6, 2.0E-6, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 };

  static const double t0_pos[224] = { 0.0, 0.5, 1.0, 1.5, 2.0, 3.0, 4.0, 5.0,
    6.0, 7.0, 8.0, 9.0, 10.0, 10.5, 11.0, 12.0, 13.0, 14.0, 14.5, 16.0, 18.0,
    19.0, 20.0, 20.5, 21.0, 23.0, 24.0, 25.0, 25.5, 26.0, 26.5, 27.0, 0.0, 0.004,
    0.0, 0.008, 0.005, 0.016, 0.012, 0.021, 0.018000000000000002,
    0.018000000000000002, 0.026000000000000002, 0.021, 0.031,
    0.026000000000000002, 0.037, 0.032, 0.032, 0.044, 0.039, 0.039, 0.05,
    0.043000000000000003, 0.054, 0.048, 0.049, 0.042, 0.064, 0.058, 0.069, 0.062,
    0.074, 0.066, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.004, 0.012, 0.012, 0.015, 0.015, 0.02, 0.02,
    0.023, 0.023, 0.023, 0.029, 0.029, 0.035, 0.035, 0.039, 0.039, 0.039, 0.045,
    0.045, 0.045, 0.051000000000000004, 0.051000000000000004, 0.055, 0.055, 0.06,
    0.06, 0.065, 0.06, 0.07, 0.064, 0.075, 0.067, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.028071337695236398,
    0.028071337695236398, 0.028071337695236398, 0.028071337695236398,
    0.028071337695236398, 0.028071337695236398, 0.028071337695236398,
    0.028071337695236398, 0.028071337695236398, 0.028071337695236398,
    0.028071337695236398, 0.028071337695236398, 0.028071337695236398,
    0.028071337695236398, 0.028071337695236398, 0.028071337695236398,
    0.028071337695236398, 0.028071337695236398, 0.028071337695236398, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0,
    0.0, 0.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, 0.0 };

  static const double t1_tube2[128] = { 0.0, 0.5, 1.0, 1.5, 2.0, 3.0, 4.0, 5.0,
    6.0, 7.0, 8.0, 9.0, 10.0, 10.5, 11.0, 12.0, 13.0, 14.0, 14.5, 16.0, 18.0,
    19.0, 20.0, 20.5, 21.0, 23.0, 24.0, 25.0, 25.5, 26.0, 26.5, 27.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0067, 0.0067, 0.0067,
    0.0065000000000000006, 0.0065000000000000006, 0.0063, 0.0067, 0.004,
    0.0062000000000000006, 0.006, 0.0, 0.0, 0.0, 0.0, 0.0043, 0.0, 0.005, 0.0,
    0.0, 0.0045000000000000005, 0.0048, 0.0090000000000000011,
    0.0065000000000000006, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.004, 0.012, 0.012, 0.015, 0.015, 0.02, 0.02,
    0.023, 0.023, 0.022, 0.0262, 0.026000000000000002, 0.0315, 0.0315, 0.03725,
    0.0353, 0.034, 0.045, 0.045, 0.041, 0.0485, 0.045, 0.053, 0.049, 0.058,
    0.053, 0.064, 0.06, 0.064, 0.061, 0.067, 0.065 };

  static const double dv1[58] = { 6450.0, 1000.0, 7.6E+10, 1.0E+9, 2.1E+11,
    2.533E+10, 3.3E+8, 7.0E+10, 0.00025, 0.00047, 0.001565, 0.0016, 0.0, 0.0,
    2.533E+9, 2.533E+9, 7.6E+9, 7.6E+9, 7.6E+9, 2.533E+9, 3.3E+7, 3.3E+7, 1.0E+8,
    1.0E+8, 1.0E+8, 3.3E+7, 7.0E+9, 7.0E+9, 2.1E+10, 2.1E+10, 2.1E+10, 7.0E+9,
    1.0, -9.81, 0.0, 0.0, 0.0, 0.0, 0.0, 0.01, 0.015, 0.03, 0.0, 25.0, 0.3, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 };

  tspan[0] = 0.0;
  tspan[1] = 0.01;
  tspan[2] = 25.0;
  memcpy(&z0[0], &dv0[0], sizeof(double) << 6);
  *nz = 64.0;
  par_mex->user_pars.n_t = 3.0;
  memcpy(&par_mex->user_pars.motor_in.pos[0], &t0_pos[0], 224U * sizeof(double));
  memcpy(&par_mex->user_pars.tip_pos.tube2[0], &t1_tube2[0], sizeof(double) << 7);
  memcpy(&par_mex->var[0], &dv1[0], 58U * sizeof(double));
  par_mex->t_equil_i = 0.0;
}

/*
 * File trailer for EOM_input.c
 *
 * [EOF]
 */
