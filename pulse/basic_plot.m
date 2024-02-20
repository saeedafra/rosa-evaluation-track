% this is a MATLAB script. run example_1.cpp first

% sinusoidal.txt contains two columns of numbers.
% the function load() automatically detects the tabular format
% and converts it to a matric.
data_matrix = load('sinusoidal.txt');

% here we tell plot() to draw the second column of data_matrix against 
% its first column
plot(data_matrix(:,1), data_matrix(:,2))