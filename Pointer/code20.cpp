#include<iostream>
using namespace std;
//2d array in heap
int main(){
    int n,m;
    cout<<"enter the value of n ";
    cin>>n;
    cout<<endl;
    cout<<"enter the value of m ";
    cin>>m;
    int **ptr = new int*[n];
    for(int i = 0 ; i<n ; i++){
        ptr[i] = new int[m];
    }
    for(int i = 0 ; i<n ; i++){
        for(int j = 0 ; j<m ; j++){
            cin>>ptr[i][j];
        }
    }
    cout<<endl;
    for(int i = 0 ; i<n ; i++){
        for(int j = 0 ; j<m ; j++){
            cout<<ptr[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i = 0 ; i<n ; i++){
        delete[] ptr[i];
    }
    delete[] ptr;
    
}