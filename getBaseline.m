clearvars; clc;
close all;
format long;

x = importdata('received_signal.txt', ' ');

toSeconds = 10^-6;
c = 1500;

receive = x.data * toSeconds;
transmit = str2num(cell2mat(x.textdata(:,8))) * toSeconds;

diff = receive-transmit;
delay = mean(diff);
disp(delay);
