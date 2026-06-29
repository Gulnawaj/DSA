#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<pair<int,int>> v = {{1,2} , {3,4} , {5,6}};
    for(pair<int,int>p :v){
        cout<<p.first<<" "<<p.second<<endl;
    }
}