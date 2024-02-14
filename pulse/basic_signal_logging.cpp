#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

// const before and & after the data type says that it's a const reference.
// const reference has the benefit of pass by reference (which saves memory),
// while protecting the argument from being modified.
// Here we know the function must not change the vectors.
void dump_signal(const vector<double>& x, const vector<double>& y, const string& file_name)
{   
    // create an ofstream object ond open a file
    ofstream out_file(file_name);

    // Check if the file is open/created successfully
    if(!out_file.is_open())
        throw runtime_error("Failed to open file " + file_name);

    if(x.size() != y.size())
        throw runtime_error("The two vectors must have the same number of elements.");
        
    for(int i=0; i< x.size(); i++)
        // trying to emphasize that x.at(i) and y[i] are both valid
        // ways of accessing element i. But .at() throws an error if
        // out of range while [] could return garbage.
        out_file << x.at(i) << " " << y[i] << endl;
    
    out_file.close();
}