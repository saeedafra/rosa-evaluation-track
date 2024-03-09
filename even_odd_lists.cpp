/* This C++ program gets a length and a list of numbers
from the user and prints the odd and even numbers separately.
*/

#include <iostream>

using namespace std;

int main() {
    int length;
    cout << "How many numbers? ";
    cin >> length;

    int numbers[length];

    for (int i = 0; i < length; ++i) {
        cout << "Number " << i + 1 << ": ";
        cin >> numbers[i];
    }

    cout << "\nEven numbers: ";
    for (int i = 0; i < length; ++i) {
        if (numbers[i] % 2 == 0) {
            cout << numbers[i] << " ";
        }
    }

    cout << "\nOdd numbers: ";
    for (int i = 0; i < length; ++i) {
        if (numbers[i] % 2 != 0) {
            cout << numbers[i] << " ";
        }
    }

    return 0;
}


