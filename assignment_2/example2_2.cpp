#include <iostream>

using namespace std;

int main() {
    
    int n_col, n_row;
    cout << "number of rows?";
    cin >> n_row;
    cout << "number of columns?";
    cin >> n_col;

    for(int i=0;i<n_row; i++)
    {
        for(int j=0;j<n_col;j++)
            cout << "*";
        cout << endl;
    }   

    return 0;
}