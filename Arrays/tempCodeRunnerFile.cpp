#include<iostream>
#include<vector>
using namespace std;
//vector properties 
int main(){
    int n;
    cout<<"enter array size ";
    cin>>n;
    vector<int> v(n);
    for(auto i:v){
        cin>>v[i];
    }
    for(auto i:v){
        cout<<v[i]<<" ";
    }
    sort(v.begin() , v.end());
    
}