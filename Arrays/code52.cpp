#include<iostream>
#include<vector>
//vector in 2d array
using namespace std;
int main(){
    int n , m;
    cout<<"enter rows and column ";
    cin>>n>>m;
    vector<vector<int>>matrix(n,vector<int>(m,1));
    for(int i =0; i<n ; i++){
        for(int j=0 ; j<m; j++){
            cin>>matrix[i][j];
        }
        cout<<endl;
    }
    for(int i =0; i<n ; i++){
        for(int j=0 ; j<m; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }   
}