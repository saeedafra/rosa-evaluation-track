#include <iostream>
#include <cmath>

using namespace std;

int main(){

    double delta ,sum;
    int n,N;

    cout << "Iterations ?";
    cin >> n;
    
    N=n; //Upper limit of sigma


    for(int i=0; i<n ;i++){ // Loop iterate n times 
        sum=0;
        delta=2 * M_PI/N;

        for(int j=0 ; j<N;j++) sum+=sin(delta *j + delta/2)*delta;
        
        
        cout << "The integral for N =" << N << " is "<< sum << endl;
        
        N=N*2;
    }
}