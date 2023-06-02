/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: EOM.c
 *
 * MATLAB Coder version            : 5.1
 * C/C++ source code generated on  : 13-May-2021 21:17:21
 */

/* Include Files */
#include "EOM.h"
#include "EOM_types.h"
#include "dyn_mid_step.h"
#include "massT1.h"
#include "pinv.h"
#include "sprdmpKx18.h"
#include "sprdmpTt18.h"
#include "sprdmpVd18.h"
#include <math.h>
#include <string.h>

/* Function Definitions */
/*
 * Arguments    : double t
 *                const double z[34]
 *                const struct0_T *par_mex
 *                double dz[34]
 *                double *flag
 * Return Type  : void
 */
void EOM(double t, const double z[34], const struct0_T *par_mex, double dz[34],
         double *flag)
{
  static struct0_T b_par_mex;
  double TMT[289];
  double y[289];
  double T[102];
  double TMT_tmp[102];
  double b_TMT_tmp[102];
  double b_w_vd_j_tmp[102];
  double w_vd_j_tmp[102];
  double M_tmp[36];
  double TMfd[17];
  double b_TMfd[17];
  double w_sd[17];
  double w_vd_j[17];
  double b_tmp[6];
  double c_par_mex[6];
  double dv[6];
  double b_t101_tmp;
  double b_t106_tmp;
  double b_t107_tmp;
  double b_t108_tmp;
  double b_t2;
  double b_t207_tmp_tmp;
  double b_t208_tmp_tmp;
  double b_t220_tmp_tmp;
  double b_t233_tmp_tmp;
  double b_t234_tmp_tmp;
  double b_t246_tmp_tmp;
  double b_t323_tmp;
  double b_t325_tmp;
  double b_t327_tmp;
  double b_t329_tmp;
  double c_t101_tmp;
  double c_t106_tmp;
  double c_t107_tmp;
  double c_t108_tmp;
  double t100;
  double t101_tmp;
  double t102;
  double t103;
  double t104;
  double t105;
  double t106;
  double t106_tmp;
  double t107;
  double t107_tmp;
  double t108;
  double t108_tmp;
  double t109;
  double t110;
  double t112;
  double t113;
  double t114;
  double t115;
  double t12;
  double t121_tmp;
  double t122;
  double t123;
  double t124;
  double t133;
  double t134;
  double t135;
  double t136;
  double t137;
  double t138;
  double t139;
  double t140;
  double t141;
  double t142;
  double t143;
  double t144;
  double t145;
  double t145_tmp;
  double t146;
  double t146_tmp;
  double t147;
  double t148;
  double t148_tmp;
  double t15_tmp;
  double t16_tmp;
  double t184_tmp;
  double t2;
  double t207_tmp_tmp;
  double t208;
  double t208_tmp_tmp;
  double t220;
  double t220_tmp_tmp;
  double t221;
  double t221_tmp_tmp;
  double t233;
  double t233_tmp_tmp;
  double t234;
  double t234_tmp_tmp;
  double t246_tmp_tmp;
  double t247;
  double t247_tmp_tmp;
  double t259;
  double t260;
  double t263;
  double t271;
  double t272;
  double t295;
  double t296;
  double t297;
  double t298;
  double t299;
  double t3;
  double t300;
  double t301;
  double t302;
  double t305;
  double t306;
  double t307;
  double t308;
  double t309;
  double t310;
  double t311;
  double t312;
  double t313;
  double t314;
  double t315;
  double t315_tmp;
  double t318;
  double t319;
  double t322;
  double t322_tmp;
  double t323;
  double t323_tmp;
  double t324;
  double t325;
  double t325_tmp;
  double t327;
  double t327_tmp;
  double t328;
  double t329;
  double t329_tmp;
  double t39;
  double t52;
  double t63_tmp;
  double t68_tmp;
  double t69;
  double t69_tmp;
  double t70;
  double t73;
  double t78;
  double t79;
  double t80;
  double t81;
  double t88;
  double t8_tmp;
  double t90;
  double t99;
  int i;
  int i1;
  int i2;
  int sn;
  b_par_mex = *par_mex;
  dyn_mid_step(t, &b_par_mex);

  /* ROMF */
  /*     [OUT1,OUT2] = ROMF(IN1,IN2,S,DS,T_SYM) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.6. */
  /*     30-Apr-2021 16:05:34 */
  t2 = b_par_mex.var[18] + b_par_mex.var[15];

  /* MASSM1 */
  /*     OUT1 = MASSM1(IN1,IN2,S,DS,T_SYM) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.6. */
  /*     30-Apr-2021 15:45:53 */
  b_t2 = b_par_mex.var[8] * b_par_mex.var[8];
  t3 = b_par_mex.var[9] * b_par_mex.var[9];
  t39 = -(b_par_mex.var[1] * (b_t2 + -t3) * 3.1415926535897931);
  t12 = t39 * (b_t2 / 4.0 + t3 / 4.0);
  M_tmp[0] = t39;
  M_tmp[1] = 0.0;
  M_tmp[2] = 0.0;
  M_tmp[3] = 0.0;
  M_tmp[4] = 0.0;
  M_tmp[5] = 0.0;
  M_tmp[6] = 0.0;
  M_tmp[7] = t39;
  M_tmp[8] = 0.0;
  M_tmp[9] = 0.0;
  M_tmp[10] = 0.0;
  M_tmp[11] = 0.0;
  M_tmp[12] = 0.0;
  M_tmp[13] = 0.0;
  M_tmp[14] = t39;
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
  M_tmp[35] = t39 * (b_t2 / 2.0 + t3 / 2.0);
  massT1(b_par_mex.var, z, 1.0E-6 * t2, T);

  /* MASSFG1 */
  /*     OUT1 = MASSFG1(IN1,IN2,S,DS,T_SYM) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.6. */
  /*     30-Apr-2021 15:46:29 */
  for (i = 0; i < 17; i++) {
    for (i1 = 0; i1 < 6; i1++) {
      t12 = 0.0;
      for (i2 = 0; i2 < 6; i2++) {
        t12 += T[i2 + 6 * i] * M_tmp[i2 + 6 * i1];
      }

      TMT_tmp[i + 17 * i1] = t12;
    }

    for (i1 = 0; i1 < 17; i1++) {
      t12 = 0.0;
      for (i2 = 0; i2 < 6; i2++) {
        t12 += TMT_tmp[i + 17 * i2] * T[i2 + 6 * i1];
      }

      y[i + 17 * i1] = t12;
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

  sprdmpTt18(b_par_mex.var, z, 1.0E-6 * t2, w_vd_j_tmp);
  massT1(b_par_mex.var, z, 0.999999 * t2, T);
  sprdmpTt18(b_par_mex.var, z, 0.999999 * t2, b_w_vd_j_tmp);
  for (i = 0; i < 17; i++) {
    for (i1 = 0; i1 < 6; i1++) {
      t12 = 0.0;
      for (i2 = 0; i2 < 6; i2++) {
        t12 += T[i2 + 6 * i] * M_tmp[i2 + 6 * i1];
      }

      b_TMT_tmp[i + 17 * i1] = t12;
    }

    for (i1 = 0; i1 < 17; i1++) {
      t12 = 0.0;
      for (i2 = 0; i2 < 6; i2++) {
        t12 += b_TMT_tmp[i + 17 * i2] * T[i2 + 6 * i1];
      }

      TMT[i + 17 * i1] = t12;
    }
  }

  for (i = 0; i < 289; i++) {
    TMT[i] = (y[i] * t2 + TMT[i] * t2) / 2.0;
  }

  sprdmpVd18(b_par_mex.var, z, 1.0E-6 * t2, c_par_mex);
  sprdmpVd18(b_par_mex.var, z, 0.999999 * t2, dv);
  for (i = 0; i < 17; i++) {
    t12 = 0.0;
    t79 = 0.0;
    b_t2 = 0.0;
    t3 = 0.0;
    for (i1 = 0; i1 < 6; i1++) {
      i2 = i + 17 * i1;
      t39 = b_tmp[i1];
      t12 += TMT_tmp[i2] * t39;
      t79 += b_TMT_tmp[i2] * t39;
      b_t2 += w_vd_j_tmp[i2] * c_par_mex[i1];
      t3 += b_w_vd_j_tmp[i2] * dv[i1];
    }

    TMfd[i] = (t12 * t2 + t79 * t2) / 2.0;
    w_vd_j[i] = (b_t2 * t2 + t3 * t2) / 2.0;
  }

  sprdmpKx18(b_par_mex.var, z, 1.0E-6 * t2, c_par_mex);
  sprdmpKx18(b_par_mex.var, z, 0.999999 * t2, dv);
  for (i = 0; i < 17; i++) {
    t12 = 0.0;
    t79 = 0.0;
    for (i1 = 0; i1 < 6; i1++) {
      i2 = i + 17 * i1;
      t12 += w_vd_j_tmp[i2] * c_par_mex[i1];
      t79 += b_w_vd_j_tmp[i2] * dv[i1];
    }

    w_sd[i] = (t12 * t2 + t79 * t2) / 2.0;
  }

  for (sn = 0; sn < 9; sn++) {
    b_t2 = ((double)sn * 0.1 + 0.100001) * t2;
    massT1(b_par_mex.var, z, b_t2, T);
    for (i = 0; i < 17; i++) {
      for (i1 = 0; i1 < 6; i1++) {
        t12 = 0.0;
        for (i2 = 0; i2 < 6; i2++) {
          t12 += T[i2 + 6 * i] * M_tmp[i2 + 6 * i1];
        }

        TMT_tmp[i + 17 * i1] = t12;
      }

      for (i1 = 0; i1 < 17; i1++) {
        t12 = 0.0;
        for (i2 = 0; i2 < 6; i2++) {
          t12 += TMT_tmp[i + 17 * i2] * T[i2 + 6 * i1];
        }

        y[i + 17 * i1] = t12;
      }
    }

    for (i = 0; i < 289; i++) {
      TMT[i] += y[i] * t2;
    }

    sprdmpTt18(b_par_mex.var, z, b_t2, w_vd_j_tmp);
    sprdmpVd18(b_par_mex.var, z, b_t2, c_par_mex);
    for (i = 0; i < 17; i++) {
      t12 = 0.0;
      t79 = 0.0;
      for (i1 = 0; i1 < 6; i1++) {
        i2 = i + 17 * i1;
        t12 += TMT_tmp[i2] * b_tmp[i1];
        t79 += w_vd_j_tmp[i2] * c_par_mex[i1];
      }

      TMfd[i] += t12 * t2;
      w_vd_j[i] += t79 * t2;
    }

    sprdmpKx18(b_par_mex.var, z, b_t2, c_par_mex);
    for (i = 0; i < 17; i++) {
      t12 = 0.0;
      for (i1 = 0; i1 < 6; i1++) {
        t12 += w_vd_j_tmp[i + 17 * i1] * c_par_mex[i1];
      }

      w_sd[i] += t12 * t2;
    }
  }

  for (i = 0; i < 289; i++) {
    TMT[i] /= 10.0;
  }

  for (i = 0; i < 17; i++) {
    TMfd[i] /= 10.0;
    w_vd_j[i] /= 10.0;
    w_sd[i] /= 10.0;
  }

  /*  EOM via jacobian inversion */
  pinv(TMT, y);

  /* LOADSTT1 */
  /*     OUT1 = LOADSTT1(IN1,IN2,S,DS,T_SYM) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.6. */
  /*     30-Apr-2021 15:59:34 */
  t12 = b_par_mex.var[17] * z[1];
  t79 = b_par_mex.var[17] * z[5];
  t78 = b_par_mex.var[17] * z[9];
  t8_tmp = b_par_mex.var[17] * z[14];
  t2 = b_par_mex.var[17] * 2.0;
  t15_tmp = b_par_mex.var[16] * 2.0;
  t16_tmp = b_par_mex.var[17] * b_par_mex.var[17];
  t3 = pow(b_par_mex.var[17], 3.0);
  t39 = b_par_mex.var[17] + t15_tmp;
  b_t2 = b_par_mex.var[17] + -b_par_mex.var[16];
  t52 = t16_tmp / 2.0;
  t63_tmp = 1.0 / (exp(b_par_mex.var[16] * 200.0 + -(b_par_mex.var[17] * 200.0))
                   + 1.0);
  t68_tmp = (t2 + -t15_tmp) * t63_tmp;
  t69_tmp = b_t2 * b_t2;
  t69 = t69_tmp * t63_tmp;
  t70 = pow(b_t2, 3.0) * t63_tmp;
  t73 = t69 / 2.0;
  t80 = t2 + -t68_tmp;
  t81 = t16_tmp + -t69;
  t99 = t69 + b_t2 * t68_tmp;
  t100 = (-(t16_tmp * 3.0) + t69) + t39 * t68_tmp;
  t101_tmp = b_par_mex.var[17] * z[12] / 2.0;
  b_t101_tmp = b_par_mex.var[16] * z[16];
  c_t101_tmp = -(b_par_mex.var[17] * z[16]);
  b_t2 = ((t101_tmp + z[13] * t52) + t8_tmp * t52) + (((((z[13] + t8_tmp) +
    b_t101_tmp) + z[14] * t15_tmp) + -z[15]) + c_t101_tmp) * t69 * -0.5;
  t88 = t3 + t39 * -t69;
  t90 = t3 / 2.0 + t39 * t69 * -0.5;
  t102 = cos(b_t2);
  t103 = sin(b_t2);
  t106_tmp = z[1] + -z[3];
  b_t106_tmp = z[0] * t2 + b_par_mex.var[17] * t12 * 3.0;
  c_t106_tmp = ((((z[0] + t12) + b_par_mex.var[16] * z[3]) + z[1] * t15_tmp) +
                -z[2]) + -(b_par_mex.var[17] * z[3]);
  t106 = (b_t106_tmp + t106_tmp * -t69) + c_t106_tmp * -t68_tmp;
  t107_tmp = z[5] + -z[7];
  b_t107_tmp = z[4] * t2 + b_par_mex.var[17] * t79 * 3.0;
  c_t107_tmp = ((((z[4] + t79) + b_par_mex.var[16] * z[7]) + z[5] * t15_tmp) +
                -z[6]) + -(b_par_mex.var[17] * z[7]);
  t107 = (b_t107_tmp + t107_tmp * -t69) + c_t107_tmp * -t68_tmp;
  t108_tmp = z[9] + -z[11];
  b_t108_tmp = z[8] * t2 + b_par_mex.var[17] * t78 * 3.0;
  c_t108_tmp = ((((z[8] + t78) + b_par_mex.var[16] * z[11]) + z[9] * t15_tmp) +
                -z[10]) + -(b_par_mex.var[17] * z[11]);
  t108 = ((b_t108_tmp + t108_tmp * -t69) + c_t108_tmp * -t68_tmp) + 1.0;
  t104 = t102 * t102;
  t105 = t103 * t103;
  t109 = t106 * t106;
  t110 = t107 * t107;
  b_t2 = t108 * t108;
  t112 = (t109 + t110) + b_t2;
  t113 = 1.0 / (t112 * t112);
  t114 = 1.0 / sqrt(t112);
  t115 = pow(t114, 3.0);
  t3 = t68_tmp * t114 / 2.0;
  t12 = t80 * t114 / 2.0;
  t2 = t99 * t114 / 2.0;
  t39 = t100 * t114 / 2.0;
  t121_tmp = t108 * t114 / 2.0 + 0.5;
  t122 = sqrt(t121_tmp);
  t123 = 1.0 / t122;
  t133 = t3 + -(t68_tmp * b_t2 * t115 / 2.0);
  t134 = t12 + -(t80 * b_t2 * t115 / 2.0);
  t139 = t2 + -(t99 * b_t2 * t115 / 2.0);
  t140 = t39 + -(t100 * b_t2 * t115 / 2.0);
  t124 = pow(t123, 3.0);
  t135 = t102 * t3 * t123;
  t136 = t103 * t3 * t123;
  t137 = t102 * t12 * t123;
  t138 = t103 * t12 * t123;
  t141 = t102 * t2 * t123;
  t142 = t103 * t2 * t123;
  t143 = t102 * t39 * t123;
  t144 = t103 * t39 * t123;
  t145_tmp = t103 * t106 * t114;
  t145 = t145_tmp * t123;
  t146_tmp = t103 * t107 * t114;
  t146 = t146_tmp * t123;
  t78 = t102 * t106 * t114;
  t147 = t78 * t123;
  t148_tmp = t102 * t107 * t114;
  t148 = t148_tmp * t123;
  t207_tmp_tmp = t68_tmp * t102;
  b_t207_tmp_tmp = t207_tmp_tmp * t106;
  b_t2 = b_t207_tmp_tmp * t107;
  t112 = b_t2 * t115 * t123 / 2.0;
  t208_tmp_tmp = t68_tmp * t103;
  b_t208_tmp_tmp = t208_tmp_tmp * t106;
  t3 = b_t208_tmp_tmp * t107;
  t208 = t3 * t115 * t123 / 2.0;
  t220_tmp_tmp = t80 * t102;
  b_t220_tmp_tmp = t220_tmp_tmp * t106;
  t12 = b_t220_tmp_tmp * t107;
  t220 = t12 * t115 * t123 / 2.0;
  t328 = t80 * t103;
  t221_tmp_tmp = t328 * t106;
  t2 = t221_tmp_tmp * t107;
  t221 = t2 * t115 * t123 / 2.0;
  t233_tmp_tmp = t99 * t102;
  b_t233_tmp_tmp = t233_tmp_tmp * t106;
  t39 = b_t233_tmp_tmp * t107;
  t233 = t39 * t115 * t123 / 2.0;
  t234_tmp_tmp = t99 * t103;
  b_t234_tmp_tmp = t234_tmp_tmp * t106;
  t79 = b_t234_tmp_tmp * t107;
  t234 = t79 * t115 * t123 / 2.0;
  t246_tmp_tmp = t100 * t102;
  b_t246_tmp_tmp = t246_tmp_tmp * t106;
  t80 = b_t246_tmp_tmp * t107;
  t114 = t80 * t115 * t123 / 2.0;
  t324 = t100 * t103;
  t247_tmp_tmp = t324 * t106;
  t272 = t247_tmp_tmp * t107;
  t247 = t272 * t115 * t123 / 2.0;
  t184_tmp = t52 - t73;
  t259 = b_t2 * t108 * t113 * t124 / 8.0;
  t260 = t3 * t108 * t113 * t124 / 8.0;
  t263 = t12 * t108 * t113 * t124 / 8.0;
  t106 = t2 * t108 * t113 * t124 / 8.0;
  t52 = t39 * t108 * t113 * t124 / 8.0;
  t100 = t79 * t108 * t113 * t124 / 8.0;
  t271 = t80 * t108 * t113 * t124 / 8.0;
  t272 = t272 * t108 * t113 * t124 / 8.0;
  t295 = t146 + t147;
  t296 = t145 + -t148;
  t297 = b_par_mex.var[17] * t147 / 4.0 + b_par_mex.var[17] * t146 / 4.0;
  t299 = t69 * t147 / 4.0 + t69 * t146 / 4.0;
  t300 = t70 * t147 / 4.0 + t70 * t146 / 4.0;
  t305 = t90 * t147 / 2.0 + t90 * t146 / 2.0;
  t12 = t207_tmp_tmp * t108;
  t307 = (((t135 + -(t207_tmp_tmp * t109 * t115 * t123 / 2.0)) + -t208) + t12 *
          t109 * t113 * t124 / 8.0) + t260;
  t2 = t208_tmp_tmp * t108;
  t310 = (((t136 + -(t208_tmp_tmp * t110 * t115 * t123 / 2.0)) + -t112) + t2 *
          t110 * t113 * t124 / 8.0) + t259;
  t39 = t220_tmp_tmp * t108;
  t311 = (((t137 + -(t220_tmp_tmp * t109 * t115 * t123 / 2.0)) + -t221) + t39 *
          t109 * t113 * t124 / 8.0) + t106;
  t79 = t328 * t108;
  t314 = (((t138 + -(t328 * t110 * t115 * t123 / 2.0)) + -t220) + t79 * t110 *
          t113 * t124 / 8.0) + t263;
  t315_tmp = t233_tmp_tmp * t108;
  t315 = (((t141 + -(t233_tmp_tmp * t109 * t115 * t123 / 2.0)) + -t234) +
          t315_tmp * t109 * t113 * t124 / 8.0) + t100;
  t99 = t234_tmp_tmp * t108;
  t318 = (((t142 + -(t234_tmp_tmp * t110 * t115 * t123 / 2.0)) + -t233) + t99 *
          t110 * t113 * t124 / 8.0) + t52;
  t80 = t246_tmp_tmp * t108;
  t319 = (((t143 + -(t246_tmp_tmp * t109 * t115 * t123 / 2.0)) + -t247) + t80 *
          t109 * t113 * t124 / 8.0) + t272;
  t322_tmp = t324 * t108;
  t322 = (((t144 + -(t324 * t110 * t115 * t123 / 2.0)) + -t114) + t322_tmp *
          t110 * t113 * t124 / 8.0) + t271;
  t3 = t78 * t124;
  b_t2 = t146_tmp * t124;
  t323_tmp = b_t207_tmp_tmp * t108 * t115 * t123;
  b_t323_tmp = t208_tmp_tmp * t107 * t108 * t115 * t123;
  t323 = ((t323_tmp / 2.0 + b_t323_tmp / 2.0) + t3 * t133 / 4.0) + b_t2 * t133 /
    4.0;
  t325_tmp = b_t220_tmp_tmp * t108 * t115 * t123;
  b_t325_tmp = t328 * t107 * t108 * t115 * t123;
  t325 = ((t325_tmp / 2.0 + b_t325_tmp / 2.0) + t3 * t134 / 4.0) + b_t2 * t134 /
    4.0;
  t327_tmp = b_t233_tmp_tmp * t108 * t115 * t123;
  b_t327_tmp = t234_tmp_tmp * t107 * t108 * t115 * t123;
  t327 = ((t327_tmp / 2.0 + b_t327_tmp / 2.0) + t3 * t139 / 4.0) + b_t2 * t139 /
    4.0;
  t329_tmp = b_t246_tmp_tmp * t108 * t115 * t123;
  b_t329_tmp = t324 * t107 * t108 * t115 * t123;
  t329 = ((t329_tmp / 2.0 + b_t329_tmp / 2.0) + t3 * t140 / 4.0) + b_t2 * t140 /
    4.0;
  t298 = b_par_mex.var[17] * t148 / 4.0 + -(b_par_mex.var[17] * t145 / 4.0);
  t301 = t69 * t148 / 4.0 + -(t69 * t145 / 4.0);
  t302 = t70 * t148 / 4.0 + -(t70 * t145 / 4.0);
  t306 = t90 * t148 / 2.0 + -(t90 * t145 / 2.0);
  t308 = (((t135 + -(t207_tmp_tmp * t110 * t115 * t123 / 2.0)) + t208) + t12 *
          t110 * t113 * t124 / 8.0) + -t260;
  t309 = (((t136 + -(t208_tmp_tmp * t109 * t115 * t123 / 2.0)) + t112) + t2 *
          t109 * t113 * t124 / 8.0) + -t259;
  t312 = (((t137 + -(t220_tmp_tmp * t110 * t115 * t123 / 2.0)) + t221) + t39 *
          t110 * t113 * t124 / 8.0) + -t106;
  t313 = (((t138 + -(t328 * t109 * t115 * t123 / 2.0)) + t220) + t79 * t109 *
          t113 * t124 / 8.0) + -t263;
  t141 = (((t141 + -(t233_tmp_tmp * t110 * t115 * t123 / 2.0)) + t234) +
          t315_tmp * t110 * t113 * t124 / 8.0) + -t100;
  t138 = (((t142 + -(t234_tmp_tmp * t109 * t115 * t123 / 2.0)) + t233) + t99 *
          t109 * t113 * t124 / 8.0) + -t52;
  t137 = (((t143 + -(t246_tmp_tmp * t110 * t115 * t123 / 2.0)) + t247) + t80 *
          t110 * t113 * t124 / 8.0) + -t272;
  t136 = (((t144 + -(t324 * t109 * t115 * t123 / 2.0)) + t114) + t322_tmp * t109
          * t113 * t124 / 8.0) + -t271;
  t3 = t148_tmp * t124;
  b_t2 = t145_tmp * t124;
  t135 = b_t208_tmp_tmp * t108 * t115 * t123;
  t233 = t207_tmp_tmp * t107 * t108 * t115 * t123;
  t324 = ((t233 / 2.0 + -(t135 / 2.0)) + t3 * t133 / 4.0) + -(b_t2 * t133 / 4.0);
  t234_tmp_tmp = t221_tmp_tmp * t108 * t115 * t123;
  t247 = t220_tmp_tmp * t107 * t108 * t115 * t123;
  t220 = ((t247 / 2.0 + -(t234_tmp_tmp / 2.0)) + t3 * t134 / 4.0) + -(b_t2 *
    t134 / 4.0);
  t234 = b_t234_tmp_tmp * t108 * t115 * t123;
  t221 = t233_tmp_tmp * t107 * t108 * t115 * t123;
  t328 = ((t221 / 2.0 + -(t234 / 2.0)) + t3 * t139 / 4.0) + -(b_t2 * t139 / 4.0);
  t208_tmp_tmp = t247_tmp_tmp * t108 * t115 * t123;
  t208 = t246_tmp_tmp * t107 * t108 * t115 * t123;
  t271 = ((t208 / 2.0 + -(t208_tmp_tmp / 2.0)) + t3 * t140 / 4.0) + -(b_t2 *
    t140 / 4.0);

  /* LOADSFTAU1 */
  /*     OUT1 = LOADSFTAU1(IN1,IN2,S,DS,T_SYM) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.6. */
  /*     30-Apr-2021 15:59:38 */
  b_t2 = ((t101_tmp + z[13] * t16_tmp / 2.0) + t8_tmp * t16_tmp / 2.0) +
    -(t69_tmp * t63_tmp * (((((z[13] + t8_tmp) + b_t101_tmp) + z[14] * t15_tmp)
        + -z[15]) + c_t101_tmp) / 2.0);
  t78 = (b_t106_tmp + -(t106_tmp * t69_tmp * t63_tmp)) + -(t68_tmp * c_t106_tmp);
  t79 = (b_t107_tmp + -(t107_tmp * t69_tmp * t63_tmp)) + -(t68_tmp * c_t107_tmp);
  t80 = ((b_t108_tmp + -(t108_tmp * t69_tmp * t63_tmp)) + -(t68_tmp * c_t108_tmp))
    + 1.0;
  t39 = cos(b_t2);
  t12 = sin(b_t2);
  t2 = 1.0 / sqrt((t78 * t78 + t79 * t79) + t80 * t80);
  b_t2 = sqrt(t80 * t2 / 2.0 + 0.5);
  t3 = 1.0 / b_t2;
  t263 = t39 * b_t2;
  t322_tmp = t12 * b_t2;
  t259 = t12 * t79 * t2 * t3 / 2.0 + t39 * t78 * t2 * t3 / 2.0;
  t260 = t12 * t78 * t2 * t3 / 2.0 + -(t39 * t79 * t2 * t3 / 2.0);
  t112 = (t263 * b_par_mex.var[24] + t322_tmp * b_par_mex.var[25]) + -(t259 *
    b_par_mex.var[26]);
  t114 = (t322_tmp * b_par_mex.var[26] + t259 * b_par_mex.var[25]) + t260 *
    b_par_mex.var[24];
  t115 = (t263 * b_par_mex.var[26] + t259 * b_par_mex.var[24]) + -(t260 *
    b_par_mex.var[25]);
  TMT_tmp[0] = t81;
  TMT_tmp[1] = t88;
  TMT_tmp[2] = t69;
  TMT_tmp[3] = t70;
  memset(&TMT_tmp[4], 0, 17U * sizeof(double));
  TMT_tmp[21] = t81;
  TMT_tmp[22] = t88;
  TMT_tmp[23] = t69;
  TMT_tmp[24] = t70;
  memset(&TMT_tmp[25], 0, 17U * sizeof(double));
  TMT_tmp[42] = t81;
  TMT_tmp[43] = t88;
  TMT_tmp[44] = t69;
  TMT_tmp[45] = t70;
  TMT_tmp[46] = 0.0;
  TMT_tmp[47] = 0.0;
  TMT_tmp[48] = 0.0;
  TMT_tmp[49] = 0.0;
  TMT_tmp[50] = 0.0;
  b_t233_tmp_tmp = t103 * t122;
  b_t246_tmp_tmp = t102 * t122;
  TMT_tmp[51] = ((b_t233_tmp_tmp * t311 * 2.0 + b_t246_tmp_tmp * t313 * 2.0) +
                 t325_tmp * t296 / 4.0) + t234_tmp_tmp * t295 / 4.0;
  TMT_tmp[52] = ((b_t233_tmp_tmp * t319 * -2.0 - b_t246_tmp_tmp * t136 * 2.0) -
                 t329_tmp * t296 / 4.0) - t208_tmp_tmp * t295 / 4.0;
  TMT_tmp[53] = ((b_t233_tmp_tmp * t307 * 2.0 + b_t246_tmp_tmp * t309 * 2.0) +
                 t323_tmp * t296 / 4.0) + t135 * t295 / 4.0;
  TMT_tmp[54] = ((b_t233_tmp_tmp * t315 * 2.0 + b_t246_tmp_tmp * t138 * 2.0) +
                 t327_tmp * t296 / 4.0) + t234 * t295 / 4.0;
  TMT_tmp[55] = ((b_t246_tmp_tmp * t312 * -2.0 + b_t233_tmp_tmp * t314 * 2.0) +
                 t247 * t296 / 4.0) + b_t325_tmp * t295 / 4.0;
  TMT_tmp[56] = ((b_t246_tmp_tmp * t137 * 2.0 - b_t233_tmp_tmp * t322 * 2.0) -
                 t208 * t296 / 4.0) - b_t329_tmp * t295 / 4.0;
  TMT_tmp[57] = ((b_t246_tmp_tmp * t308 * -2.0 + b_t233_tmp_tmp * t310 * 2.0) +
                 t233 * t296 / 4.0) + b_t323_tmp * t295 / 4.0;
  TMT_tmp[58] = ((b_t246_tmp_tmp * t141 * -2.0 + b_t233_tmp_tmp * t318 * 2.0) +
                 t221 * t296 / 4.0) + b_t327_tmp * t295 / 4.0;
  t315_tmp = t102 * t123;
  b_t207_tmp_tmp = t103 * t123;
  b_t220_tmp_tmp = t315_tmp * t134;
  t52 = b_t207_tmp_tmp * t134;
  TMT_tmp[59] = ((b_t246_tmp_tmp * t220 * 2.0 - b_t233_tmp_tmp * t325 * 2.0) -
                 b_t220_tmp_tmp * t296 / 2.0) - t52 * t295 / 2.0;
  t146_tmp = t315_tmp * t140;
  t106 = b_t207_tmp_tmp * t140;
  TMT_tmp[60] = ((b_t246_tmp_tmp * t271 * -2.0 + b_t233_tmp_tmp * t329 * 2.0) +
                 t146_tmp * t296 / 2.0) + t106 * t295 / 2.0;
  t100 = t315_tmp * t133;
  t80 = b_t207_tmp_tmp * t133;
  TMT_tmp[61] = ((b_t246_tmp_tmp * t324 * 2.0 - b_t233_tmp_tmp * t323 * 2.0) -
                 t100 * t296 / 2.0) - t80 * t295 / 2.0;
  t315_tmp *= t139;
  b_t207_tmp_tmp *= t139;
  TMT_tmp[62] = ((b_t246_tmp_tmp * t328 * 2.0 - b_t233_tmp_tmp * t327 * 2.0) -
                 t315_tmp * t296 / 2.0) - b_t207_tmp_tmp * t295 / 2.0;
  t99 = b_par_mex.var[17] * t102 * t122;
  t272 = b_par_mex.var[17] * t103 * t122;
  TMT_tmp[63] = ((b_t246_tmp_tmp * t297 * 2.0 + b_t233_tmp_tmp * t298 * 2.0) -
                 t99 * t295 / 2.0) + t272 * t296 / 2.0;
  t78 = t148 * t184_tmp * -0.5 + t145 * t184_tmp / 2.0;
  t12 = t146 * t184_tmp / 2.0 + t147 * t184_tmp / 2.0;
  TMT_tmp[64] = ((b_t233_tmp_tmp * t78 * -2.0 + b_t246_tmp_tmp * t12 * 2.0) -
                 b_t246_tmp_tmp * t295 * t184_tmp) + b_t233_tmp_tmp * t296 *
    t184_tmp;
  t2 = t90 * t102 * t122;
  t39 = t90 * t103 * t122;
  TMT_tmp[65] = ((b_t246_tmp_tmp * t305 * 2.0 + b_t233_tmp_tmp * t306 * 2.0) -
                 t2 * t295) + t39 * t296;
  t79 = t69 * t102 * t122;
  TMT_tmp[66] = ((b_t246_tmp_tmp * t299 * 2.0 + b_t233_tmp_tmp * t301 * 2.0) -
                 t79 * t295 / 2.0) + t69 * t103 * t122 * t296 / 2.0;
  b_t2 = t70 * t102 * t122;
  t3 = t70 * t103 * t122;
  TMT_tmp[67] = ((b_t246_tmp_tmp * t300 * 2.0 + b_t233_tmp_tmp * t302 * 2.0) -
                 b_t2 * t295 / 2.0) + t3 * t296 / 2.0;
  TMT_tmp[68] = ((b_t246_tmp_tmp * t311 * 2.0 - b_t233_tmp_tmp * t313 * 2.0) +
                 t325_tmp * t295 / 4.0) - t234_tmp_tmp * t296 / 4.0;
  TMT_tmp[69] = ((b_t246_tmp_tmp * t319 * -2.0 + b_t233_tmp_tmp * t136 * 2.0) -
                 t329_tmp * t295 / 4.0) + t208_tmp_tmp * t296 / 4.0;
  TMT_tmp[70] = ((b_t246_tmp_tmp * t307 * 2.0 - b_t233_tmp_tmp * t309 * 2.0) +
                 t323_tmp * t295 / 4.0) - t135 * t296 / 4.0;
  TMT_tmp[71] = ((b_t246_tmp_tmp * t315 * 2.0 - b_t233_tmp_tmp * t138 * 2.0) +
                 t327_tmp * t295 / 4.0) - t234 * t296 / 4.0;
  TMT_tmp[72] = ((b_t233_tmp_tmp * t312 * 2.0 + b_t246_tmp_tmp * t314 * 2.0) +
                 t247 * t295 / 4.0) - b_t325_tmp * t296 / 4.0;
  TMT_tmp[73] = ((b_t233_tmp_tmp * t137 * -2.0 - b_t246_tmp_tmp * t322 * 2.0) -
                 t208 * t295 / 4.0) + b_t329_tmp * t296 / 4.0;
  TMT_tmp[74] = ((b_t233_tmp_tmp * t308 * 2.0 + b_t246_tmp_tmp * t310 * 2.0) +
                 t233 * t295 / 4.0) - b_t323_tmp * t296 / 4.0;
  TMT_tmp[75] = ((b_t233_tmp_tmp * t141 * 2.0 + b_t246_tmp_tmp * t318 * 2.0) +
                 t221 * t295 / 4.0) - b_t327_tmp * t296 / 4.0;
  TMT_tmp[76] = ((b_t246_tmp_tmp * t325 * -2.0 - b_t233_tmp_tmp * t220 * 2.0) -
                 b_t220_tmp_tmp * t295 / 2.0) + t52 * t296 / 2.0;
  TMT_tmp[77] = ((b_t246_tmp_tmp * t329 * 2.0 + b_t233_tmp_tmp * t271 * 2.0) +
                 t146_tmp * t295 / 2.0) - t106 * t296 / 2.0;
  TMT_tmp[78] = ((b_t246_tmp_tmp * t323 * -2.0 - b_t233_tmp_tmp * t324 * 2.0) -
                 t100 * t295 / 2.0) + t80 * t296 / 2.0;
  TMT_tmp[79] = ((b_t246_tmp_tmp * t327 * -2.0 - b_t233_tmp_tmp * t328 * 2.0) -
                 t315_tmp * t295 / 2.0) + b_t207_tmp_tmp * t296 / 2.0;
  TMT_tmp[80] = ((b_t246_tmp_tmp * t298 * 2.0 - b_t233_tmp_tmp * t297 * 2.0) +
                 t99 * t296 / 2.0) + t272 * t295 / 2.0;
  TMT_tmp[81] = ((b_t246_tmp_tmp * t78 * -2.0 - b_t233_tmp_tmp * t12 * 2.0) +
                 b_t246_tmp_tmp * t296 * t184_tmp) + b_t233_tmp_tmp * t295 *
    t184_tmp;
  TMT_tmp[82] = ((b_t246_tmp_tmp * t306 * 2.0 - b_t233_tmp_tmp * t305 * 2.0) +
                 t2 * t296) + t39 * t295;
  TMT_tmp[83] = ((b_t233_tmp_tmp * t299 * -2.0 + b_t246_tmp_tmp * t301 * 2.0) +
                 t79 * t296 / 2.0) + t73 * t103 * t122 * t295;
  TMT_tmp[84] = ((b_t233_tmp_tmp * t300 * -2.0 + b_t246_tmp_tmp * t302 * 2.0) +
                 b_t2 * t296 / 2.0) + t3 * t295 / 2.0;
  TMT_tmp[85] = -t296 * t311 + t295 * t313;
  TMT_tmp[86] = t296 * t319 - t295 * t136;
  TMT_tmp[87] = -t296 * t307 + t295 * t309;
  TMT_tmp[88] = -t296 * t315 + t295 * t138;
  TMT_tmp[89] = -t295 * t312 - t296 * t314;
  TMT_tmp[90] = t295 * t137 + t296 * t322;
  TMT_tmp[91] = -t295 * t308 - t296 * t310;
  TMT_tmp[92] = -t295 * t141 - t296 * t318;
  TMT_tmp[93] = t295 * t220 + t296 * t325;
  TMT_tmp[94] = -t295 * t271 - t296 * t329;
  TMT_tmp[95] = t295 * t324 + t296 * t323;
  TMT_tmp[96] = t295 * t328 + t296 * t327;
  TMT_tmp[97] = ((t295 * t297 - t296 * t298) + b_par_mex.var[17] * t104 *
                 t121_tmp) + b_par_mex.var[17] * t105 * t121_tmp;
  TMT_tmp[98] = ((t296 * t78 + t295 * t12) + t104 * t121_tmp * t184_tmp * 2.0) +
    t105 * t121_tmp * t184_tmp * 2.0;
  TMT_tmp[99] = ((t295 * t305 - t296 * t306) + t90 * t104 * t121_tmp * 2.0) +
    t90 * t105 * t121_tmp * 2.0;
  TMT_tmp[100] = ((t295 * t299 - t296 * t301) + t69 * t104 * t121_tmp) + t69 *
    t105 * t121_tmp;
  TMT_tmp[101] = ((t295 * t300 - t296 * t302) + t70 * t104 * t121_tmp) + t70 *
    t105 * t121_tmp;
  c_par_mex[0] = b_par_mex.var[21];
  c_par_mex[1] = b_par_mex.var[22];
  c_par_mex[2] = b_par_mex.var[23];
  b_t2 = (t263 * b_par_mex.var[25] - t322_tmp * b_par_mex.var[24]) + t260 *
    b_par_mex.var[26];
  c_par_mex[3] = ((-t259 * t115 + t260 * t114) + t322_tmp * b_t2) + t263 * t112;
  c_par_mex[4] = ((t259 * t114 + t260 * t115) + t263 * b_t2) - t322_tmp * t112;
  c_par_mex[5] = ((t259 * t112 - t260 * b_t2) + t263 * t115) + t322_tmp * t114;
  for (i = 0; i < 17; i++) {
    t12 = 0.0;
    for (i1 = 0; i1 < 17; i1++) {
      t12 += TMT[i + 17 * i1] * z[i1 + 17];
    }

    t79 = 0.0;
    for (i1 = 0; i1 < 6; i1++) {
      t79 += TMT_tmp[i + 17 * i1] * c_par_mex[i1];
    }

    b_TMfd[i] = (((TMfd[i] + w_sd[i]) + w_vd_j[i]) + t79) - 0.0E-18 * t12;
  }

  for (i = 0; i < 17; i++) {
    t12 = 0.0;
    for (i1 = 0; i1 < 17; i1++) {
      t12 += y[i + 17 * i1] * b_TMfd[i1];
    }

    dz[i] = z[i + 17];
    dz[i + 17] = t12;
  }

  *flag = 0.0;
}

/*
 * File trailer for EOM.c
 *
 * [EOF]
 */
