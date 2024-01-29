#include <iostream> 
using namespace std;

int main() {
    int n_col, n_row;
	
    cout << "how many rows? ";   
    cin >> n_row;               // get number of rows from user
    cout << "how many cols? ";
    cin >> n_col;               // get number of columns from user

    for(int i=0; i<n_row ; i++) 
	{
    	
    	if (i==0 || i==(n_row-1) ) {   // checks if the row number is first or last  
    		for(int j=0; j<n_col ; j++) 
    			cout << "*";
         } else {                     
          	    cout << "*";
          	    for (int z=0; z<n_col-2; z++) // for evry col between the first and last col puts an blank space
          	    	cout << " ";
          	    cout << "*";	
         }
        cout << endl; 
	}

    return 0;
}
