#include<iostream>
#include<vector>
using namespace std;
vector<int> prefixSum(vector<int> &v , int n){
    vector<int> pre(n);
    pre[0] = v[0];
    for(int i = 1 ; i<n ; i++){
        pre[i] = pre[i-1] + v[i];
    }
    return pre;
}
int main(){
    vector<int> v = {4,6,5,-3,2,8};
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    vector<int> p = prefixSum(v , 6);
    cout << "Prefix Sum Array: ";
    for(int x : p){
        cout << x << " ";
    }
}