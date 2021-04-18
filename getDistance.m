clearvars; clc;
close all;

x = importdata('received_signal.txt', ' ');

toSeconds = 10^-6;
c = 1500;

receive = x.data * toSeconds;
transmit = str2num(cell2mat(x.textdata(:,8))) * toSeconds;

delay = 26.007048799991608;  %from getBaseline.m

diff = receive-transmit - delay;
h = figure();
set(h, 'WindowStyle', 'docked')

distance = diff*c;

distance(distance>100) = []
hist(distance,30)

