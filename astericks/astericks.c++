#include <iostream>

using namespace std;

int main(){

    int rows{};
    int cols{};
    cout<<"Number of rows: ";
    cin>> rows;
    cout<<"Number of cols: ";
    cin>>cols;

    for (int i{1}; i <= rows ; i++){
        for(int j{1}; j <= cols ; j++){
            if( i == 1 || i == rows || j==1 || j == cols){
                std::cout<<"*";
            }
            else{
                std::cout<<" ";
            };
        };
        std::cout<<'\n';
    };


    return 0;
}