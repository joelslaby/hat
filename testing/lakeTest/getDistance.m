delay = 26.040854952378488;

x = readmatrix('labTest/nextToEachOther.txt');

toSeconds = 10^-6;
c = 1500;

transmissionNum = x(:,6);
transmitTime = x(:,8) * toSeconds;
receiveTime = x(:,10) * toSeconds;
diff = receiveTime - transmitTime;

T = table(transmissionNum, transmitTime, receiveTime, diff);

%remove outliers.  Set to Inf and -Inf at first then adjust
T(T.diff>Inf,:) = [];
T(T.diff<26.02,:) = [];

h = figure();

distance = diff*c;

%hist(distance,30)
plot(T.transmissionNum, T.diff)