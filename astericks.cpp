/*this examle prints a n_row by n_col rectangle made of astericks*/

#include <iostream>

int main() {
    int n_row, n_col;

    cout << "How many rows? ";
    cin >> n_row;

    cout << "How many cols? ";
    cin >> n_col;

    for (int i = 0; i < n_row; i++) {
        for (int j = 0; j < n_col; j++) {
            if (i == 0 || i == n_row - 1 || j == 0 || j == n_col - 1) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
