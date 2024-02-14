/* See example_1.md to know what this program does
*/

#include <iostream>
#include <vector>
#include <cmath>
#include <fstream>
#include "basic_signal_logging.h"

using namespace std;
using std::vector;

// constant expression is a compile-time expression. 
// note that pi is defined outside a function. what does it mean? 
constexpr double pi = 3.14159265358979323846;

int main() 
{
    vector<double> x;
    vector<double> y;

    double x_begin = 0;
    double x_end = 2 * pi;
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