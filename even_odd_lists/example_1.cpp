/* This example is about arrays. It gets a list of numbers
from the user and prints them in the reverse order.
*/

#include <iostream>
using namespace std;

int main() {

    int n;
    //with basic arrays, we have to choose the array size at definition
    float data[100];

    cout << "How many numbers? (1 to 100): ";
    cin >> n;

    // input n numbers
    for(int i=0; i<n; i++)
    {
        cout << "number " << i << ":";
        cin >> data[i]; 
    }

    cout << endl;
    cout << "The numbers in the reverse order:" << endl;
    // now a loop starting from n-1 and going back to 0
    for(int i=n-1; i>=0; i--)
        cout << data[i] << endl;
    
    return 0;
}