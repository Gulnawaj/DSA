#include<iostream>
#include<vector>
//vector in 2d array
using namespace std;
int main(){
    vector<vector<int>>matrix(3,vector<int>(4,1));
    for(int i =0; i<3 ; i++){
        for(int j=0 ; j<4 ; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"rows = "<<matrix.size();
    cout<<endl;
    cout<<"col = "<<matrix[0].size();
}