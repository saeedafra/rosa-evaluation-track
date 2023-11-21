#include <iostream>
using namespace std;

int main() {
    int n;
    int sum;
    cout << "I will calculate the sum of natural numbers from 1 to N." << endl;
    cout << "Enter a number for N: ";
    cin >> n;

    for(int i=1; i<=n; i++)
        sum += i;

    cout << "1 + ... + " << n << " = " << sum << endl;

    return 0;
}