/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: loadsTt1.c
 *
 * MATLAB Coder version            : 5.1
 * C/C++ source code generated on  : 08-May-2021 01:57:20
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
 *                const double in2[38]
 *                double out1[102]
 * Return Type  : void
 */
void loadsTt1(const double in1[33], const double in2[38], double out1[102])
{
  double b_t215_tmp_tmp;
  double b_t254_tmp_tmp;
  double b_t330_tmp;
  double b_t332_tmp;
  double b_t334_tmp;
  double b_t336_tmp;
  double t106;
  double t107;
  double t109;
  double t110;
  double t111;
  double t112;
  double t113;
  double t114;
  double t115;
  double t116;
  double t117;
  double t120;
  double t121;
  double t122;
  double t128_tmp;
  double t129;
  double t130;
  double t131;
  double t140;
  double t141;
  double t142;
  double t143;
  double t144;
  double t145;
  double t146;
  double t147;
  double t148;
  double t149;
  double t150;
  double t151;
  double t152;
  double t153;
  double t153_tmp;
  double t154;
  double t154_tmp;
  double t155;
  double t2;
  double t214;
  double t214_tmp_tmp;
  double t215;
  double t215_tmp_tmp;
  double t227;
  double t227_tmp_tmp;
  double t228;
  double t228_tmp_tmp;
  double t23;
  double t240;
  double t240_tmp_tmp;
  double t241;
  double t243_tmp;
  double t247_tmp;
  double t25;
  double t253;
  double t253_tmp_tmp;
  double t254;
  double t254_tmp_tmp;
  double t266;
  double t27;
  double t271;
  double t274;
  double t275;
  double t278;
  double t279;
  double t29;
  double t293_tmp;
  double t294_tmp;
  double t302;
  double t303;
  double t304;
  double t305;
  double t306;
  double t308;
  double t309;
  double t31;
  double t310;
  double t311;
  double t312;
  double t313;
  double t314;
  double t315;
  double t316;
  double t317;
  double t318;
  double t32;
  double t321;
  double t322;
  double t324;
  double t325;
  double t326;
  double t327;
  double t329;
  double t330;
  double t330_tmp;
  double t332;
  double t332_tmp;
  double t334;
  double t334_tmp;
  double t336;
  double t336_tmp;
  double t46;
  double t60;
  double t65;
  double t69;
  double t74;
  double t75;
  double t75_tmp;
  double t77;
  double t78;
  double t88;
  double t9;
  double t94;
  double t95;
  double t96;
  double t97;

  /*     This function was generated by the Symbolic Math Toolbox version 8.6. */
  /*     07-May-2021 20:40:17 */
  t2 = in1[18] + in1[17];
  t9 = in1[16] * 2.0;
  t23 = in2[1] * t2;
  t25 = in2[5] * t2;
  t27 = in2[9] * t2;
  t29 = in2[14] * t2;
  t31 = t2 * t2;
  t32 = pow(t2, 3.0);
  t46 = t2 + t9;
  t121 = in1[16] - t2;
  t65 = in1[18] / 2.0 + in1[17] / 2.0;
  t60 = t31 / 2.0;
  t69 = 1.0 / (exp(t2 * -200.0 + in1[16] * 200.0) + 1.0);
  t74 = t121 * t121 * t69;
  t75_tmp = pow(t121, 3.0);
  t75 = -t75_tmp * t69;
  t77 = (t2 * 2.0 + -t9) * t69;
  t78 = t74 / 2.0;
  t88 = t31 + -t74;
  t94 = t2 * 2.0 + -t77;
  t107 = (-(t31 * 3.0) + t74) + t46 * t77;
  t31 = ((in2[12] * t2 / 2.0 + in2[13] * t60) + t29 * t60) + (((((in2[13] + in1
    [16] * in2[16]) + in2[14] * t9) + -in2[15]) + t29) + -(in2[16] * t2)) * t74 *
    -0.5;
  t95 = t32 + t46 * -t74;
  t96 = t60 + -t78;
  t97 = t32 / 2.0 + t46 * t74 * -0.5;
  t106 = t74 + -t77 * t121;
  t109 = cos(t31);
  t110 = sin(t31);
  t113 = ((in2[0] * t2 * 2.0 + t2 * t23 * 3.0) + (in2[1] + -in2[3]) * -t74) +
    (((((in2[0] + in1[16] * in2[3]) + in2[1] * t9) + -in2[2]) + t23) + t2 *
     -in2[3]) * -t77;
  t114 = ((in2[4] * t2 * 2.0 + t2 * t25 * 3.0) + (in2[5] + -in2[7]) * -t74) +
    (((((in2[4] + in1[16] * in2[7]) + in2[5] * t9) + -in2[6]) + t25) + t2 *
     -in2[7]) * -t77;
  t115 = (((in2[8] * t2 * 2.0 + t2 * t27 * 3.0) + (in2[9] + -in2[11]) * -t74) +
          (((((in2[8] + in1[16] * in2[11]) + in2[9] * t9) + -in2[10]) + t27) +
           t2 * -in2[11]) * -t77) + 1.0;
  t111 = t109 * t109;
  t112 = t110 * t110;
  t116 = t113 * t113;
  t117 = t114 * t114;
  t29 = t115 * t115;
  t31 = (t116 + t117) + t29;
  t120 = 1.0 / (t31 * t31);
  t121 = 1.0 / sqrt(t31);
  t122 = pow(t121, 3.0);
  t31 = t77 * t121 / 2.0;
  t60 = t94 * t121 / 2.0;
  t32 = t106 * t121 / 2.0;
  t46 = t107 * t121 / 2.0;
  t128_tmp = t115 * t121 / 2.0 + 0.5;
  t129 = sqrt(t128_tmp);
  t130 = 1.0 / t129;
  t140 = t31 + -(t77 * t29 * t122 / 2.0);
  t141 = t60 + -(t94 * t29 * t122 / 2.0);
  t146 = t32 + -(t106 * t29 * t122 / 2.0);
  t147 = t46 + -(t107 * t29 * t122 / 2.0);
  t131 = pow(t130, 3.0);
  t142 = t109 * t31 * t130;
  t143 = t110 * t31 * t130;
  t144 = t109 * t60 * t130;
  t145 = t110 * t60 * t130;
  t148 = t109 * t32 * t130;
  t149 = t110 * t32 * t130;
  t150 = t109 * t46 * t130;
  t151 = t110 * t46 * t130;
  t27 = t110 * t113 * t121;
  t152 = t27 * t130;
  t153_tmp = t110 * t114 * t121;
  t153 = t153_tmp * t130;
  t154_tmp = t109 * t113 * t121;
  t154 = t154_tmp * t130;
  t9 = t109 * t114 * t121;
  t155 = t9 * t130;
  t214_tmp_tmp = t77 * t109;
  t121 = t214_tmp_tmp * t113;
  t29 = t121 * t114;
  t214 = t29 * t122 * t130 / 2.0;
  t215_tmp_tmp = t77 * t110;
  b_t215_tmp_tmp = t215_tmp_tmp * t113;
  t60 = b_t215_tmp_tmp * t114;
  t215 = t60 * t122 * t130 / 2.0;
  t227_tmp_tmp = t94 * t109;
  t77 = t227_tmp_tmp * t113;
  t32 = t77 * t114;
  t227 = t32 * t122 * t130 / 2.0;
  t327 = t94 * t110;
  t228_tmp_tmp = t327 * t113;
  t46 = t228_tmp_tmp * t114;
  t228 = t46 * t122 * t130 / 2.0;
  t240_tmp_tmp = t106 * t110;
  t31 = t240_tmp_tmp * t113;
  t25 = t31 * t114;
  t240 = t25 * t122 * t130 / 2.0;
  t324 = t106 * t109;
  t94 = t324 * t113;
  t23 = t94 * t114;
  t241 = t23 * t122 * t130 / 2.0;
  t243_tmp = t31 * t115 * t122 * t130;
  t247_tmp = t324 * t114 * t115 * t122 * t130;
  t253_tmp_tmp = t107 * t109;
  t106 = t253_tmp_tmp * t113;
  t2 = t106 * t114;
  t253 = t2 * t122 * t130 / 2.0;
  t254_tmp_tmp = t107 * t110;
  b_t254_tmp_tmp = t254_tmp_tmp * t113;
  t31 = b_t254_tmp_tmp * t114;
  t254 = t31 * t122 * t130 / 2.0;
  t266 = t29 * t115 * t120 * t131 / 8.0;
  t113 = t60 * t115 * t120 * t131 / 8.0;
  t107 = t32 * t115 * t120 * t131 / 8.0;
  t271 = t46 * t115 * t120 * t131 / 8.0;
  t274 = t23 * t115 * t120 * t131 / 8.0;
  t275 = t25 * t115 * t120 * t131 / 8.0;
  t278 = t31 * t115 * t120 * t131 / 8.0;
  t279 = t2 * t115 * t120 * t131 / 8.0;
  t293_tmp = t9 * t131;
  t294_tmp = t27 * t131;
  t302 = t153 + t154;
  t303 = t152 + -t155;
  t304 = t65 * t154 / 2.0 + t65 * t153 / 2.0;
  t306 = t74 * t154 / 4.0 + t74 * t153 / 4.0;
  t309 = t69 * t155 * t75_tmp * -0.25 + t69 * t152 * t75_tmp / 4.0;
  t310 = t96 * t154 / 2.0 + t96 * t153 / 2.0;
  t312 = t97 * t154 / 2.0 + t97 * t153 / 2.0;
  t60 = t214_tmp_tmp * t115;
  t314 = (((t142 + -(t214_tmp_tmp * t116 * t122 * t130 / 2.0)) + -t215) + t60 *
          t116 * t120 * t131 / 8.0) + t113;
  t32 = t215_tmp_tmp * t115;
  t317 = (((t143 + -(t215_tmp_tmp * t117 * t122 * t130 / 2.0)) + -t214) + t32 *
          t117 * t120 * t131 / 8.0) + t266;
  t46 = t227_tmp_tmp * t115;
  t318 = (((t144 + -(t227_tmp_tmp * t116 * t122 * t130 / 2.0)) + -t228) + t46 *
          t116 * t120 * t131 / 8.0) + t271;
  t23 = t327 * t115;
  t321 = (((t145 + -(t327 * t117 * t122 * t130 / 2.0)) + -t227) + t23 * t117 *
          t120 * t131 / 8.0) + t107;
  t25 = t324 * t115;
  t322 = (((t148 + -(t324 * t116 * t122 * t130 / 2.0)) + -t240) + t25 * t116 *
          t120 * t131 / 8.0) + t275;
  t2 = t240_tmp_tmp * t115;
  t325 = (((t149 + -(t240_tmp_tmp * t117 * t122 * t130 / 2.0)) + -t241) + t2 *
          t117 * t120 * t131 / 8.0) + t274;
  t9 = t253_tmp_tmp * t115;
  t326 = (((t150 + -(t253_tmp_tmp * t116 * t122 * t130 / 2.0)) + -t254) + t9 *
          t116 * t120 * t131 / 8.0) + t278;
  t27 = t254_tmp_tmp * t115;
  t329 = (((t151 + -(t254_tmp_tmp * t117 * t122 * t130 / 2.0)) + -t253) + t27 *
          t117 * t120 * t131 / 8.0) + t279;
  t29 = t154_tmp * t131;
  t31 = t153_tmp * t131;
  t330_tmp = t121 * t115 * t122 * t130;
  b_t330_tmp = t215_tmp_tmp * t114 * t115 * t122 * t130;
  t330 = ((t330_tmp / 2.0 + b_t330_tmp / 2.0) + t29 * t140 / 4.0) + t31 * t140 /
    4.0;
  t332_tmp = t77 * t115 * t122 * t130;
  b_t332_tmp = t327 * t114 * t115 * t122 * t130;
  t332 = ((t332_tmp / 2.0 + b_t332_tmp / 2.0) + t29 * t141 / 4.0) + t31 * t141 /
    4.0;
  t334_tmp = t94 * t115 * t122 * t130;
  b_t334_tmp = t240_tmp_tmp * t114 * t115 * t122 * t130;
  t334 = ((b_t334_tmp / 2.0 + t334_tmp / 2.0) + t29 * t146 / 4.0) + t31 * t146 /
    4.0;
  t336_tmp = t106 * t115 * t122 * t130;
  b_t336_tmp = t254_tmp_tmp * t114 * t115 * t122 * t130;
  t336 = ((t336_tmp / 2.0 + b_t336_tmp / 2.0) + t29 * t147 / 4.0) + t31 * t147 /
    4.0;
  t305 = t65 * t155 / 2.0 + -(t65 * t152 / 2.0);
  t308 = t74 * t155 / 4.0 + -(t74 * t152 / 4.0);
  t311 = t96 * t155 / 2.0 + -(t96 * t152 / 2.0);
  t313 = t97 * t155 / 2.0 + -(t97 * t152 / 2.0);
  t315 = (((t142 + -(t214_tmp_tmp * t117 * t122 * t130 / 2.0)) + t215) + t60 *
          t117 * t120 * t131 / 8.0) + -t113;
  t316 = (((t143 + -(t215_tmp_tmp * t116 * t122 * t130 / 2.0)) + t214) + t32 *
          t116 * t120 * t131 / 8.0) + -t266;
  t143 = (((t144 + -(t227_tmp_tmp * t117 * t122 * t130 / 2.0)) + t228) + t46 *
          t117 * t120 * t131 / 8.0) + -t271;
  t142 = (((t145 + -(t327 * t116 * t122 * t130 / 2.0)) + t227) + t23 * t116 *
          t120 * t131 / 8.0) + -t107;
  t227 = (((t148 + -(t324 * t117 * t122 * t130 / 2.0)) + t240) + t25 * t117 *
          t120 * t131 / 8.0) + -t275;
  t324 = (((t149 + -(t240_tmp_tmp * t116 * t122 * t130 / 2.0)) + t241) + t2 *
          t116 * t120 * t131 / 8.0) + -t274;
  t327 = (((t150 + -(t253_tmp_tmp * t117 * t122 * t130 / 2.0)) + t254) + t9 *
          t117 * t120 * t131 / 8.0) + -t278;
  t214 = (((t151 + -(t254_tmp_tmp * t116 * t122 * t130 / 2.0)) + t253) + t27 *
          t116 * t120 * t131 / 8.0) + -t279;
  t254 = b_t215_tmp_tmp * t115 * t122 * t130;
  t215_tmp_tmp = t214_tmp_tmp * t114 * t115 * t122 * t130;
  t228 = ((t215_tmp_tmp / 2.0 + -(t254 / 2.0)) + t293_tmp * t140 / 4.0) +
    -(t294_tmp * t140 / 4.0);
  t152 = t228_tmp_tmp * t115 * t122 * t130;
  t155 = t227_tmp_tmp * t114 * t115 * t122 * t130;
  t215 = ((t155 / 2.0 + -(t152 / 2.0)) + t293_tmp * t141 / 4.0) + -(t294_tmp *
    t141 / 4.0);
  t274 = b_t254_tmp_tmp * t115 * t122 * t130;
  t279 = t253_tmp_tmp * t114 * t115 * t122 * t130;
  t266 = ((t279 / 2.0 + -(t274 / 2.0)) + t293_tmp * t147 / 4.0) + -(t294_tmp *
    t147 / 4.0);
  out1[0] = t88;
  out1[1] = t95;
  out1[2] = t74;
  out1[3] = t75;
  memset(&out1[4], 0, 17U * sizeof(double));
  out1[21] = t88;
  out1[22] = t95;
  out1[23] = t74;
  out1[24] = t75;
  memset(&out1[25], 0, 17U * sizeof(double));
  out1[42] = t88;
  out1[43] = t95;
  out1[44] = t74;
  out1[45] = t75;
  out1[46] = 0.0;
  out1[47] = 0.0;
  out1[48] = 0.0;
  out1[49] = 0.0;
  out1[50] = 0.0;
  t271 = t110 * t129;
  t275 = t109 * t129;
  out1[51] = ((t271 * t318 * 2.0 + t275 * t142 * 2.0) + t332_tmp * t303 / 4.0) +
    t152 * t302 / 4.0;
  out1[52] = ((t271 * t326 * -2.0 - t275 * t214 * 2.0) - t336_tmp * t303 / 4.0)
    - t274 * t302 / 4.0;
  out1[53] = ((t271 * t314 * 2.0 + t275 * t316 * 2.0) + t330_tmp * t303 / 4.0) +
    t254 * t302 / 4.0;
  out1[54] = ((t271 * t322 * 2.0 + t275 * t324 * 2.0) + t334_tmp * t303 / 4.0) +
    t243_tmp * t302 / 4.0;
  out1[55] = ((t275 * t143 * -2.0 + t271 * t321 * 2.0) + t155 * t303 / 4.0) +
    b_t332_tmp * t302 / 4.0;
  out1[56] = ((t275 * t327 * 2.0 - t271 * t329 * 2.0) - t279 * t303 / 4.0) -
    b_t336_tmp * t302 / 4.0;
  out1[57] = ((t275 * t315 * -2.0 + t271 * t317 * 2.0) + t215_tmp_tmp * t303 /
              4.0) + b_t330_tmp * t302 / 4.0;
  out1[58] = ((t275 * t227 * -2.0 + t271 * t325 * 2.0) + t247_tmp * t303 / 4.0)
    + b_t334_tmp * t302 / 4.0;
  t278 = t109 * t130;
  t154_tmp = t110 * t130;
  t153_tmp = t278 * t141;
  t113 = t154_tmp * t141;
  out1[59] = ((t275 * t215 * 2.0 - t271 * t332 * 2.0) - t153_tmp * t303 / 2.0) -
    t113 * t302 / 2.0;
  t107 = t278 * t147;
  t94 = t154_tmp * t147;
  out1[60] = ((t275 * t266 * -2.0 + t271 * t336 * 2.0) + t107 * t303 / 2.0) +
    t94 * t302 / 2.0;
  t106 = t278 * t140;
  t77 = t154_tmp * t140;
  out1[61] = ((t275 * t228 * 2.0 - t271 * t330 * 2.0) - t106 * t303 / 2.0) - t77
    * t302 / 2.0;
  t121 = ((t243_tmp / 2.0 - t247_tmp / 2.0) - t293_tmp * t146 / 4.0) + t294_tmp *
    t146 / 4.0;
  t278 *= t146;
  t154_tmp *= t146;
  out1[62] = ((t275 * t121 * -2.0 - t271 * t334 * 2.0) - t278 * t303 / 2.0) -
    t154_tmp * t302 / 2.0;
  t32 = t65 * t109 * t129;
  t46 = t65 * t110 * t129;
  out1[63] = ((t275 * t304 * 2.0 + t271 * t305 * 2.0) - t32 * t302) + t46 * t303;
  t23 = t96 * t109 * t129;
  t25 = t96 * t110 * t129;
  out1[64] = ((t275 * t310 * 2.0 + t271 * t311 * 2.0) - t23 * t302) + t25 * t303;
  t2 = t97 * t109 * t129;
  t9 = t97 * t110 * t129;
  out1[65] = ((t275 * t312 * 2.0 + t271 * t313 * 2.0) - t2 * t302) + t9 * t303;
  t27 = t74 * t109 * t129;
  out1[66] = ((t275 * t306 * 2.0 + t271 * t308 * 2.0) - t27 * t302 / 2.0) + t74 *
    t110 * t129 * t303 / 2.0;
  t60 = t69 * t153 * t75_tmp / 4.0 + t69 * t154 * t75_tmp / 4.0;
  t29 = t69 * t109 * t129;
  t31 = t69 * t110 * t129;
  out1[67] = ((t275 * t60 * -2.0 + t271 * t309 * 2.0) + t29 * t302 * t75_tmp /
              2.0) - t31 * t303 * t75_tmp / 2.0;
  out1[68] = ((t275 * t318 * 2.0 - t271 * t142 * 2.0) + t332_tmp * t302 / 4.0) -
    t152 * t303 / 4.0;
  out1[69] = ((t275 * t326 * -2.0 + t271 * t214 * 2.0) - t336_tmp * t302 / 4.0)
    + t274 * t303 / 4.0;
  out1[70] = ((t275 * t314 * 2.0 - t271 * t316 * 2.0) + t330_tmp * t302 / 4.0) -
    t254 * t303 / 4.0;
  out1[71] = ((t275 * t322 * 2.0 - t271 * t324 * 2.0) + t334_tmp * t302 / 4.0) -
    t243_tmp * t303 / 4.0;
  out1[72] = ((t271 * t143 * 2.0 + t275 * t321 * 2.0) + t155 * t302 / 4.0) -
    b_t332_tmp * t303 / 4.0;
  out1[73] = ((t271 * t327 * -2.0 - t275 * t329 * 2.0) - t279 * t302 / 4.0) +
    b_t336_tmp * t303 / 4.0;
  out1[74] = ((t271 * t315 * 2.0 + t275 * t317 * 2.0) + t215_tmp_tmp * t302 /
              4.0) - b_t330_tmp * t303 / 4.0;
  out1[75] = ((t271 * t227 * 2.0 + t275 * t325 * 2.0) + t247_tmp * t302 / 4.0) -
    b_t334_tmp * t303 / 4.0;
  out1[76] = ((t275 * t332 * -2.0 - t271 * t215 * 2.0) - t153_tmp * t302 / 2.0)
    + t113 * t303 / 2.0;
  out1[77] = ((t275 * t336 * 2.0 + t271 * t266 * 2.0) + t107 * t302 / 2.0) - t94
    * t303 / 2.0;
  out1[78] = ((t275 * t330 * -2.0 - t271 * t228 * 2.0) - t106 * t302 / 2.0) +
    t77 * t303 / 2.0;
  out1[79] = ((t271 * t121 * 2.0 - t275 * t334 * 2.0) - t278 * t302 / 2.0) +
    t154_tmp * t303 / 2.0;
  out1[80] = ((t275 * t305 * 2.0 - t271 * t304 * 2.0) + t32 * t303) + t46 * t302;
  out1[81] = ((t275 * t311 * 2.0 - t271 * t310 * 2.0) + t23 * t303) + t25 * t302;
  out1[82] = ((t275 * t313 * 2.0 - t271 * t312 * 2.0) + t2 * t303) + t9 * t302;
  out1[83] = ((t271 * t306 * -2.0 + t275 * t308 * 2.0) + t27 * t303 / 2.0) + t78
    * t110 * t129 * t302;
  out1[84] = ((t271 * t60 * 2.0 + t275 * t309 * 2.0) - t29 * t303 * t75_tmp /
              2.0) - t31 * t302 * t75_tmp / 2.0;
  out1[85] = -t303 * t318 + t302 * t142;
  out1[86] = t303 * t326 - t302 * t214;
  out1[87] = -t303 * t314 + t302 * t316;
  out1[88] = -t303 * t322 + t302 * t324;
  out1[89] = -t302 * t143 - t303 * t321;
  out1[90] = t302 * t327 + t303 * t329;
  out1[91] = -t302 * t315 - t303 * t317;
  out1[92] = -t302 * t227 - t303 * t325;
  out1[93] = t302 * t215 + t303 * t332;
  out1[94] = -t302 * t266 - t303 * t336;
  out1[95] = t302 * t228 + t303 * t330;
  out1[96] = t303 * t334 - t302 * t121;
  out1[97] = ((t302 * t304 - t303 * t305) + t65 * t111 * t128_tmp * 2.0) + t65 *
    t112 * t128_tmp * 2.0;
  out1[98] = ((t302 * t310 - t303 * t311) + t96 * t111 * t128_tmp * 2.0) + t96 *
    t112 * t128_tmp * 2.0;
  out1[99] = ((t302 * t312 - t303 * t313) + t97 * t111 * t128_tmp * 2.0) + t97 *
    t112 * t128_tmp * 2.0;
  out1[100] = ((t302 * t306 - t303 * t308) + t74 * t111 * t128_tmp) + t74 * t112
    * t128_tmp;
  out1[101] = ((-t303 * t309 - t302 * t60) + t75 * t111 * t128_tmp) + t75 * t112
    * t128_tmp;
}

/*
 * File trailer for loadsTt1.c
 *
 * [EOF]
 */
