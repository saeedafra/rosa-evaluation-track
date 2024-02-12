/* This program generates a sinusoidal signal (function) and 
saves the result in a text file. Use basic_plot.m to plot the
result in MATLAB or basic_plot.py to do that in Python.
*/

#include <iostream>
#include <vector>
#include <cmath>
#include <fstream>
#include "basic_signal_logging.h"

using namespace std;
using std::vector;

#define PI 3.14159265358979323846

int main() 
{
    vector<double> x;
    vector<double> y;

    double x_begin = 0;
    double x_end = 2 * PI;
    double delta_x = 0.01;

    for(double i = x_begin; i <= x_end; i += delta_x)
        x.push_back(i);
    
    // This is a "range for", a C++11 feature.
    // Keep in mind that a vector cannot change size inside a range for.
    // Here y is changing size but the for is over x.
    for(double i : x)
        y.push_back(sin(i));

    dump_signal(x, y, "sinusoidal.txt");

    return 0;
}