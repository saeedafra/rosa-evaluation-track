/* This example adds a little bit to example_1.cpp
The program prints a box on the screen made of astericks.
Here you learn how to use two nested for loops for go over rows 
and columns and print the astericks.
*/

#include <iostream>

using namespace std;

int main() {
    int n_col, n_row;
    
    cout << "number of rows?";
    cin >> n_row;
    cout << "number of columns?";
    cin >> n_col;

    for(int i=0; i<n_row; i++)
    {
        for(int j=0; j<n_col; j++)
            cout << "*";
        cout << endl;
    }   

    return 0;
}