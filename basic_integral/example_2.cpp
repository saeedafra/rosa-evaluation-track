/* This program calculates the roots of a quadratic equation. 
(You can review the math in example_2.md.)
In this example you learn how to do basic math in C++ and using
functions from cmath like sqrt() and pow()
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // please read example_2.md to review quadratic equations.

    float a, b, c;
    float x1, x2, discriminant;
    cout << "Enter coefficients a, b and c: ";
    cin >> a >> b >> c;

    discriminant = pow(b,2) - 4*a*c;
    
    if (discriminant > 0) {
        x1 = (-b + sqrt(discriminant)) / (2*a);
        x2 = (-b - sqrt(discriminant)) / (2*a);
        cout << "Roots are real and different." << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }    
    else if (discriminant == 0) {
        cout << "Roots are real and same." << endl;
        x1 = -b/(2*a);
        cout << "x1 = x2 =" << x1 << endl;
    }
    else {
        cout << "No real roots" << endl;
    }

    return 0;
}