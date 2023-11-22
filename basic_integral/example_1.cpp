/* This program asks the user to input an integer and then
prints a message saying it's an even or odd number.
This is a very simple example to learn how to use if blocks.
*/

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter an integer: ";
    cin >> n;

    if ( n % 2 == 0)
        cout << n << " is even.";
    else
        cout << n << " is odd.";
    cout << endl;

    return 0;
}