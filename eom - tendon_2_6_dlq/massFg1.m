function out1 = massFg1(in1,in2,s,ds,t_sym)
%MASSFG1
%    OUT1 = MASSFG1(IN1,IN2,S,DS,T_SYM)

%    This function was generated by the Symbolic Math Toolbox version 8.6.
%    07-May-2021 18:54:12

g_x_ = in1(:,13);
g_y_ = in1(:,14);
g_z_ = in1(:,15);
out1 = [g_x_;g_y_;g_z_;0.0;0.0;0.0];