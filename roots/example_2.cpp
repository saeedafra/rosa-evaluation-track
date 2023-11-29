/* This program gets two variables and swaps them. In programming, 
swapping variables means swapping their content. This is done by
the function swap_doubles() which does the swapping only for 
variables of type double. In addition to being another example for
defining functions, here you'll see that the function is defined in a second 
.cpp file.
*/

#include <iostream>
#include "example_2_functions.h"

using namespace std;

int main() 
{
    double a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    swap_doubles(a, b);

    cout << "Making sures they are swaped: ";
    cout << a << ", " << b << endl;

    return 0;
}