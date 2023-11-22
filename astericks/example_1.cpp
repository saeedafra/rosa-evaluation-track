/* This example prints a row of astericks using a for loop. 
(asterick is name of the symbol * on your keyboard)
Here you learn how to ask user to input a number and how to make a for loop
based on user input.
*/

#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "How many astericks?";
    cin >> n;

    for(int i=0; i<n; i++)
        cout << "*";
    cout << endl;

    return 0;
}