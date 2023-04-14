function [out1,out2,out3,out4,out5,out6,out7,out8] = sprdmpF9(in1,in2,s)
%SPRDMPF9
%    [OUT1,OUT2,OUT3,OUT4,OUT5,OUT6,OUT7,OUT8] = SPRDMPF9(IN1,IN2,S)

%    This function was generated by the Symbolic Math Toolbox version 8.0.
%    06-Feb-2019 22:57:58

lambda_sym = in1(:,34);
p1_sym = in1(:,22);
p3_sym = in1(:,24);
p5_sym = in1(:,26);
q9 = in2(:,9);
u9 = in2(:,33);
out1 = [0.0;0.0;0.0;0.0;0.0;0.0;0.0;0.0;1.0;0.0;0.0;0.0;0.0;0.0;0.0;0.0;0.0;0.0;0.0;0.0;0.0;0.0;0.0;0.0];
if nargout > 1
    t2 = 1.0./lambda_sym;
    t3 = lambda_sym.^2;
    t4 = t2.*1.36e-4;
    t5 = t3.*1.672238728974578e-7;
    t6 = t4+t5-3.766722387289746e-5;
    out2 = q9.*t2.*t6.*pi.*-1.64e7;
end
if nargout > 2
    out3 = u9.*-1.0e2;
end
if nargout > 3
    out4 = -pi.*(t3.*2.787064548290963e-8-6.277870645482909e-6).*(p1_sym.*2.0+p3_sym.*2.0+p5_sym.*2.0);
end
if nargout > 4
    out5 = q9;
end
if nargout > 5
    out6 = [0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,t2.*t6.*pi.*1.64e7,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0];
end
if nargout > 6
    out7 = [0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,-1.0e2,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0];
end
if nargout > 7
    out8 = 1.0;
end
