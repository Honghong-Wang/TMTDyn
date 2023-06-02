/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: sprdmpKx20.c
 *
 * MATLAB Coder version            : 5.1
 * C/C++ source code generated on  : 08-May-2021 03:51:05
 */

/* Include Files */
#include "sprdmpKx20.h"
#include <math.h>

/* Function Definitions */
/*
 * SPRDMPKX20
 *     OUT1 = SPRDMPKX20(IN1,IN2,S,DS,T_SYM)
 * Arguments    : const double in1[33]
 *                const double in2[42]
 *                double s
 *                double out1[6]
 * Return Type  : void
 */
void sprdmpKx20(const double in1[33], const double in2[42], double s, double
                out1[6])
{
  double t10;
  double t120;
  double t120_tmp;
  double t122;
  double t123;
  double t124;
  double t125;
  double t127;
  double t138;
  double t143;
  double t29;
  double t31;
  double t33;
  double t35;
  double t37;
  double t40;
  double t41;
  double t48;
  double t49;
  double t50;
  double t6;
  double t65;
  double t66;
  double t7;
  double t73;
  double t8;
  double t82_tmp;
  double t83;
  double t84;
  double t85;
  double t86;
  double t87;
  double t9;

  /*     This function was generated by the Symbolic Math Toolbox version 8.6. */
  /*     07-May-2021 23:57:25 */
  t6 = in2[17] + s;
  t7 = in1[16] * 2.0;
  t8 = in2[0] * 2.0;
  t9 = in2[4] * 2.0;
  t10 = in2[8] * 2.0;
  t40 = in1[16] * 200.0;
  t41 = in2[12] / 2.0;
  t29 = in2[1] * t6;
  t31 = in2[5] * t6;
  t33 = in2[9] * t6;
  t35 = in2[14] * t6;
  t37 = t6 * t6;
  t48 = in2[1] + -in2[3];
  t49 = in2[5] + -in2[7];
  t50 = in2[9] + -in2[11];
  t73 = in1[16] - t6;
  t65 = t73 * t73;
  t66 = pow(in1[6], 4.0) + -pow(in1[7], 4.0);
  t73 = -t7 + t6 * 2.0;
  t84 = ((((in2[0] + in1[16] * in2[3]) + in2[1] * t7) + -in2[2]) + t29) + t6 *
    -in2[3];
  t85 = ((((in2[4] + in1[16] * in2[7]) + in2[5] * t7) + -in2[6]) + t31) + t6 *
    -in2[7];
  t86 = ((((in2[8] + in1[16] * in2[11]) + in2[9] * t7) + -in2[10]) + t33) + t6 *
    -in2[11];
  t87 = ((((in2[13] + in1[16] * in2[16]) + in2[14] * t7) + -in2[15]) + t35) + t6
    * -in2[16];
  t83 = 1.0 / (exp(t6 * -200.0 + t40) + 1.0);
  t82_tmp = 1.0 / (exp((t40 + -(in1[18] * 200.0)) + -(s * 200.0)) + 1.0);
  t40 = ((t6 * t41 + in2[13] * t37 / 2.0) + t35 * t37 / 2.0) + -(t65 * t83 * t87
    / 2.0);
  t124 = ((t8 + t29 * 6.0) + -(t48 * t73 * t83 * 2.0)) + -(t83 * t84 * 2.0);
  t125 = ((t9 + t31 * 6.0) + -(t49 * t73 * t83 * 2.0)) + -(t83 * t85 * 2.0);
  t37 = ((t10 + t33 * 6.0) + -(t50 * t73 * t83 * 2.0)) + -(t83 * t86 * 2.0);
  t7 = t73 * t83;
  t127 = ((t6 * t8 + t6 * t29 * 3.0) + -(t48 * t65 * t83)) + -(t7 * t84);
  t84 = ((t6 * t9 + t6 * t31 * 3.0) + -(t49 * t65 * t83)) + -(t7 * t85);
  t73 = (((t6 * t10 + t6 * t33 * 3.0) + -(t50 * t65 * t83)) + -(t7 * t86)) + 1.0;
  t35 = (((t41 + t6 * t35 * 1.5) + in2[13] * t6) + -((in2[14] + -in2[16]) * t65 *
          t83 / 2.0)) + -(t7 * t87 / 2.0);
  t120_tmp = in1[3] * (t82_tmp - 1.0);
  t120 = in1[2] * t66 * 3.1415926535897931 / 4.0 + t120_tmp *
    2.5854448509802781E-11;
  t122 = cos(t40);
  t123 = sin(t40);
  t65 = (t124 * t127 * 2.0 + t125 * t84 * 2.0) + t37 * t73 * 2.0;
  t138 = 1.0 / sqrt((t127 * t127 + t84 * t84) + t73 * t73);
  t6 = pow(t138, 3.0);
  t143 = sqrt(t73 * t138 / 2.0 + 0.5);
  t41 = 1.0 / t143;
  t9 = t37 * t138 / 2.0 + -(t73 * t6 * t65 / 4.0);
  t31 = pow(t41, 3.0);
  t49 = t122 * t127;
  t86 = t49 * t138;
  t8 = t86 * t41;
  t29 = t122 * t84;
  t48 = t29 * t138;
  t87 = t48 * t41;
  t40 = t123 * t127;
  t37 = t40 * t138;
  t85 = t37 * t41;
  t73 = t123 * t84;
  t84 = t73 * t138;
  t7 = t84 * t41;
  t83 = t8 + t7;
  t10 = t122 * t35 * t143 + t123 * t41 * t9 / 2.0;
  t33 = t87 + -t85;
  t50 = t123 * t35 * t143 + -(t122 * t41 * t9 / 2.0);
  t37 = ((((((t123 * t124 * t138 * t41 / 2.0 + -(t122 * t125 * t138 * t41 / 2.0))
             + t35 * t8 / 2.0) + t35 * t7 / 2.0) + t29 * t6 * t41 * t65 / 4.0) +
          -(t40 * t6 * t41 * t65 / 4.0)) + t48 * t31 * t9 / 4.0) + -(t37 * t31 *
    t9 / 4.0);
  t40 = ((((((-(t123 * t125 * t138 * t41 / 2.0) + -(t122 * t124 * t138 * t41 /
    2.0)) + t35 * t85 / 2.0) + -(t35 * t87 / 2.0)) + t49 * t6 * t41 * t65 / 4.0)
          + t73 * t6 * t41 * t65 / 4.0) + t86 * t31 * t9 / 4.0) + t84 * t31 * t9
    / 4.0;
  out1[0] = 0.0;
  out1[1] = 0.0;
  out1[2] = (1.0 / t138 - 1.0) * (in1[2] * 3.1415926535897931 * (in1[6] * in1[6]
    - in1[7] * in1[7]) - t120_tmp * 3.1415926535897931 * (in1[8] * in1[8] - in1
    [9] * in1[9]));
  t7 = t122 * t143;
  t73 = t123 * t143;
  out1[3] = -t120 * (((t83 * t10 + t33 * t50) - t7 * t37 * 2.0) + t73 * t40 *
                     2.0);
  out1[4] = -t120 * (((-t83 * t50 + t33 * t10) + t7 * t40 * 2.0) + t73 * t37 *
                     2.0);
  out1[5] = (in1[4] * t66 * 3.1415926535897931 / 2.0 - in1[5] * (t82_tmp - 1.0) *
             3.1415926535897931 * (pow(in1[8], 4.0) - pow(in1[9], 4.0)) / 2.0) *
    (((t83 * t37 - t33 * t40) + t7 * t10 * 2.0) + t73 * t50 * 2.0);
}

/*
 * File trailer for sprdmpKx20.c
 *
 * [EOF]
 */