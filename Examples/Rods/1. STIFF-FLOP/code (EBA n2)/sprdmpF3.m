function [out1,out2,out3,out4,out5,out6,out7,out8] = sprdmpF3(in1,in2,s)
%SPRDMPF3
%    [OUT1,OUT2,OUT3,OUT4,OUT5,OUT6,OUT7,OUT8] = SPRDMPF3(IN1,IN2,S)

%    This function was generated by the Symbolic Math Toolbox version 8.0.
%    30-Jan-2019 17:59:01

q3 = in2(:,3);
out1 = [0.0;0.0;1.0;0.0;0.0;0.0;0.0;0.0;0.0;0.0;0.0;0.0];
if nargout > 1
    out2 = 0.0;
end
if nargout > 2
    out3 = 0.0;
end
if nargout > 3
    out4 = 0.0;
end
if nargout > 4
    out5 = q3;
end
if nargout > 5
    t2 = [0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0];
    out6 = t2;
end
if nargout > 6
    out7 = t2;
end
if nargout > 7
    out8 = 1.0;
end
