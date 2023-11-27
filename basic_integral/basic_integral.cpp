#include <iostream>
#include <math.h>

using namespace std;

int main(){
    cout << "Iterations ?";
    int n;
    cin >> n;
    int N=n;
    double delta ,sum;

    for(int i=0; i<n ;i++){
        sum=0;
        delta=2 * M_PI/N;
        for(int j=0 ; j<N;j++){
            sum+=sin(delta *j + delta/2)*delta;
        }
        
        cout << "The integral for N =" << N << " is "<< sum << endl;
        N=N*2;
        
    }
}