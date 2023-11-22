/* This example is about calculating a sum using for loops.
You will have to calculate a more complicated sum in the assignment.
So make sure you understand this example well.
*/

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