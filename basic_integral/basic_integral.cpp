#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int N = 10, b, i;
	double sum, fx;
	double p = 2*acos(0.0);
	
	cout << "How many iterations?" ;
	cin >> b ;
	
	N = 10 * pow(b-1,2);
	
	for(int i=0; i<N; i++){
		fx = sin( (2*p*i/N) + p/N )*(2*p/N);
		sum += fx;
	}
	
	cout << "The integral for N = " << N << " is " << sum << endl ;
	
	return 0;
	
   
}
