/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: loadsTt1.c
 *
 * MATLAB Coder version            : 5.1
 * C/C++ source code generated on  : 08-May-2021 03:55:48
 */

/* Include Files */
#include "loadsTt1.h"
#include <math.h>
#include <string.h>

/* Function Definitions */
/*
 * LOADSTT1
 *     OUT1 = LOADSTT1(IN1,IN2,S,DS,T_SYM)
 * Arguments    : const double in1[33]
 *                const double in2[42]
 *                double out1[108]
 * Return Type  : void
 */
void loadsTt1(const double in1[33], const double in2[42], double out1[108])
{
  double a_tmp;
  double b_t283_tmp_tmp;
  double b_t297_tmp_tmp;
  double b_t310_tmp_tmp;
  double b_t408_tmp;
  double b_t410_tmp;
  double b_t412_tmp;
  double b_t414_tmp;
  double c_t408_tmp;
  double t10;
  double t108;
  double t11;
  double t118;
  double t119;
  double t120;
  double t124;
  double t144;
  double t146;
  double t147;
  double t148;
  double t149;
  double t150;
  double t151;
  double t152;
  double t153;
  double t154;
  double t156;
  double t156_tmp;
  double t157;
  double t158;
  double t159;
  double t161;
  double t162;
  double t163;
  double t172_tmp;
  double t173;
  double t174;
  double t175;
  double t188;
  double t189;
  double t190;
  double t191;
  double t192;
  double t193;
  double t194;
  double t195;
  double t196;
  double t197;
  double t198;
  double t199;
  double t200;
  double t200_tmp_tmp;
  double t201;
  double t201_tmp;
  double t201_tmp_tmp;
  double t202;
  double t202_tmp;
  double t202_tmp_tmp;
  double t203;
  double t203_tmp_tmp;
  double t220;
  double t270_tmp_tmp;
  double t271_tmp_tmp;
  double t283_tmp_tmp;
  double t284_tmp_tmp;
  double t296;
  double t296_tmp_tmp;
  double t297;
  double t297_tmp_tmp;
  double t30;
  double t309;
  double t309_tmp_tmp;
  double t310_tmp_tmp;
  double t32;
  double t34;
  double t36;
  double t365;
  double t366;
  double t367;
  double t368;
  double t374;
  double t376;
  double t378;
  double t379;
  double t38;
  double t380;
  double t381;
  double t382;
  double t384_tmp;
  double t39;
  double t390;
  double t390_tmp;
  double t392;
  double t393;
  double t394;
  double t395;
  double t396;
  double t397;
  double t398;
  double t399;
  double t400;
  double t401;
  double t403;
  double t404;
  double t407;
  double t408;
  double t408_tmp;
  double t410;
  double t410_tmp;
  double t412;
  double t412_tmp;
  double t414;
  double t414_tmp;
  double t43;
  double t46;
  double t50;
  double t51;
  double t52;
  double t6;
  double t61;
  double t68;
  double t70;
  double t78;
  double t8;
  double t82;
  double t85;
  double t87;
  double t88;
  double t89;
  double t9;
  double t90;
  double t91;
  double t92;
  double t93;
  double t94;
  double t94_tmp;
  double t95;
  double t97;

  /*     This function was generated by the Symbolic Math Toolbox version 8.6. */
  /*     08-May-2021 00:18:12 */
  t6 = in1[17] + in2[17];
  t8 = in1[16] * 2.0;
  t9 = in2[0] * 2.0;
  t10 = in2[4] * 2.0;
  t11 = in2[8] * 2.0;
  t43 = in2[12] / 2.0;
  t30 = in2[1] * t6;
  t32 = in2[5] * t6;
  t34 = in2[9] * t6;
  t36 = in2[14] * t6;
  t38 = t6 * t6;
  t39 = pow(t6, 3.0);
  t46 = t6 + t8;
  t50 = in2[1] + -in2[3];
  t51 = in2[5] + -in2[7];
  t52 = in2[9] + -in2[11];
  t61 = t6 * 2.0;
  a_tmp = in1[16] - t6;
  t68 = a_tmp * a_tmp;
  t82 = in1[17] / 2.0 + in2[17] / 2.0;
  t70 = t38 / 2.0;
  t78 = -t8 + t61;
  t85 = exp(t6 * -200.0 + in1[16] * 200.0);
  t89 = ((((in2[0] + in1[16] * in2[3]) + in2[1] * t8) + -in2[2]) + t30) + t6 *
    -in2[3];
  t90 = ((((in2[4] + in1[16] * in2[7]) + in2[5] * t8) + -in2[6]) + t32) + t6 *
    -in2[7];
  t91 = ((((in2[8] + in1[16] * in2[11]) + in2[9] * t8) + -in2[10]) + t34) + t6 *
    -in2[11];
  t92 = ((((in2[13] + in1[16] * in2[16]) + in2[14] * t8) + -in2[15]) + t36) + t6
    * -in2[16];
  t87 = 1.0 / (t85 + 1.0);
  t88 = t87 * t87;
  t93 = t68 * t87;
  t94_tmp = pow(a_tmp, 3.0);
  t94 = -t94_tmp * t87;
  t95 = t78 * t87;
  t97 = t93 / 2.0;
  t108 = t38 + -t93;
  t118 = t61 + -t95;
  t144 = (-(t38 * 3.0) + t93) + t46 * t95;
  t61 = ((t6 * t43 + in2[13] * t70) + t36 * t70) + t92 * t93 * -0.5;
  t8 = t78 * t85 * t88;
  t157 = ((((-t9 + -(t30 * 6.0)) + t50 * t95 * 2.0) + t87 * t89 * 2.0) + t50 *
          t68 * t85 * t88 * 200.0) + t8 * t89 * 200.0;
  t158 = ((((-t10 + -(t32 * 6.0)) + t51 * t95 * 2.0) + t87 * t90 * 2.0) + t51 *
          t68 * t85 * t88 * 200.0) + t8 * t90 * 200.0;
  t159 = ((((-t11 + -(t34 * 6.0)) + t52 * t95 * 2.0) + t87 * t91 * 2.0) + t52 *
          t68 * t85 * t88 * 200.0) + t8 * t91 * 200.0;
  t119 = t70 + -t97;
  t120 = t39 + t46 * -t93;
  t124 = t39 / 2.0 + t46 * t93 * -0.5;
  t39 = t93 + -t95 * a_tmp;
  t146 = cos(t61);
  t147 = sin(t61);
  t150 = ((t6 * t9 + t6 * t30 * 3.0) + t50 * -t93) + t89 * -t95;
  t151 = ((t6 * t10 + t6 * t32 * 3.0) + t51 * -t93) + t90 * -t95;
  t152 = (((t6 * t11 + t6 * t34 * 3.0) + t52 * -t93) + t91 * -t95) + 1.0;
  t156_tmp = t68 * t85 * t88;
  t156 = ((((t43 + t6 * t36 * 1.5) + in2[13] * t6) + (in2[14] + -in2[16]) * t93 *
           -0.5) + -(t92 * t95 / 2.0)) + -(t156_tmp * t92 * 100.0);
  t148 = t147 * t147;
  t149 = t146 * t146;
  t153 = t150 * t150;
  t154 = t151 * t151;
  t61 = t152 * t152;
  t8 = (t153 + t154) + t61;
  t220 = (t150 * t157 * 2.0 + t151 * t158 * 2.0) + t152 * t159 * 2.0;
  t161 = 1.0 / (t8 * t8);
  t162 = 1.0 / sqrt(t8);
  t163 = pow(t162, 3.0);
  t8 = t95 * t162 / 2.0;
  t38 = t118 * t162 / 2.0;
  t78 = t39 * t162 / 2.0;
  t70 = t144 * t162 / 2.0;
  t172_tmp = t152 * t162 / 2.0 + 0.5;
  t173 = sqrt(t172_tmp);
  t174 = 1.0 / t173;
  t188 = t8 + -(t95 * t61 * t163 / 2.0);
  t189 = t38 + -(t118 * t61 * t163 / 2.0);
  t194 = t78 + -(t39 * t61 * t163 / 2.0);
  t195 = t70 + -(t144 * t61 * t163 / 2.0);
  t378 = t159 * t162 / 2.0 + -(t152 * t163 * t220 / 4.0);
  t175 = pow(t174, 3.0);
  t190 = t146 * t8 * t174;
  t191 = t147 * t8 * t174;
  t192 = t146 * t38 * t174;
  t193 = t147 * t38 * t174;
  t196 = t146 * t78 * t174;
  t197 = t147 * t78 * t174;
  t198 = t146 * t70 * t174;
  t199 = t147 * t70 * t174;
  t200_tmp_tmp = t146 * t150;
  t30 = t200_tmp_tmp * t162;
  t200 = t30 * t174;
  t201_tmp_tmp = t146 * t151;
  t201_tmp = t201_tmp_tmp * t162;
  t201 = t201_tmp * t174;
  t202_tmp_tmp = t147 * t150;
  t202_tmp = t202_tmp_tmp * t162;
  t202 = t202_tmp * t174;
  t203_tmp_tmp = t147 * t151;
  t9 = t203_tmp_tmp * t162;
  t203 = t9 * t174;
  t270_tmp_tmp = t95 * t146;
  t50 = t270_tmp_tmp * t150;
  t8 = t50 * t151;
  t159 = t8 * t163 * t174 / 2.0;
  t36 = t95 * t147;
  t271_tmp_tmp = t36 * t150;
  t61 = t271_tmp_tmp * t151;
  t43 = t61 * t163 * t174 / 2.0;
  t283_tmp_tmp = t118 * t147;
  b_t283_tmp_tmp = t283_tmp_tmp * t150;
  t78 = b_t283_tmp_tmp * t151;
  t95 = t78 * t163 * t174 / 2.0;
  t284_tmp_tmp = t118 * t146;
  t10 = t284_tmp_tmp * t150;
  t38 = t10 * t151;
  t118 = t38 * t163 * t174 / 2.0;
  t296_tmp_tmp = t39 * t146;
  t32 = t296_tmp_tmp * t150;
  t70 = t32 * t151;
  t296 = t70 * t163 * t174 / 2.0;
  t297_tmp_tmp = t39 * t147;
  b_t297_tmp_tmp = t297_tmp_tmp * t150;
  t39 = b_t297_tmp_tmp * t151;
  t297 = t39 * t163 * t174 / 2.0;
  t309_tmp_tmp = t144 * t146;
  t51 = t309_tmp_tmp * t150;
  t46 = t51 * t151;
  t309 = t46 * t163 * t174 / 2.0;
  t310_tmp_tmp = t144 * t147;
  b_t310_tmp_tmp = t310_tmp_tmp * t150;
  a_tmp = b_t310_tmp_tmp * t151;
  t144 = a_tmp * t163 * t174 / 2.0;
  t384_tmp = t147 * t174;
  t68 = t8 * t152 * t161 * t175 / 8.0;
  t11 = t61 * t152 * t161 * t175 / 8.0;
  t85 = t38 * t152 * t161 * t175 / 8.0;
  t34 = t78 * t152 * t161 * t175 / 8.0;
  t92 = t70 * t152 * t161 * t175 / 8.0;
  t52 = t39 * t152 * t161 * t175 / 8.0;
  t6 = t46 * t152 * t161 * t175 / 8.0;
  t46 = a_tmp * t152 * t161 * t175 / 8.0;
  t365 = t200 + t203;
  t390_tmp = t146 * t174;
  t390 = t147 * t156 * t173 + t390_tmp * t378 / 2.0;
  t366 = t201 + -t202;
  t367 = t82 * t200 / 2.0 + t82 * t203 / 2.0;
  t374 = t93 * t200 / 4.0 + t93 * t203 / 4.0;
  t379 = t119 * t200 / 2.0 + t119 * t203 / 2.0;
  t381 = t124 * t200 / 2.0 + t124 * t203 / 2.0;
  t8 = t270_tmp_tmp * t152;
  t392 = (((t190 + -(t270_tmp_tmp * t153 * t163 * t174 / 2.0)) + -t43) + t8 *
          t153 * t161 * t175 / 8.0) + t11;
  t61 = t36 * t152;
  t395 = (((t191 + -(t36 * t154 * t163 * t174 / 2.0)) + -t159) + t61 * t154 *
          t161 * t175 / 8.0) + t68;
  t38 = t284_tmp_tmp * t152;
  t396 = (((t192 + -(t284_tmp_tmp * t153 * t163 * t174 / 2.0)) + -t95) + t38 *
          t153 * t161 * t175 / 8.0) + t34;
  t78 = t283_tmp_tmp * t152;
  t399 = (((t193 + -(t283_tmp_tmp * t154 * t163 * t174 / 2.0)) + -t118) + t78 *
          t154 * t161 * t175 / 8.0) + t85;
  t70 = t296_tmp_tmp * t152;
  t400 = (((t196 + -(t296_tmp_tmp * t153 * t163 * t174 / 2.0)) + -t297) + t70 *
          t153 * t161 * t175 / 8.0) + t52;
  t39 = t297_tmp_tmp * t152;
  t403 = (((t197 + -(t297_tmp_tmp * t154 * t163 * t174 / 2.0)) + -t296) + t39 *
          t154 * t161 * t175 / 8.0) + t92;
  a_tmp = t309_tmp_tmp * t152;
  t404 = (((t198 + -(t309_tmp_tmp * t153 * t163 * t174 / 2.0)) + -t144) + a_tmp *
          t153 * t161 * t175 / 8.0) + t46;
  t88 = t310_tmp_tmp * t152;
  t407 = (((t199 + -(t310_tmp_tmp * t154 * t163 * t174 / 2.0)) + -t309) + t88 *
          t154 * t161 * t175 / 8.0) + t6;
  t408_tmp = t9 * t175;
  t9 = t30 * t175;
  b_t408_tmp = t50 * t152 * t163 * t174;
  c_t408_tmp = t36 * t151 * t152 * t163 * t174;
  t408 = ((b_t408_tmp / 2.0 + c_t408_tmp / 2.0) + t9 * t188 / 4.0) + t408_tmp *
    t188 / 4.0;
  t410_tmp = t10 * t152 * t163 * t174;
  b_t410_tmp = t283_tmp_tmp * t151 * t152 * t163 * t174;
  t410 = ((b_t410_tmp / 2.0 + t410_tmp / 2.0) + t408_tmp * t189 / 4.0) + t9 *
    t189 / 4.0;
  t412_tmp = t32 * t152 * t163 * t174;
  b_t412_tmp = t297_tmp_tmp * t151 * t152 * t163 * t174;
  t412 = ((t412_tmp / 2.0 + b_t412_tmp / 2.0) + t9 * t194 / 4.0) + t408_tmp *
    t194 / 4.0;
  t414_tmp = t51 * t152 * t163 * t174;
  b_t414_tmp = t310_tmp_tmp * t151 * t152 * t163 * t174;
  t414 = ((t414_tmp / 2.0 + b_t414_tmp / 2.0) + t9 * t195 / 4.0) + t408_tmp *
    t195 / 4.0;
  t368 = t82 * t201 / 2.0 + -(t82 * t202 / 2.0);
  t376 = t93 * t201 / 4.0 + -(t93 * t202 / 4.0);
  t380 = t119 * t201 / 2.0 + -(t119 * t202 / 2.0);
  t382 = t124 * t201 / 2.0 + -(t124 * t202 / 2.0);
  t393 = (((t190 + -(t270_tmp_tmp * t154 * t163 * t174 / 2.0)) + t43) + t8 *
          t154 * t161 * t175 / 8.0) + -t11;
  t394 = (((t191 + -(t36 * t153 * t163 * t174 / 2.0)) + t159) + t61 * t153 *
          t161 * t175 / 8.0) + -t68;
  t397 = (((t192 + -(t284_tmp_tmp * t154 * t163 * t174 / 2.0)) + t95) + t38 *
          t154 * t161 * t175 / 8.0) + -t34;
  t398 = (((t193 + -(t283_tmp_tmp * t153 * t163 * t174 / 2.0)) + t118) + t78 *
          t153 * t161 * t175 / 8.0) + -t85;
  t401 = (((t196 + -(t296_tmp_tmp * t154 * t163 * t174 / 2.0)) + t297) + t70 *
          t154 * t161 * t175 / 8.0) + -t52;
  t196 = (((t197 + -(t297_tmp_tmp * t153 * t163 * t174 / 2.0)) + t296) + t39 *
          t153 * t161 * t175 / 8.0) + -t92;
  t193 = (((t198 + -(t309_tmp_tmp * t154 * t163 * t174 / 2.0)) + t144) + a_tmp *
          t154 * t161 * t175 / 8.0) + -t46;
  t192 = (((t199 + -(t310_tmp_tmp * t153 * t163 * t174 / 2.0)) + t309) + t88 *
          t153 * t161 * t175 / 8.0) + -t6;
  t61 = t202_tmp * t175;
  t8 = t201_tmp * t175;
  t309 = t271_tmp_tmp * t152 * t163 * t174;
  t190 = t270_tmp_tmp * t151 * t152 * t163 * t174;
  t191 = ((t190 / 2.0 + -(t309 / 2.0)) + t8 * t188 / 4.0) + -(t61 * t188 / 4.0);
  t310_tmp_tmp = b_t283_tmp_tmp * t152 * t163 * t174;
  t297_tmp_tmp = t284_tmp_tmp * t151 * t152 * t163 * t174;
  t296 = ((t310_tmp_tmp / 2.0 + -(t297_tmp_tmp / 2.0)) + t61 * t189 / 4.0) +
    -(t8 * t189 / 4.0);
  t283_tmp_tmp = b_t297_tmp_tmp * t152 * t163 * t174;
  t144 = t296_tmp_tmp * t151 * t152 * t163 * t174;
  t297 = ((t144 / 2.0 + -(t283_tmp_tmp / 2.0)) + t8 * t194 / 4.0) + -(t61 * t194
    / 4.0);
  t118 = b_t310_tmp_tmp * t152 * t163 * t174;
  t159 = t309_tmp_tmp * t151 * t152 * t163 * t174;
  t95 = ((t159 / 2.0 + -(t118 / 2.0)) + t8 * t195 / 4.0) + -(t61 * t195 / 4.0);
  t36 = ((((((-(t146 * t157 * t162 * t174 / 2.0) + -(t147 * t158 * t162 * t174 /
    2.0)) + t156 * t201 / 2.0) + -(t156 * t202 / 2.0)) + t200_tmp_tmp * t163 *
           t174 * t220 / 4.0) + t203_tmp_tmp * t163 * t174 * t220 / 4.0) +
         t408_tmp * t378 / 4.0) + t9 * t378 / 4.0;
  t43 = ((((((t146 * t158 * t162 * t174 / 2.0 + -(t147 * t157 * t162 * t174 /
    2.0)) + t156 * t200 / 2.0) + t156 * t203 / 2.0) + t202_tmp_tmp * t163 * t174
           * t220 / 4.0) + -(t201_tmp_tmp * t163 * t174 * t220 / 4.0)) + t61 *
         t378 / 4.0) + -(t8 * t378 / 4.0);
  out1[0] = t108;
  out1[1] = t120;
  out1[2] = t93;
  out1[3] = t94;
  memset(&out1[4], 0, 13U * sizeof(double));
  out1[17] = t150 - t156_tmp * t89 * 200.0;
  out1[18] = 0.0;
  out1[19] = 0.0;
  out1[20] = 0.0;
  out1[21] = 0.0;
  out1[22] = t108;
  out1[23] = t120;
  out1[24] = t93;
  out1[25] = t94;
  memset(&out1[26], 0, 9U * sizeof(double));
  out1[35] = t151 - t156_tmp * t90 * 200.0;
  memset(&out1[36], 0, 8U * sizeof(double));
  out1[44] = t108;
  out1[45] = t120;
  out1[46] = t93;
  out1[47] = t94;
  out1[48] = 0.0;
  out1[49] = 0.0;
  out1[50] = 0.0;
  out1[51] = 0.0;
  out1[52] = 0.0;
  out1[53] = t152 - t156_tmp * t91 * 200.0;
  t85 = t147 * t173;
  t92 = t146 * t173;
  out1[54] = ((t85 * t396 * 2.0 + t92 * t398 * 2.0) - t410_tmp * t366 / 4.0) +
    t310_tmp_tmp * t365 / 4.0;
  out1[55] = ((t85 * t404 * -2.0 - t92 * t192 * 2.0) + t414_tmp * t366 / 4.0) -
    t118 * t365 / 4.0;
  out1[56] = ((t85 * t392 * 2.0 + t92 * t394 * 2.0) - b_t408_tmp * t366 / 4.0) +
    t309 * t365 / 4.0;
  out1[57] = ((t85 * t400 * 2.0 + t92 * t196 * 2.0) - t412_tmp * t366 / 4.0) +
    t283_tmp_tmp * t365 / 4.0;
  out1[58] = ((t92 * t397 * -2.0 + t85 * t399 * 2.0) - t297_tmp_tmp * t366 / 4.0)
    + b_t410_tmp * t365 / 4.0;
  out1[59] = ((t92 * t193 * 2.0 - t85 * t407 * 2.0) + t159 * t366 / 4.0) -
    b_t414_tmp * t365 / 4.0;
  out1[60] = ((t92 * t393 * -2.0 + t85 * t395 * 2.0) - t190 * t366 / 4.0) +
    c_t408_tmp * t365 / 4.0;
  out1[61] = ((t92 * t401 * -2.0 + t85 * t403 * 2.0) - t144 * t366 / 4.0) +
    b_t412_tmp * t365 / 4.0;
  t6 = t390_tmp * t189;
  t88 = t384_tmp * t189;
  out1[62] = ((t92 * t296 * -2.0 - t85 * t410 * 2.0) + t6 * t366 / 2.0) - t88 *
    t365 / 2.0;
  t68 = t390_tmp * t195;
  t34 = t384_tmp * t195;
  out1[63] = ((t92 * t95 * -2.0 + t85 * t414 * 2.0) - t68 * t366 / 2.0) + t34 *
    t365 / 2.0;
  t52 = t390_tmp * t188;
  t11 = t384_tmp * t188;
  out1[64] = ((t92 * t191 * 2.0 - t85 * t408 * 2.0) + t52 * t366 / 2.0) - t11 *
    t365 / 2.0;
  t51 = t390_tmp * t194;
  t39 = t384_tmp * t194;
  out1[65] = ((t92 * t297 * 2.0 - t85 * t412 * 2.0) + t51 * t366 / 2.0) - t39 *
    t365 / 2.0;
  t46 = t82 * t146 * t173;
  a_tmp = t82 * t147 * t173;
  out1[66] = ((t92 * t367 * 2.0 + t85 * t368 * 2.0) - t46 * t365) - a_tmp * t366;
  t9 = t119 * t146 * t173;
  t30 = t119 * t147 * t173;
  out1[67] = ((t92 * t379 * 2.0 + t85 * t380 * 2.0) - t9 * t365) - t30 * t366;
  t50 = t124 * t146 * t173;
  t10 = t124 * t147 * t173;
  out1[68] = ((t92 * t381 * 2.0 + t85 * t382 * 2.0) - t50 * t365) - t10 * t366;
  t32 = t93 * t146 * t173;
  out1[69] = ((t92 * t374 * 2.0 + t85 * t376 * 2.0) - t32 * t365 / 2.0) - t93 *
    t147 * t173 * t366 / 2.0;
  t70 = t87 * t200 * t94_tmp / 4.0 + t87 * t203 * t94_tmp / 4.0;
  t38 = t87 * t202 * t94_tmp * -0.25 + t87 * t201 * t94_tmp / 4.0;
  t78 = t87 * t146 * t173;
  t61 = t87 * t147 * t173;
  out1[70] = ((t92 * t70 * -2.0 - t85 * t38 * 2.0) + t78 * t365 * t94_tmp / 2.0)
    + t61 * t366 * t94_tmp / 2.0;
  t8 = t146 * t156 * t173 - t384_tmp * t378 / 2.0;
  out1[71] = ((-t366 * t390 - t365 * t8) + t92 * t43 * 2.0) + t85 * t36 * 2.0;
  out1[72] = ((t92 * t396 * 2.0 - t85 * t398 * 2.0) + t410_tmp * t365 / 4.0) +
    t310_tmp_tmp * t366 / 4.0;
  out1[73] = ((t92 * t404 * -2.0 + t85 * t192 * 2.0) - t414_tmp * t365 / 4.0) -
    t118 * t366 / 4.0;
  out1[74] = ((t92 * t392 * 2.0 - t85 * t394 * 2.0) + b_t408_tmp * t365 / 4.0) +
    t309 * t366 / 4.0;
  out1[75] = ((t92 * t400 * 2.0 - t85 * t196 * 2.0) + t412_tmp * t365 / 4.0) +
    t283_tmp_tmp * t366 / 4.0;
  out1[76] = ((t85 * t397 * 2.0 + t92 * t399 * 2.0) + t297_tmp_tmp * t365 / 4.0)
    + b_t410_tmp * t366 / 4.0;
  out1[77] = ((t85 * t193 * -2.0 - t92 * t407 * 2.0) - t159 * t365 / 4.0) -
    b_t414_tmp * t366 / 4.0;
  out1[78] = ((t85 * t393 * 2.0 + t92 * t395 * 2.0) + t190 * t365 / 4.0) +
    c_t408_tmp * t366 / 4.0;
  out1[79] = ((t85 * t401 * 2.0 + t92 * t403 * 2.0) + t144 * t365 / 4.0) +
    b_t412_tmp * t366 / 4.0;
  out1[80] = ((t92 * t410 * -2.0 + t85 * t296 * 2.0) - t6 * t365 / 2.0) - t88 *
    t366 / 2.0;
  out1[81] = ((t92 * t414 * 2.0 + t85 * t95 * 2.0) + t68 * t365 / 2.0) + t34 *
    t366 / 2.0;
  out1[82] = ((t92 * t408 * -2.0 - t85 * t191 * 2.0) - t52 * t365 / 2.0) - t11 *
    t366 / 2.0;
  out1[83] = ((t92 * t412 * -2.0 - t85 * t297 * 2.0) - t51 * t365 / 2.0) - t39 *
    t366 / 2.0;
  out1[84] = ((t92 * t368 * 2.0 - t85 * t367 * 2.0) - t46 * t366) + a_tmp * t365;
  out1[85] = ((t92 * t380 * 2.0 - t85 * t379 * 2.0) - t9 * t366) + t30 * t365;
  out1[86] = ((t92 * t382 * 2.0 - t85 * t381 * 2.0) - t50 * t366) + t10 * t365;
  out1[87] = ((t85 * t374 * -2.0 + t92 * t376 * 2.0) - t32 * t366 / 2.0) + t97 *
    t147 * t173 * t365;
  out1[88] = ((t85 * t70 * 2.0 - t92 * t38 * 2.0) + t78 * t366 * t94_tmp / 2.0)
    - t61 * t365 * t94_tmp / 2.0;
  out1[89] = ((t365 * t390 - t366 * t8) + t92 * t36 * 2.0) - t85 * t43 * 2.0;
  out1[90] = t366 * t396 + t365 * t398;
  out1[91] = -t366 * t404 - t365 * t192;
  out1[92] = t366 * t392 + t365 * t394;
  out1[93] = t366 * t400 + t365 * t196;
  out1[94] = -t365 * t397 + t366 * t399;
  out1[95] = t365 * t193 - t366 * t407;
  out1[96] = -t365 * t393 + t366 * t395;
  out1[97] = -t365 * t401 + t366 * t403;
  out1[98] = -t365 * t296 - t366 * t410;
  out1[99] = -t365 * t95 + t366 * t414;
  out1[100] = t365 * t191 - t366 * t408;
  out1[101] = t365 * t297 - t366 * t412;
  out1[102] = ((t365 * t367 + t366 * t368) + t82 * t148 * t172_tmp * 2.0) + t82 *
    t149 * t172_tmp * 2.0;
  out1[103] = ((t365 * t379 + t366 * t380) + t119 * t148 * t172_tmp * 2.0) +
    t119 * t149 * t172_tmp * 2.0;
  out1[104] = ((t365 * t381 + t366 * t382) + t124 * t148 * t172_tmp * 2.0) +
    t124 * t149 * t172_tmp * 2.0;
  out1[105] = ((t365 * t374 + t366 * t376) + t93 * t148 * t172_tmp) + t93 * t149
    * t172_tmp;
  out1[106] = ((-t365 * t70 - t366 * t38) + t94 * t148 * t172_tmp) + t94 * t149 *
    t172_tmp;
  out1[107] = ((t365 * t43 + t366 * t36) + t85 * t390 * 2.0) + t92 * t8 * 2.0;
}

/*
 * File trailer for loadsTt1.c
 *
 * [EOF]
 */
