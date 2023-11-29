/* This program asks the user to enter positive numbers
and then prints the numbers in reverse order. In this example
you see how you can pass arrays to functions as either parameters
or return values.
*/

#include <iostream>
#include "example_3_functions.h"

using namespace std;

int main() {
    
    int i, n;
    
    float data[100];
    float reversed_data[100];

    get_array(data,&n);

    reverse_array(data,reversed_data,n);
    
    cout << endl;
    cout << "The numbers in the reverse order:" << endl;
    for(int i=0; i<n; i++)
        cout << reversed_data[i] << endl;
    
    return 0;
}