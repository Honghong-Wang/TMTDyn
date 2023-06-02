/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: EOM.c
 *
 * MATLAB Coder version            : 5.1
 * C/C++ source code generated on  : 07-May-2021 20:42:12
 */

/* Include Files */
#include "EOM.h"
#include "EOM_types.h"
#include "interp1.h"
#include "loadsTt1.h"
#include "massT1.h"
#include "pinv.h"
#include "sprdmpKx19.h"
#include "sprdmpTt19.h"
#include "sprdmpTtu19.h"
#include "sprdmpVd19.h"
#include <math.h>
#include <string.h>

/* Function Definitions */
/*
 * Arguments    : double t
 *                const double z[38]
 *                const struct0_T *par_mex
 *                double dz[38]
 *                double *flag
 * Return Type  : void
 */
void EOM(double t, const double z[38], const struct0_T *par_mex, double dz[38],
         double *flag)
{
  double TMT[289];
  double y[289];
  double T[102];
  double TMT_tmp[102];
  double Tt[102];
  double b_w_vd_j_tmp[102];
  double w_vd_j_tmp[102];
  double d_t15[51];
  double M_tmp[36];
  double Ttu_19[34];
  double a[34];
  double b_Ttu_19[34];
  double par_mex_var[33];
  double TMfd[17];
  double b_TMT_tmp[17];
  double d_eom_q[17];
  double w_sd[17];
  double w_vd_j[17];
  double b_par_mex_var[6];
  double b_tmp[6];
  double dv2[6];
  double dv[3];
  double dv1[3];
  double U[2];
  double a_tmp_tmp;
  double b_t15;
  double c_t15;
  double t12;
  double t14_tmp;
  double t15;
  double t2;
  double t23;
  double t25;
  double t27;
  double t29;
  double t2_tmp;
  double t3;
  double t53;
  double t60;
  double t82;
  double t82_tmp;
  double t83_tmp;
  double t84_tmp;
  double t9;
  int i;
  int i1;
  int i2;
  int sn;

  /*  tendon dicplacements */
  /*  q_u = interp1(par_mex.user_pars.motor_in.pos(:,1), par_mex.user_pars.motor_in.pos(:,2:end), t, 'linear', 0) ; */
  memcpy(&par_mex_var[0], &par_mex->var[0], 33U * sizeof(double));

  /*  curvature inputs */
  /*  d_ow = par_mex.var(9) + par_mex.var(10) ; % wire offsets diameter: 2*(r_s21+r_s22)/2 */
  /*  l_s2 = par_mex.var(28); */
  /*  l_w = q_u(1:4) + l_s2;  */
  /*  % % 3 tendons */
  /*  % kappa = 2*sqrt(l(1)^2+l(2)^2+l(3)^2-l(1)*l(2)-l(1)*l(3)-l(2)*l(3))/(d*(l(1)+l(2)+l(3))); */
  /*  % phi = atan2(sqrt(3)*(l(2)+l(3)-2*l(1)),(3*(l(2)-l(3)))); */
  /*  % 4 tendons */
  /*  l_b = ( l_w(1) + l_w(2) + l_w(3) + l_w(4) ) / 4; */
  /*  phi = atan2(l_w(2)-l_b,l_w(1)-l_b); */
  /*  kappa = ( l_b - l_w(1) ) / ( l_b * d_ow/2 * cos(phi) ) ; */
  /*  % model inputs */
  /*  kappa_x = kappa * sin( phi ); */
  /*  kappa_y = kappa * cos( phi ); */
  /*   */
  /*  par_mex.U = [ kappa_x kappa_y ] ; */
  /*  inner (introducer) tube lengths */
  /*  dl = q_u(5); */
  /*  tip positions */
  /*  tip pos. desired position */
  interp1(*(double (*)[1707])&par_mex->user_pars.tip_pos.tube1[0], *(double (*)
           [5121])&par_mex->user_pars.tip_pos.tube1[1707], t, dv);
  interp1(*(double (*)[1707])&par_mex->user_pars.tip_pos.tube1_vel[0], *(double
           (*)[5121])&par_mex->user_pars.tip_pos.tube1_vel[1707], t, dv1);
  par_mex_var[27] = par_mex_var[30] * dv[0] + par_mex_var[32] * dv1[0];
  par_mex_var[28] = par_mex_var[30] * dv[1] + par_mex_var[32] * dv1[1];
  par_mex_var[29] = par_mex_var[30] * dv[2] + par_mex_var[32] * dv1[2];

  /*  PD controller */
  /*  update par */
  /*  vars = [ sigma_s1_sym sigma_s2_sym E_s1_sym E_s2_sym G_s1_sym G_s2_sym ... */
  /*      r_s11_sym r_s12_sym r_s21_sym r_s22_sym ... */
  /*      mu_x1_sym mu_y1_sym mu_z1_sym mu_xx1_sym mu_yy1_sym mu_zz1_sym ... */
  /*      mu_x2_sym mu_y2_sym mu_z2_sym mu_xx2_sym mu_yy2_sym mu_zz2_sym ... */
  /*      mu_pow_sym g_xsym g_ysym g_zsym ... */
  /*      l_s1_sym l_s2_sym dl_sym kappa_x_sym kappa_y_sym ... */
  /*      f_tx_sym f_ty_sym f_tz_sym tau_tx_sym tau_ty_sym tau_tz_sym ... */
  /*      haptic_x_sym haptic_y_sym haptic_z_sym P_sym I_sym D_sym ] ; */
  /*  par_mex.var(end-11:end-9) = [ dl kappa_x kappa_y ] ; */
  /* ROMF */
  /*     [OUT1,OUT2] = ROMF(IN1,IN2,S,DS,T_SYM) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.6. */
  /*     07-May-2021 20:10:30 */
  U[0] = -par_mex_var[18];
  t23 = -par_mex_var[18];
  t9 = par_mex_var[15];

  /* MASSM1 */
  /*     OUT1 = MASSM1(IN1,IN2,S,DS,T_SYM) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.6. */
  /*     07-May-2021 20:10:43 */
  t2 = par_mex_var[8] * par_mex_var[8];
  t3 = par_mex_var[9] * par_mex_var[9];
  t29 = -(par_mex_var[1] * (t2 + -t3) * 3.1415926535897931);
  t12 = t29 * (t2 / 4.0 + t3 / 4.0);
  M_tmp[0] = t29;
  M_tmp[1] = 0.0;
  M_tmp[2] = 0.0;
  M_tmp[3] = 0.0;
  M_tmp[4] = 0.0;
  M_tmp[5] = 0.0;
  M_tmp[6] = 0.0;
  M_tmp[7] = t29;
  M_tmp[8] = 0.0;
  M_tmp[9] = 0.0;
  M_tmp[10] = 0.0;
  M_tmp[11] = 0.0;
  M_tmp[12] = 0.0;
  M_tmp[13] = 0.0;
  M_tmp[14] = t29;
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
  M_tmp[35] = t29 * (t2 / 2.0 + t3 / 2.0);
  t2 = par_mex_var[15] - (-par_mex_var[18]);
  t3 = 1.0E-6 * t2 + -par_mex_var[18];
  massT1(par_mex_var, z, t3, T);

  /* MASSFG1 */
  /*     OUT1 = MASSFG1(IN1,IN2,S,DS,T_SYM) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.6. */
  /*     07-May-2021 20:11:28 */
  for (i = 0; i < 17; i++) {
    for (i1 = 0; i1 < 6; i1++) {
      t27 = 0.0;
      for (i2 = 0; i2 < 6; i2++) {
        t27 += T[i2 + 6 * i] * M_tmp[i2 + 6 * i1];
      }

      Tt[i + 17 * i1] = t27;
    }

    for (i1 = 0; i1 < 17; i1++) {
      t27 = 0.0;
      for (i2 = 0; i2 < 6; i2++) {
        t27 += Tt[i + 17 * i2] * T[i2 + 6 * i1];
      }

      y[i + 17 * i1] = t27;
    }
  }

  b_par_mex_var[0] = par_mex_var[12];
  b_par_mex_var[1] = par_mex_var[13];
  b_par_mex_var[2] = par_mex_var[14];
  b_par_mex_var[3] = 0.0;
  b_par_mex_var[4] = 0.0;
  b_par_mex_var[5] = 0.0;
  for (i = 0; i < 6; i++) {
    b_tmp[i] = b_par_mex_var[i];
  }

  sprdmpTt19(par_mex_var, z, t3, w_vd_j_tmp);
  t29 = 0.999999 * t2 + -par_mex_var[18];
  massT1(par_mex_var, z, t29, T);
  sprdmpTt19(par_mex_var, z, t29, b_w_vd_j_tmp);
  for (i = 0; i < 17; i++) {
    for (i1 = 0; i1 < 6; i1++) {
      t27 = 0.0;
      for (i2 = 0; i2 < 6; i2++) {
        t27 += T[i2 + 6 * i] * M_tmp[i2 + 6 * i1];
      }

      TMT_tmp[i + 17 * i1] = t27;
    }

    for (i1 = 0; i1 < 17; i1++) {
      t27 = 0.0;
      for (i2 = 0; i2 < 6; i2++) {
        t27 += TMT_tmp[i + 17 * i2] * T[i2 + 6 * i1];
      }

      TMT[i + 17 * i1] = t27;
    }
  }

  for (i = 0; i < 289; i++) {
    TMT[i] = (y[i] * t2 + TMT[i] * t2) / 2.0;
  }

  sprdmpVd19(par_mex_var, z, t3, b_par_mex_var);
  sprdmpVd19(par_mex_var, z, t29, dv2);
  for (i = 0; i < 17; i++) {
    t27 = 0.0;
    t53 = 0.0;
    t60 = 0.0;
    t12 = 0.0;
    for (i1 = 0; i1 < 6; i1++) {
      i2 = i + 17 * i1;
      t25 = b_tmp[i1];
      t27 += Tt[i2] * t25;
      t53 += TMT_tmp[i2] * t25;
      t60 += w_vd_j_tmp[i2] * b_par_mex_var[i1];
      t12 += b_w_vd_j_tmp[i2] * dv2[i1];
    }

    TMfd[i] = (t27 * t2 + t53 * t2) / 2.0;
    w_vd_j[i] = (t60 * t2 + t12 * t2) / 2.0;
  }

  sprdmpKx19(par_mex_var, z, t3, b_par_mex_var);
  sprdmpKx19(par_mex_var, z, t29, dv2);
  for (i = 0; i < 17; i++) {
    t27 = 0.0;
    t53 = 0.0;
    for (i1 = 0; i1 < 6; i1++) {
      i2 = i + 17 * i1;
      t27 += w_vd_j_tmp[i2] * b_par_mex_var[i1];
      t53 += b_w_vd_j_tmp[i2] * dv2[i1];
    }

    w_sd[i] = (t27 * t2 + t53 * t2) / 2.0;
  }

  sprdmpTtu19(par_mex_var, z, t3, Ttu_19);
  sprdmpTtu19(par_mex_var, z, t29, b_Ttu_19);
  for (i = 0; i < 34; i++) {
    Ttu_19[i] = (Ttu_19[i] * t2 + b_Ttu_19[i] * t2) / 2.0;
  }

  for (sn = 0; sn < 9; sn++) {
    t3 = (double)sn * 0.1 + 0.100001;
    massT1(par_mex_var, z, t3 * (par_mex_var[15] - U[0]) + U[0], T);
    for (i = 0; i < 6; i++) {
      for (i1 = 0; i1 < 17; i1++) {
        Tt[i1 + 17 * i] = T[i + 6 * i1];
      }
    }

    for (i = 0; i < 17; i++) {
      for (i1 = 0; i1 < 6; i1++) {
        t27 = 0.0;
        for (i2 = 0; i2 < 6; i2++) {
          t27 += Tt[i + 17 * i2] * M_tmp[i2 + 6 * i1];
        }

        w_vd_j_tmp[i + 17 * i1] = t27;
      }

      for (i1 = 0; i1 < 17; i1++) {
        t27 = 0.0;
        for (i2 = 0; i2 < 6; i2++) {
          t27 += w_vd_j_tmp[i + 17 * i2] * T[i2 + 6 * i1];
        }

        y[i + 17 * i1] = t27;
      }
    }

    for (i = 0; i < 289; i++) {
      TMT[i] += y[i] * t2;
    }

    for (i = 0; i < 17; i++) {
      b_TMT_tmp[i] = 0.0;
      for (i1 = 0; i1 < 6; i1++) {
        t27 = 0.0;
        for (i2 = 0; i2 < 6; i2++) {
          t27 += Tt[i + 17 * i2] * M_tmp[i2 + 6 * i1];
        }

        b_TMT_tmp[i] += t27 * b_tmp[i1];
      }

      TMfd[i] += b_TMT_tmp[i] * t2;
    }

    t3 = t3 * (t9 - t23) + t23;
    sprdmpTt19(par_mex_var, z, t3, Tt);
    sprdmpVd19(par_mex_var, z, t3, b_par_mex_var);
    for (i = 0; i < 17; i++) {
      t27 = 0.0;
      for (i1 = 0; i1 < 6; i1++) {
        t27 += Tt[i + 17 * i1] * b_par_mex_var[i1];
      }

      w_vd_j[i] += t27 * t2;
    }

    sprdmpKx19(par_mex_var, z, t3, b_par_mex_var);
    for (i = 0; i < 17; i++) {
      t27 = 0.0;
      for (i1 = 0; i1 < 6; i1++) {
        t27 += Tt[i + 17 * i1] * b_par_mex_var[i1];
      }

      w_sd[i] += t27 * t2;
    }

    sprdmpTtu19(par_mex_var, z, t3, b_Ttu_19);
    for (i = 0; i < 34; i++) {
      Ttu_19[i] += b_Ttu_19[i] * t2;
    }
  }

  for (i = 0; i < 289; i++) {
    TMT[i] /= 10.0;
  }

  /* CNSTT1 */
  /*     OUT1 = CNSTT1(IN1,IN2,S,DS,T_SYM) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.6. */
  /*     07-May-2021 20:39:34 */
  t2_tmp = par_mex_var[18] + par_mex_var[15];
  a_tmp_tmp = par_mex_var[16] - t2_tmp;
  t14_tmp = 1.0 / (exp(t2_tmp * -200.0 + par_mex_var[16] * 200.0) + 1.0);
  t15 = a_tmp_tmp * a_tmp_tmp * t14_tmp;

  /*  if "in" is accelerations */
  /*  if "in" is equivalent sping-damper (PD) force */
  /* CNSTT2 */
  /*     OUT1 = CNSTT2(IN1,IN2,S,DS,T_SYM) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.6. */
  /*     07-May-2021 20:39:33 */
  b_t15 = a_tmp_tmp * a_tmp_tmp * t14_tmp;

  /*  if "in" is accelerations */
  /*  if "in" is equivalent sping-damper (PD) force */
  /* CNSTT3 */
  /*     OUT1 = CNSTT3(IN1,IN2,S,DS,T_SYM) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.6. */
  /*     07-May-2021 20:39:33 */
  c_t15 = a_tmp_tmp * a_tmp_tmp * t14_tmp;

  /*  if "in" is accelerations */
  /*  if "in" is equivalent sping-damper (PD) force */
  /*  weight_compensation_&_attractor_field_controller */
  /* LOADSFTAU1 */
  /*     OUT1 = LOADSFTAU1(IN1,IN2,S,DS,T_SYM) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.6. */
  /*     07-May-2021 20:40:22 */
  t2 = par_mex_var[18] + par_mex_var[17];
  t9 = par_mex_var[16] * 2.0;
  t23 = z[1] * t2;
  t25 = z[5] * t2;
  t27 = z[9] * t2;
  t29 = z[14] * t2;
  t12 = t2 * t2;
  t3 = par_mex_var[16] - t2;
  t53 = t3 * t3;
  t60 = 1.0 / (exp(t2 * -200.0 + par_mex_var[16] * 200.0) + 1.0);
  t12 = ((z[12] * t2 / 2.0 + z[13] * t12 / 2.0) + t29 * t12 / 2.0) + -(t53 * t60
    * (((((z[13] + par_mex_var[16] * z[16]) + z[14] * t9) + -z[15]) + t29) +
       -(z[16] * t2)) / 2.0);
  t3 = (t2 * 2.0 + -t9) * t60;
  t82_tmp = par_mex_var[16] * z[3];
  t82 = ((z[0] * t2 * 2.0 + t2 * t23 * 3.0) + -((z[1] + -z[3]) * t53 * t60)) +
    -(t3 * (((((z[0] + t82_tmp) + z[1] * t9) + -z[2]) + t23) + t2 * -z[3]));
  t83_tmp = par_mex_var[16] * z[7];
  t23 = ((z[4] * t2 * 2.0 + t2 * t25 * 3.0) + -((z[5] + -z[7]) * t53 * t60)) +
    -(t3 * (((((z[4] + t83_tmp) + z[5] * t9) + -z[6]) + t25) + t2 * -z[7]));
  t84_tmp = par_mex_var[16] * z[11];
  t3 = (((z[8] * t2 * 2.0 + t2 * t27 * 3.0) + -((z[9] + -z[11]) * t53 * t60)) +
        -(t3 * (((((z[8] + t84_tmp) + z[9] * t9) + -z[10]) + t27) + t2 * -z[11])))
    + 1.0;
  t2 = cos(t12);
  t9 = sin(t12);
  t29 = 1.0 / sqrt((t82 * t82 + t23 * t23) + t3 * t3);
  t3 = sqrt(t3 * t29 / 2.0 + 0.5);
  t12 = 1.0 / t3;
  t27 = t2 * t3;
  t53 = t9 * t3;
  t60 = t9 * t23 * t29 * t12 / 2.0 + t2 * t82 * t29 * t12 / 2.0;
  t3 = t9 * t82 * t29 * t12 / 2.0 + -(t2 * t23 * t29 * t12 / 2.0);
  t12 = (t27 * par_mex_var[24] + t53 * par_mex_var[25]) + -(t60 * par_mex_var[26]);
  t25 = (t53 * par_mex_var[26] + t60 * par_mex_var[25]) + t3 * par_mex_var[24];
  t2 = (t27 * par_mex_var[26] + t60 * par_mex_var[24]) + -(t3 * par_mex_var[25]);
  loadsTt1(par_mex_var, z, Tt);
  b_par_mex_var[0] = par_mex_var[21];
  b_par_mex_var[1] = par_mex_var[22];
  b_par_mex_var[2] = par_mex_var[23];
  t23 = (t27 * par_mex_var[25] - t53 * par_mex_var[24]) + t3 * par_mex_var[26];
  b_par_mex_var[3] = ((-t60 * t2 + t3 * t25) + t53 * t23) + t27 * t12;
  b_par_mex_var[4] = ((t60 * t25 + t3 * t2) + t27 * t23) - t53 * t12;
  b_par_mex_var[5] = ((t60 * t12 - t3 * t23) + t27 * t2) + t53 * t25;
  for (i = 0; i < 17; i++) {
    t27 = TMfd[i] / 10.0;
    TMfd[i] = t27;
    t53 = w_sd[i] / 10.0;
    w_vd_j[i] /= 10.0;
    w_sd[i] = t53;
    t60 = 0.0;
    for (i1 = 0; i1 < 6; i1++) {
      t60 += Tt[i + 17 * i1] * b_par_mex_var[i1];
    }

    d_eom_q[i] = (t27 + t53) + t60;
  }

  for (i = 0; i < 34; i++) {
    b_Ttu_19[i] = Ttu_19[i] / 10.0;
  }

  pinv(b_Ttu_19, a);

  /* CNSTIN1 */
  /*     OUT1 = CNSTIN1(IN1,IN2,S,DS,T_SYM) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.6. */
  /*     07-May-2021 20:39:35 */
  t23 = t2_tmp * t2_tmp;
  t9 = pow(t2_tmp, 3.0);

  /* CNSTIN2 */
  /*     OUT1 = CNSTIN2(IN1,IN2,S,DS,T_SYM) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.6. */
  /*     07-May-2021 20:39:35 */
  /* CNSTIN3 */
  /*     OUT1 = CNSTIN3(IN1,IN2,S,DS,T_SYM) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.6. */
  /*     07-May-2021 20:39:35 */
  d_t15[0] = t15 - t23;
  t25 = par_mex_var[16] * 2.0 + t2_tmp;
  d_t15[1] = t15 * t25 - t9;
  d_t15[2] = -t15;
  d_t15[3] = t14_tmp * pow(a_tmp_tmp, 3.0);
  memset(&d_t15[4], 0, 17U * sizeof(double));
  d_t15[21] = b_t15 - t23;
  d_t15[22] = b_t15 * t25 - t9;
  d_t15[23] = -b_t15;
  d_t15[24] = t14_tmp * pow(a_tmp_tmp, 3.0);
  memset(&d_t15[25], 0, 17U * sizeof(double));
  d_t15[42] = c_t15 - t23;
  d_t15[43] = c_t15 * t25 - t9;
  d_t15[44] = -c_t15;
  d_t15[45] = t14_tmp * pow(a_tmp_tmp, 3.0);
  d_t15[46] = 0.0;
  d_t15[47] = 0.0;
  d_t15[48] = 0.0;
  d_t15[49] = 0.0;
  d_t15[50] = 0.0;
  t3 = a_tmp_tmp * a_tmp_tmp * t14_tmp;
  t12 = (-par_mex_var[27] + par_mex_var[30] * ((z[0] * t23 + z[1] * t9) - t3 *
          (((((z[0] - z[2]) + par_mex_var[16] * z[1] * 2.0) + t82_tmp) + z[1] *
            t2_tmp) - z[3] * t2_tmp))) + par_mex_var[32] * (((z[20] * (t9 - t3 *
    t25) + z[19] * (t23 - t3)) - t14_tmp * z[22] * pow(a_tmp_tmp, 3.0)) + t3 *
    z[21]);
  t3 = a_tmp_tmp * a_tmp_tmp * t14_tmp;
  t29 = (-par_mex_var[28] + par_mex_var[30] * ((z[4] * t23 + z[5] * t9) - t3 *
          (((((z[4] - z[6]) + par_mex_var[16] * z[5] * 2.0) + t83_tmp) + z[5] *
            t2_tmp) - z[7] * t2_tmp))) + par_mex_var[32] * (((z[24] * (t9 - t3 *
    t25) + z[23] * (t23 - t3)) - t14_tmp * z[26] * pow(a_tmp_tmp, 3.0)) + t3 *
    z[25]);
  t3 = a_tmp_tmp * a_tmp_tmp * t14_tmp;
  t3 = (-par_mex_var[29] + par_mex_var[32] * (((z[28] * (t9 - t3 * t25) + z[27] *
           (t23 - t3)) - t14_tmp * z[30] * pow(a_tmp_tmp, 3.0)) + t3 * z[29])) +
    par_mex_var[30] * (((t2_tmp + z[8] * t23) + z[9] * t9) - t3 * (((((z[8] - z
    [10]) + par_mex_var[16] * z[9] * 2.0) + t84_tmp) + z[9] * t2_tmp) - z[11] *
    t2_tmp));
  for (i = 0; i < 17; i++) {
    b_TMT_tmp[i] = ((d_t15[i] * t12 + d_t15[i + 17] * t29) + d_t15[i + 34] * t3)
      - d_eom_q[i];
  }

  for (i = 0; i < 2; i++) {
    t27 = 0.0;
    for (i1 = 0; i1 < 17; i1++) {
      t27 += a[i + (i1 << 1)] * b_TMT_tmp[i1];
    }

    U[i] = t27;
  }

  b_pinv(TMT, 1.0E-12, y);
  for (i = 0; i < 34; i++) {
    Ttu_19[i] /= 10.0;
  }

  for (i = 0; i < 17; i++) {
    t27 = 0.0;
    for (i1 = 0; i1 < 17; i1++) {
      t27 += 1.0E-24 * TMT[i + 17 * i1] * z[i1 + 19];
    }

    w_sd[i] = ((d_eom_q[i] + w_vd_j[i]) + (Ttu_19[i] * U[0] + Ttu_19[i + 17] *
                U[1])) - t27;
  }

  for (i = 0; i < 17; i++) {
    t27 = 0.0;
    for (i1 = 0; i1 < 17; i1++) {
      t27 += y[i + 17 * i1] * w_sd[i1];
    }

    b_TMT_tmp[i] = t27;
  }

  memcpy(&dz[0], &z[19], 19U * sizeof(double));
  memcpy(&dz[19], &b_TMT_tmp[0], 17U * sizeof(double));
  dz[36] = U[0];
  dz[37] = U[1];
  *flag = 0.0;
}

/*
 * File trailer for EOM.c
 *
 * [EOF]
 */
