function fj_vd = fj_vdF(in1,in2,s)
%FJ_VDF
%    FJ_VD = FJ_VDF(IN1,IN2,S)

%    This function was generated by the Symbolic Math Toolbox version 8.0.
%    30-Jan-2019 17:32:06

mu_x_sym = in1(:,6);
mu_y_sym = in1(:,7);
mu_z_sym = in1(:,8);
mu_xx_sym = in1(:,9);
mu_yy_sym = in1(:,10);
mu_zz_sym = in1(:,11);
u1 = in2(:,13);
u2 = in2(:,14);
u3 = in2(:,15);
u4 = in2(:,16);
u5 = in2(:,17);
u6 = in2(:,18);
u7 = in2(:,19);
u8 = in2(:,20);
u9 = in2(:,21);
u10 = in2(:,22);
u11 = in2(:,23);
u12 = in2(:,24);
fj_vd = [-mu_x_sym.*u1;-mu_y_sym.*u2;-mu_z_sym.*u3;-mu_xx_sym.*u4;-mu_yy_sym.*u5;-mu_zz_sym.*u6;-mu_x_sym.*u7;-mu_y_sym.*u8;-mu_z_sym.*u9;-mu_xx_sym.*u10;-mu_yy_sym.*u11;-mu_zz_sym.*u12];
