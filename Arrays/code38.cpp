#include<iostream>
#include<map>
using namespace std;
int main(){
    map<string , int> m;
    m["tv"] = 100;
    m["mobile"] = 30;
    m["watch"]  = 10;
    m["tablet"] = 200;
    m["headphone"] = 45;
    for(auto p : m){
        cout<<p.first<<" "<<p.second<<endl;
    }//map sort data in ascending order(based on keys)
}

