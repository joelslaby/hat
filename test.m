close all;

x_range = 500;
y_range = 500;
res = 10;

x_val = (0:1/res:x_range);
y_val = (0:1/res:y_range);
[X,Y] = meshgrid(x_val, y_val);
Z = 0.* X;

% (2.5m, 2.5m)
x_pos = 2.5; %meters
y_pos = 2.5; %meters
Z((x_pos-1)*res:(x_pos+1)*res, y_pos*res) = 1;
% z = zeros(x_range*res, y_range*res);

radius = 1;

% surf(X, Y, Z);
view(0,90);