/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: EOM.c
 *
 * MATLAB Coder version            : 5.1
 * C/C++ source code generated on  : 08-May-2021 03:51:05
 */

/* Include Files */
#include "EOM.h"
#include "EOM_types.h"
#include "dyn_mid_step.h"
#include "loadsTt1.h"
#include "massT1.h"
#include "pinv.h"
#include "sprdmpKx20.h"
#include "sprdmpTt20.h"
#include "sprdmpTtu20.h"
#include "sprdmpVd20.h"
#include "svd1.h"
#include <math.h>
#include <string.h>

/* Function Definitions */
/*
 * Arguments    : double t
 *                const double z[42]
 *                const struct0_T *par_mex
 *                double dz[42]
 *                double *flag
 * Return Type  : void
 */
void EOM(double t, const double z[42], const struct0_T *par_mex, double dz[42],
         double *flag)
{
  static struct0_T b_par_mex;
  static const signed char iv[18] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 1 };

  double TMT[324];
  double y[324];
  double T[108];
  double TMT_tmp[108];
  double Tt[108];
  double b_w_vd_j_tmp[108];
  double w_vd_j_tmp[108];
  double a[54];
  double b_t3[54];
  double M_tmp[36];
  double Ttu_20[36];
  double dv1[36];
  double TMfd[18];
  double b_TMT_tmp[18];
  double d_eom_q[18];
  double w_sd[18];
  double w_vd_j[18];
  double b_tmp[6];
  double c_par_mex[6];
  double dv[6];
  double U[3];
  double a_tmp_tmp;
  double b_t10_tmp;
  double b_t21;
  double b_t24;
  double b_t25;
  double b_t25_tmp;
  double b_t26;
  double c_t10_tmp;
  double c_t21;
  double c_t25;
  double c_t25_tmp;
  double c_t26;
  double d_t25;
  double d_t26;
  double e_t25;
  double f_t25;
  double t10_tmp;
  double t12;
  double t12_tmp;
  double t2;
  double t21;
  double t22_tmp;
  double t24;
  double t25;
  double t25_tmp;
  double t26;
  double t27;
  double t3;
  double t31;
  double t3_tmp;
  double t53;
  double t5_tmp;
  double t6;
  double t60;
  double t80;
  double t82;
  int i;
  int i1;
  int i2;
  int sn;
  b_par_mex = *par_mex;
  dyn_mid_step(t, z, &b_par_mex);

  /* ROMF */
  /*     [OUT1,OUT2] = ROMF(IN1,IN2,S,DS,T_SYM) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.6. */
  /*     07-May-2021 23:44:57 */
  t80 = -z[17];
  t6 = -z[17];
  t53 = b_par_mex.var[15];

  /* MASSM1 */
  /*     OUT1 = MASSM1(IN1,IN2,S,DS,T_SYM) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.6. */
  /*     07-May-2021 23:45:12 */
  t2 = b_par_mex.var[8] * b_par_mex.var[8];
  t3 = b_par_mex.var[9] * b_par_mex.var[9];
  t31 = -(b_par_mex.var[1] * (t2 + -t3) * 3.1415926535897931);
  t12 = t31 * (t2 / 4.0 + t3 / 4.0);
  M_tmp[0] = t31;
  M_tmp[1] = 0.0;
  M_tmp[2] = 0.0;
  M_tmp[3] = 0.0;
  M_tmp[4] = 0.0;
  M_tmp[5] = 0.0;
  M_tmp[6] = 0.0;
  M_tmp[7] = t31;
  M_tmp[8] = 0.0;
  M_tmp[9] = 0.0;
  M_tmp[10] = 0.0;
  M_tmp[11] = 0.0;
  M_tmp[12] = 0.0;
  M_tmp[13] = 0.0;
  M_tmp[14] = t31;
  M_tmp[15] = 0.0;
  M_tmp[16] = 0.0;
  M_tmp[17] = 0.0;
  M_tmp[18] = 0.0;
  M_tmp[19] = 0.0;
  M_tmp[20] = 0.0;
  M_tmp[21] = t12;
  M_tmp[22] = 0.0;
  M_tmp[23] = 0.0;
  M_tmp[24] = 0.0;
  M_tmp[25] = 0.0;
  M_tmp[26] = 0.0;
  M_tmp[27] = 0.0;
  M_tmp[28] = t12;
  M_tmp[29] = 0.0;
  M_tmp[30] = 0.0;
  M_tmp[31] = 0.0;
  M_tmp[32] = 0.0;
  M_tmp[33] = 0.0;
  M_tmp[34] = 0.0;
  M_tmp[35] = t31 * (t2 / 2.0 + t3 / 2.0);
  t60 = b_par_mex.var[15] - (-z[17]);
  t2 = 1.0E-6 * t60 + -z[17];
  massT1(b_par_mex.var, z, t2, T);

  /* MASSFG1 */
  /*     OUT1 = MASSFG1(IN1,IN2,S,DS,T_SYM) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.6. */
  /*     07-May-2021 23:46:13 */
  for (i = 0; i < 18; i++) {
    for (i1 = 0; i1 < 6; i1++) {
      t26 = 0.0;
      for (i2 = 0; i2 < 6; i2++) {
        t26 += T[i2 + 6 * i] * M_tmp[i2 + 6 * i1];
      }

      Tt[i + 18 * i1] = t26;
    }

    for (i1 = 0; i1 < 18; i1++) {
      t26 = 0.0;
      for (i2 = 0; i2 < 6; i2++) {
        t26 += Tt[i + 18 * i2] * T[i2 + 6 * i1];
      }

      y[i + 18 * i1] = t26;
    }
  }

  c_par_mex[0] = b_par_mex.var[12];
  c_par_mex[1] = b_par_mex.var[13];
  c_par_mex[2] = b_par_mex.var[14];
  c_par_mex[3] = 0.0;
  c_par_mex[4] = 0.0;
  c_par_mex[5] = 0.0;
  for (i = 0; i < 6; i++) {
    b_tmp[i] = c_par_mex[i];
  }

  sprdmpTt20(b_par_mex.var, z, t2, w_vd_j_tmp);
  t3 = 0.999999 * t60 + -z[17];
  massT1(b_par_mex.var, z, t3, T);
  sprdmpTt20(b_par_mex.var, z, t3, b_w_vd_j_tmp);
  for (i = 0; i < 18; i++) {
    for (i1 = 0; i1 < 6; i1++) {
      t26 = 0.0;
      for (i2 = 0; i2 < 6; i2++) {
        t26 += T[i2 + 6 * i] * M_tmp[i2 + 6 * i1];
      }

      TMT_tmp[i + 18 * i1] = t26;
    }

    for (i1 = 0; i1 < 18; i1++) {
      t26 = 0.0;
      for (i2 = 0; i2 < 6; i2++) {
        t26 += TMT_tmp[i + 18 * i2] * T[i2 + 6 * i1];
      }

      TMT[i + 18 * i1] = t26;
    }
  }

  for (i = 0; i < 324; i++) {
    TMT[i] = (y[i] * t60 + TMT[i] * t60) / 2.0;
  }

  sprdmpVd20(b_par_mex.var, z, t2, c_par_mex);
  sprdmpVd20(b_par_mex.var, z, t3, dv);
  for (i = 0; i < 18; i++) {
    t26 = 0.0;
    t82 = 0.0;
    t27 = 0.0;
    t31 = 0.0;
    for (i1 = 0; i1 < 6; i1++) {
      i2 = i + 18 * i1;
      t12 = b_tmp[i1];
      t26 += Tt[i2] * t12;
      t82 += TMT_tmp[i2] * t12;
      t27 += w_vd_j_tmp[i2] * c_par_mex[i1];
      t31 += b_w_vd_j_tmp[i2] * dv[i1];
    }

    TMfd[i] = (t26 * t60 + t82 * t60) / 2.0;
    w_vd_j[i] = (t27 * t60 + t31 * t60) / 2.0;
  }

  sprdmpKx20(b_par_mex.var, z, t2, c_par_mex);
  sprdmpKx20(b_par_mex.var, z, t3, dv);
  for (i = 0; i < 18; i++) {
    t26 = 0.0;
    t82 = 0.0;
    for (i1 = 0; i1 < 6; i1++) {
      i2 = i + 18 * i1;
      t26 += w_vd_j_tmp[i2] * c_par_mex[i1];
      t82 += b_w_vd_j_tmp[i2] * dv[i1];
    }

    w_sd[i] = (t26 * t60 + t82 * t60) / 2.0;
  }

  sprdmpTtu20(b_par_mex.var, z, t2, Ttu_20);
  sprdmpTtu20(b_par_mex.var, z, t3, dv1);
  for (i = 0; i < 36; i++) {
    Ttu_20[i] = (Ttu_20[i] * t60 + dv1[i] * t60) / 2.0;
  }

  for (sn = 0; sn < 9; sn++) {
    t2 = (double)sn * 0.1 + 0.100001;
    massT1(b_par_mex.var, z, t2 * t60 + t80, T);
    for (i = 0; i < 6; i++) {
      for (i1 = 0; i1 < 18; i1++) {
        Tt[i1 + 18 * i] = T[i + 6 * i1];
      }
    }

    for (i = 0; i < 18; i++) {
      for (i1 = 0; i1 < 6; i1++) {
        t26 = 0.0;
        for (i2 = 0; i2 < 6; i2++) {
          t26 += Tt[i + 18 * i2] * M_tmp[i2 + 6 * i1];
        }

        w_vd_j_tmp[i + 18 * i1] = t26;
      }

      for (i1 = 0; i1 < 18; i1++) {
        t26 = 0.0;
        for (i2 = 0; i2 < 6; i2++) {
          t26 += w_vd_j_tmp[i + 18 * i2] * T[i2 + 6 * i1];
        }

        y[i + 18 * i1] = t26;
      }
    }

    for (i = 0; i < 324; i++) {
      TMT[i] += y[i] * t60;
    }

    for (i = 0; i < 18; i++) {
      b_TMT_tmp[i] = 0.0;
      for (i1 = 0; i1 < 6; i1++) {
        t26 = 0.0;
        for (i2 = 0; i2 < 6; i2++) {
          t26 += Tt[i + 18 * i2] * M_tmp[i2 + 6 * i1];
        }

        b_TMT_tmp[i] += t26 * b_tmp[i1];
      }

      TMfd[i] += b_TMT_tmp[i] * t60;
    }

    t2 = t2 * (t53 - t6) + t6;
    sprdmpTt20(b_par_mex.var, z, t2, Tt);
    sprdmpVd20(b_par_mex.var, z, t2, c_par_mex);
    for (i = 0; i < 18; i++) {
      t26 = 0.0;
      for (i1 = 0; i1 < 6; i1++) {
        t26 += Tt[i + 18 * i1] * c_par_mex[i1];
      }

      w_vd_j[i] += t26 * t60;
    }

    sprdmpKx20(b_par_mex.var, z, t2, c_par_mex);
    for (i = 0; i < 18; i++) {
      t26 = 0.0;
      for (i1 = 0; i1 < 6; i1++) {
        t26 += Tt[i + 18 * i1] * c_par_mex[i1];
      }

      w_sd[i] += t26 * t60;
    }

    sprdmpTtu20(b_par_mex.var, z, t2, dv1);
    for (i = 0; i < 36; i++) {
      Ttu_20[i] += dv1[i] * t60;
    }
  }

  for (i = 0; i < 324; i++) {
    TMT[i] /= 10.0;
  }

  /* CNSTT1 */
  /*     OUT1 = CNSTT1(IN1,IN2,S,DS,T_SYM) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.6. */
  /*     08-May-2021 00:17:17 */
  t3_tmp = b_par_mex.var[15] + z[17];
  t5_tmp = b_par_mex.var[16] * 2.0;
  t10_tmp = z[1] * t3_tmp;
  a_tmp_tmp = b_par_mex.var[16] - t3_tmp;
  t22_tmp = exp(t3_tmp * -200.0 + b_par_mex.var[16] * 200.0);
  t25_tmp = ((z[0] + b_par_mex.var[16] * z[3]) + z[1] * t5_tmp) + -z[2];
  b_t26 = -(z[3] * t3_tmp);
  t25 = (t25_tmp + t10_tmp) + b_t26;
  t24 = 1.0 / (t22_tmp + 1.0);
  c_t26 = a_tmp_tmp * a_tmp_tmp * t24;

  /*  if "in" is accelerations */
  /*  if "in" is equivalent sping-damper (PD) force */
  /* CNSTT2 */
  /*     OUT1 = CNSTT2(IN1,IN2,S,DS,T_SYM) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.6. */
  /*     08-May-2021 00:17:17 */
  b_t10_tmp = z[5] * t3_tmp;
  b_t25_tmp = ((z[4] + b_par_mex.var[16] * z[7]) + z[5] * t5_tmp) + -z[6];
  c_t25_tmp = -(z[7] * t3_tmp);
  b_t25 = (b_t25_tmp + b_t10_tmp) + c_t25_tmp;
  b_t24 = 1.0 / (t22_tmp + 1.0);
  d_t26 = a_tmp_tmp * a_tmp_tmp * b_t24;

  /*  if "in" is accelerations */
  /*  if "in" is equivalent sping-damper (PD) force */
  /*  if "in" is accelerations */
  /*  if "in" is equivalent sping-damper (PD) force */
  /*  weight_compensation_&_attractor_field_controller */
  /* LOADSFTAU1 */
  /*     OUT1 = LOADSFTAU1(IN1,IN2,S,DS,T_SYM) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.6. */
  /*     08-May-2021 00:18:17 */
  t6 = b_par_mex.var[17] + z[17];
  t12 = z[1] * t6;
  c_t25 = z[5] * t6;
  t27 = z[9] * t6;
  t3 = z[14] * t6;
  t31 = t6 * t6;
  t2 = b_par_mex.var[16] - t6;
  t53 = t2 * t2;
  t60 = 1.0 / (exp(t6 * -200.0 + b_par_mex.var[16] * 200.0) + 1.0);
  t3 = ((z[12] * t6 / 2.0 + z[13] * t31 / 2.0) + t3 * t31 / 2.0) + -(t53 * t60 *
    (((((z[13] + b_par_mex.var[16] * z[16]) + z[14] * t5_tmp) + -z[15]) + t3) +
     -(z[16] * t6)) / 2.0);
  t2 = (t6 * 2.0 + -t5_tmp) * t60;
  t82 = ((z[0] * t6 * 2.0 + t6 * t12 * 3.0) + -((z[1] + -z[3]) * t53 * t60)) +
    -(t2 * ((t25_tmp + t12) + t6 * -z[3]));
  t31 = ((z[4] * t6 * 2.0 + t6 * c_t25 * 3.0) + -((z[5] + -z[7]) * t53 * t60)) +
    -(t2 * ((b_t25_tmp + c_t25) + t6 * -z[7]));
  d_t25 = ((z[8] + b_par_mex.var[16] * z[11]) + z[9] * t5_tmp) + -z[10];
  t2 = (((z[8] * t6 * 2.0 + t6 * t27 * 3.0) + -((z[9] + -z[11]) * t53 * t60)) +
        -(t2 * ((d_t25 + t27) + t6 * -z[11]))) + 1.0;
  t80 = cos(t3);
  t12 = sin(t3);
  t3 = 1.0 / sqrt((t82 * t82 + t31 * t31) + t2 * t2);
  t6 = sqrt(t2 * t3 / 2.0 + 0.5);
  t2 = 1.0 / t6;
  t27 = t80 * t82 * t3 * t2 / 2.0 + t12 * t31 * t3 * t2 / 2.0;
  t31 = t80 * t31 * t3 * t2 / 2.0 + -(t12 * t82 * t3 * t2 / 2.0);
  t53 = t12 * t6;
  t2 = t80 * t6;
  t3 = (t2 * b_par_mex.var[24] + t53 * b_par_mex.var[25]) + -(t27 *
    b_par_mex.var[26]);
  t12 = (t53 * b_par_mex.var[24] + -(t2 * b_par_mex.var[25])) + t31 *
    b_par_mex.var[26];
  t60 = (t2 * b_par_mex.var[26] + t27 * b_par_mex.var[24]) + t31 *
    b_par_mex.var[25];
  t80 = (t53 * b_par_mex.var[26] + t27 * b_par_mex.var[25]) + -(t31 *
    b_par_mex.var[24]);
  loadsTt1(b_par_mex.var, z, Tt);
  c_par_mex[0] = b_par_mex.var[21];
  c_par_mex[1] = b_par_mex.var[22];
  c_par_mex[2] = b_par_mex.var[23];
  c_par_mex[3] = ((-t27 * t60 - t31 * t80) + t2 * t3) - t53 * t12;
  c_par_mex[4] = ((t27 * t80 - t31 * t60) - t2 * t12) - t53 * t3;
  c_par_mex[5] = ((t27 * t3 - t31 * t12) + t2 * t60) + t53 * t80;
  for (i = 0; i < 18; i++) {
    t26 = TMfd[i] / 10.0;
    TMfd[i] = t26;
    t82 = w_sd[i] / 10.0;
    w_vd_j[i] /= 10.0;
    w_sd[i] = t82;
    t27 = 0.0;
    for (i1 = 0; i1 < 6; i1++) {
      t27 += Tt[i + 18 * i1] * c_par_mex[i1];
    }

    d_eom_q[i] = (t26 + t82) + t27;
    b_t3[i] = iv[i];
  }

  for (i = 0; i < 2; i++) {
    for (i1 = 0; i1 < 18; i1++) {
      b_t3[i1 + 18 * (i + 1)] = Ttu_20[i1 + 18 * i] / 10.0;
    }
  }

  pinv(b_t3, a);

  /* CNSTT3 */
  /*     OUT1 = CNSTT3(IN1,IN2,S,DS,T_SYM) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.6. */
  /*     08-May-2021 00:17:17 */
  c_t10_tmp = z[9] * t3_tmp;
  t2 = -(z[11] * t3_tmp);
  c_t25 = (d_t25 + c_t10_tmp) + t2;
  t3 = 1.0 / (t22_tmp + 1.0);
  t12 = a_tmp_tmp * a_tmp_tmp * t3;

  /* CNSTIN1 */
  /*     OUT1 = CNSTIN1(IN1,IN2,S,DS,T_SYM) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.6. */
  /*     08-May-2021 00:17:19 */
  t12_tmp = t3_tmp * t3_tmp;
  t21 = a_tmp_tmp * a_tmp_tmp;
  t26 = (t25_tmp + t10_tmp) + b_t26;
  e_t25 = 1.0 / (t22_tmp + 1.0);

  /* CNSTIN2 */
  /*     OUT1 = CNSTIN2(IN1,IN2,S,DS,T_SYM) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.6. */
  /*     08-May-2021 00:17:19 */
  b_t21 = a_tmp_tmp * a_tmp_tmp;
  t82 = (b_t25_tmp + b_t10_tmp) + c_t25_tmp;
  f_t25 = 1.0 / (t22_tmp + 1.0);

  /* CNSTIN3 */
  /*     OUT1 = CNSTIN3(IN1,IN2,S,DS,T_SYM) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.6. */
  /*     08-May-2021 00:17:19 */
  c_t21 = a_tmp_tmp * a_tmp_tmp;
  b_t26 = (d_t25 + c_t10_tmp) + t2;
  d_t25 = 1.0 / (t22_tmp + 1.0);
  b_t3[0] = -t12_tmp + c_t26;
  b_t25_tmp = t3_tmp + t5_tmp;
  c_t25_tmp = pow(t3_tmp, 3.0);
  b_t3[1] = c_t26 * b_t25_tmp - c_t25_tmp;
  b_t3[2] = -c_t26;
  b_t3[3] = t24 * pow(a_tmp_tmp, 3.0);
  memset(&b_t3[4], 0, 13U * sizeof(double));
  t27 = z[1] - z[3];
  t25_tmp = t3_tmp * 2.0 - t5_tmp;
  t6 = z[0] * t3_tmp * -2.0;
  b_t3[17] = (((t6 - t3_tmp * t10_tmp * 3.0) + c_t26 * t27) + t24 * t25 *
              t25_tmp) + t22_tmp * t24 * t25 * c_t26 * 200.0;
  b_t3[18] = 0.0;
  b_t3[19] = 0.0;
  b_t3[20] = 0.0;
  b_t3[21] = 0.0;
  b_t3[22] = -(t3_tmp * t3_tmp) + d_t26;
  b_t3[23] = d_t26 * b_t25_tmp - c_t25_tmp;
  b_t3[24] = -d_t26;
  b_t3[25] = b_t24 * pow(a_tmp_tmp, 3.0);
  memset(&b_t3[26], 0, 9U * sizeof(double));
  t60 = z[5] - z[7];
  t80 = z[4] * t3_tmp * -2.0;
  b_t3[35] = (((t80 - t3_tmp * b_t10_tmp * 3.0) + d_t26 * t60) + b_t24 * b_t25 *
              t25_tmp) + t22_tmp * b_t24 * b_t25 * d_t26 * 200.0;
  memset(&b_t3[36], 0, 8U * sizeof(double));
  b_t3[44] = -(t3_tmp * t3_tmp) + t12;
  b_t3[45] = t12 * b_t25_tmp - c_t25_tmp;
  b_t3[46] = -t12;
  b_t3[47] = t3 * pow(a_tmp_tmp, 3.0);
  b_t3[48] = 0.0;
  b_t3[49] = 0.0;
  b_t3[50] = 0.0;
  b_t3[51] = 0.0;
  b_t3[52] = 0.0;
  t31 = z[9] - z[11];
  t53 = z[8] * t3_tmp;
  b_t3[53] = ((((t53 * -2.0 - t3_tmp * c_t10_tmp * 3.0) + t12 * t31) + t3 *
               c_t25 * t25_tmp) + t22_tmp * t3 * c_t25 * t12 * 200.0) - 1.0;
  t2 = t21 * e_t25;
  t3 = b_t21 * f_t25;
  t12 = c_t21 * d_t25;
  t26 = (-b_par_mex.var[27] + b_par_mex.var[30] * ((z[0] * t12_tmp + t10_tmp *
           t12_tmp) - t2 * t26)) + b_par_mex.var[32] * ((((z[22] * (c_t25_tmp -
    t2 * b_t25_tmp) - z[38] * ((((t6 - t3_tmp * t10_tmp * 3.0) + e_t25 * t26 *
    t25_tmp) + t2 * t27) + t21 * t22_tmp * (e_t25 * e_t25) * t26 * 200.0)) + z
    [21] * (t12_tmp - t2)) - e_t25 * z[24] * pow(a_tmp_tmp, 3.0)) + t2 * z[23]);
  t82 = (-b_par_mex.var[28] + b_par_mex.var[30] * ((z[4] * t12_tmp + b_t10_tmp *
           t12_tmp) - t3 * t82)) + b_par_mex.var[32] * ((((z[26] * (c_t25_tmp -
    t3 * b_t25_tmp) - z[38] * ((((t80 - t3_tmp * b_t10_tmp * 3.0) + f_t25 * t82 *
    t25_tmp) + t3 * t60) + b_t21 * t22_tmp * (f_t25 * f_t25) * t82 * 200.0)) +
    z[25] * (t12_tmp - t3)) - f_t25 * z[28] * pow(a_tmp_tmp, 3.0)) + t3 * z[27]);
  t27 = (-b_par_mex.var[29] + b_par_mex.var[32] * ((((z[30] * (c_t25_tmp - t12 *
              b_t25_tmp) + z[38] * (((((t53 * 2.0 + t3_tmp * c_t10_tmp * 3.0) -
    d_t25 * b_t26 * t25_tmp) - t12 * t31) - c_t21 * t22_tmp * (d_t25 * d_t25) *
    b_t26 * 200.0) + 1.0)) + z[29] * (t12_tmp - t12)) - d_t25 * z[32] * pow
           (a_tmp_tmp, 3.0)) + t12 * z[31])) + b_par_mex.var[30] * (((t3_tmp +
    z[8] * t12_tmp) + c_t10_tmp * t12_tmp) - t12 * b_t26);
  for (i = 0; i < 18; i++) {
    b_TMT_tmp[i] = ((b_t3[i] * t26 + b_t3[i + 18] * t82) + b_t3[i + 36] * t27) -
      d_eom_q[i];
  }

  for (i = 0; i < 3; i++) {
    t26 = 0.0;
    for (i1 = 0; i1 < 18; i1++) {
      t26 += a[i + 3 * i1] * b_TMT_tmp[i1];
    }

    U[i] = t26;
  }

  b_pinv(TMT, 1.0E-24, y);
  c_svd(TMT, TMfd);
  for (i = 0; i < 18; i++) {
    b_t3[i] = iv[i];
  }

  for (i = 0; i < 2; i++) {
    for (i1 = 0; i1 < 18; i1++) {
      b_t3[i1 + 18 * (i + 1)] = Ttu_20[i1 + 18 * i] / 10.0;
    }
  }

  for (i = 0; i < 18; i++) {
    t26 = 0.0;
    for (i1 = 0; i1 < 18; i1++) {
      t26 += TMT[i + 18 * i1] * z[i1 + 21];
    }

    w_sd[i] = ((d_eom_q[i] + w_vd_j[i]) + ((b_t3[i] * U[0] + b_t3[i + 18] * U[1])
                + b_t3[i + 36] * U[2])) - 1.0E-16 / TMfd[i] * t26;
  }

  for (i = 0; i < 18; i++) {
    t26 = 0.0;
    for (i1 = 0; i1 < 18; i1++) {
      t26 += y[i + 18 * i1] * w_sd[i1];
    }

    b_TMT_tmp[i] = t26;
  }

  memcpy(&dz[0], &z[21], 21U * sizeof(double));
  memcpy(&dz[21], &b_TMT_tmp[0], 18U * sizeof(double));
  dz[39] = U[0];
  dz[40] = U[1];
  dz[41] = U[2];
  *flag = 0.0;
}

/*
 * File trailer for EOM.c
 *
 * [EOF]
 */