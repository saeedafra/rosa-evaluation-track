#include <iostream>

using namespace std;

void get_array(float x[], int &num)
{
    // it's not a good practice to do cin and cout 
    // (or such IO operations) in a function which has 
    // a specific algorithm or computation to perform.
    cout << "How many numbers? (1 to 100): ";
    cin >> num;

    for(int i=0; i < num; i++)
    {
        cout << "number " << i << ":";
        cin >> x[i]; 
    }
}

void reverse_array(float in[], float out[], int num)
{
    for(int i=0; i<num; i++)
    {
        out[num-i-1] = in[i];
    }
}