#include <iostream>
#include <cmath>

double get_integral(double n);

int main() {
    int iterations;
    std::cout << "How many iterations? ";
    std::cin >> iterations;
    int n = 5; 
    double integral;
    for (int i = 1; i <= iterations; i++) {
        n = n * 2;
        integral = get_integral(n) ;
        std::cout << "The integral for N = " << n << " is " << integral << std::endl;
    }

    return 0;
}

double get_integral(double n) {
     double h = 2 * M_PI / n;
     double a = 0;
     double b = 2 * M_PI;

    double integral = h / 2 * (sin(a) + sin(b));

    for (int i = 1; i < n; i++) {
        integral += h * sin((a + b) / 2 + i * h);
    }

    return integral;
}
