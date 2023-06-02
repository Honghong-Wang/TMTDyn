/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: sprdmpKx19.c
 *
 * MATLAB Coder version            : 5.1
 * C/C++ source code generated on  : 08-May-2021 01:57:20
 */

/* Include Files */
#include "sprdmpKx19.h"
#include <math.h>

/* Function Definitions */
/*
 * SPRDMPKX19
 *     OUT1 = SPRDMPKX19(IN1,IN2,S,DS,T_SYM)
 * Arguments    : const double in1[33]
 *                const double in2[38]
 *                double s
 *                double out1[6]
 * Return Type  : void
 */
void sprdmpKx19(const double in1[33], const double in2[38], double s, double
                out1[6])
{
  double t10;
  double t11;
  double t114;
  double t114_tmp;
  double t116;
  double t117;
  double t118;
  double t119;
  double t120;
  double t122;
  double t127;
  double t137;
  double t138;
  double t2;
  double t29;
  double t31;
  double t33;
  double t35;
  double t37;
  double t41;
  double t47;
  double t48;
  double t49;
  double t63;
  double t64;
  double t71;
  double t77;
  double t78;
  double t79;
  double t8;
  double t80;
  double t81;
  double t9;

  /*     This function was generated by the Symbolic Math Toolbox version 8.6. */
  /*     07-May-2021 20:23:40 */
  t2 = in1[18] + s;
  t8 = in1[16] * 2.0;
  t9 = in2[0] * 2.0;
  t10 = in2[4] * 2.0;
  t11 = in2[8] * 2.0;
  t41 = in2[12] / 2.0;
  t29 = in2[1] * t2;
  t31 = in2[5] * t2;
  t33 = in2[9] * t2;
  t35 = in2[14] * t2;
  t37 = t2 * t2;
  t47 = in2[1] + -in2[3];
  t48 = in2[5] + -in2[7];
  t49 = in2[9] + -in2[11];
  t78 = in1[16] - t2;
  t63 = t78 * t78;
  t64 = pow(in1[6], 4.0) + -pow(in1[7], 4.0);
  t71 = -t8 + t2 * 2.0;
  t78 = ((((in2[0] + in1[16] * in2[3]) + in2[1] * t8) + -in2[2]) + t29) + t2 *
    -in2[3];
  t79 = ((((in2[4] + in1[16] * in2[7]) + in2[5] * t8) + -in2[6]) + t31) + t2 *
    -in2[7];
  t80 = ((((in2[8] + in1[16] * in2[11]) + in2[9] * t8) + -in2[10]) + t33) + t2 *
    -in2[11];
  t81 = ((((in2[13] + in1[16] * in2[16]) + in2[14] * t8) + -in2[15]) + t35) + t2
    * -in2[16];
  t77 = 1.0 / (exp(t2 * -200.0 + in1[16] * 200.0) + 1.0);
  t114_tmp = in1[3] * (t77 - 1.0);
  t114 = in1[2] * t64 * 3.1415926535897931 / 4.0 + t114_tmp *
    2.5854448509802781E-11;
  t37 = ((t2 * t41 + in2[13] * t37 / 2.0) + t35 * t37 / 2.0) + -(t63 * t77 * t81
    / 2.0);
  t118 = ((t9 + t29 * 6.0) + -(t47 * t71 * t77 * 2.0)) + -(t77 * t78 * 2.0);
  t119 = ((t10 + t31 * 6.0) + -(t48 * t71 * t77 * 2.0)) + -(t77 * t79 * 2.0);
  t120 = ((t11 + t33 * 6.0) + -(t49 * t71 * t77 * 2.0)) + -(t77 * t80 * 2.0);
  t8 = t71 * t77;
  t71 = ((t2 * t9 + t2 * t29 * 3.0) + -(t47 * t63 * t77)) + -(t8 * t78);
  t122 = ((t2 * t10 + t2 * t31 * 3.0) + -(t48 * t63 * t77)) + -(t8 * t79);
  t78 = (((t2 * t11 + t2 * t33 * 3.0) + -(t49 * t63 * t77)) + -(t8 * t80)) + 1.0;
  t127 = (((t41 + t2 * t35 * 1.5) + in2[13] * t2) + -((in2[14] + -in2[16]) * t63
           * t77 / 2.0)) + -(t8 * t81 / 2.0);
  t116 = cos(t37);
  t117 = sin(t37);
  t33 = (t118 * t71 * 2.0 + t119 * t122 * 2.0) + t120 * t78 * 2.0;
  t35 = 1.0 / sqrt((t71 * t71 + t122 * t122) + t78 * t78);
  t49 = pow(t35, 3.0);
  t137 = sqrt(t78 * t35 / 2.0 + 0.5);
  t138 = 1.0 / t137;
  t11 = t120 * t35 / 2.0 + -(t78 * t49 * t33 / 4.0);
  t31 = pow(t138, 3.0);
  t9 = t116 * t71;
  t29 = t9 * t35;
  t48 = t29 * t138;
  t80 = t116 * t122;
  t81 = t80 * t35;
  t47 = t81 * t138;
  t79 = t117 * t71;
  t10 = t79 * t35;
  t71 = t10 * t138;
  t8 = t117 * t122;
  t37 = t8 * t35;
  t78 = t37 * t138;
  t63 = t48 + t78;
  t2 = t116 * t127 * t137 + t117 * t138 * t11 / 2.0;
  t41 = t47 + -t71;
  t9 = ((((((-(t116 * t118 * t35 * t138 / 2.0) + -(t117 * t119 * t35 * t138 /
              2.0)) + t127 * t71 / 2.0) + -(t127 * t47 / 2.0)) + t9 * t49 * t138
          * t33 / 4.0) + t8 * t49 * t138 * t33 / 4.0) + t29 * t31 * t11 / 4.0) +
    t37 * t31 * t11 / 4.0;
  t71 = ((((((t117 * t118 * t35 * t138 / 2.0 + -(t116 * t119 * t35 * t138 / 2.0))
             + t127 * t48 / 2.0) + t127 * t78 / 2.0) + t80 * t49 * t138 * t33 /
           4.0) + -(t79 * t49 * t138 * t33 / 4.0)) + t81 * t31 * t11 / 4.0) +
    -(t10 * t31 * t11 / 4.0);
  out1[0] = 0.0;
  out1[1] = 0.0;
  out1[2] = (1.0 / t35 - 1.0) * (in1[2] * 3.1415926535897931 * (in1[6] * in1[6]
    - in1[7] * in1[7]) - t114_tmp * 3.1415926535897931 * (in1[8] * in1[8] - in1
    [9] * in1[9]));
  t37 = t117 * t127 * t137 - t116 * t138 * t11 / 2.0;
  t8 = t116 * t137;
  t78 = t117 * t137;
  out1[3] = -t114 * (((t63 * t2 + t41 * t37) - t8 * t71 * 2.0) + t78 * t9 * 2.0);
  out1[4] = -t114 * (((t41 * t2 - t63 * t37) + t8 * t9 * 2.0) + t78 * t71 * 2.0);
  out1[5] = (in1[4] * t64 * 3.1415926535897931 / 2.0 - in1[5] * (t77 - 1.0) *
             3.1415926535897931 * (pow(in1[8], 4.0) - pow(in1[9], 4.0)) / 2.0) *
    (((t63 * t71 - t41 * t9) + t8 * t2 * 2.0) + t78 * t37 * 2.0);
}

/*
 * File trailer for sprdmpKx19.c
 *
 * [EOF]
 */
