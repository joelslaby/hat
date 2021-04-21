clearvars; clc;
close all;

x = importdata('differentDistances.txt', ' ');

toSeconds = 10^-6;
c = 1500;

receive = x.data * toSeconds;
transmit = str2num(cell2mat(x.textdata(:,8))) * toSeconds;

delay = 26.040854952378488;

diff = receive-transmit - delay;
h = figure();
set(h, 'WindowStyle', 'docked')

distance = diff*c;

%hist(distance,30)
plot(distance)
