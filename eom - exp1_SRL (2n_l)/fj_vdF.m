function out1 = fj_vdF(in1,in2,s,ds,t_sym)
%FJ_VDF
%    OUT1 = FJ_VDF(IN1,IN2,S,DS,T_SYM)

%    This function was generated by the Symbolic Math Toolbox version 8.6.
%    15-Jun-2021 01:21:25

mu_x_ = in1(:,6);
mu_y_ = in1(:,7);
mu_z_ = in1(:,8);
mu_xx_ = in1(:,9);
mu_yy_ = in1(:,10);
mu_zz_ = in1(:,11);
u1 = in2(19,:);
u2 = in2(20,:);
u3 = in2(21,:);
u4 = in2(22,:);
u5 = in2(23,:);
u6 = in2(24,:);
u7 = in2(25,:);
u8 = in2(26,:);
u9 = in2(27,:);
u10 = in2(28,:);
u11 = in2(29,:);
u12 = in2(30,:);
u13 = in2(31,:);
u14 = in2(32,:);
u15 = in2(33,:);
u16 = in2(34,:);
u17 = in2(35,:);
u18 = in2(36,:);
out1 = [-mu_x_.*u1;-mu_y_.*u2;-mu_z_.*u3;-mu_zz_.*u4;-mu_xx_.*u5;-mu_yy_.*u6;-mu_x_.*u7;-mu_y_.*u8;-mu_z_.*u9;-mu_zz_.*u10;-mu_xx_.*u11;-mu_yy_.*u12;-mu_x_.*u13;-mu_y_.*u14;-mu_z_.*u15;-mu_zz_.*u16;-mu_xx_.*u17;-mu_yy_.*u18];