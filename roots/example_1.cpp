/* This program does what basic_integral/example_1.cpp does.
But it uses a very simple function is_odd() which takes 
an integer and returns a boolean
*/

#include <iostream>
using namespace std;

bool is_odd(int);

int main() 
{
    int n;

    cout << "Enter an integer: ";
    cin >> n;

    if(is_odd(n))
        cout << n << " is odd.";
    else
        cout << n << " is even.";
    
    cout << endl;

    return 0;
}

bool is_odd(int x)
{
    if(x % 2 == 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}