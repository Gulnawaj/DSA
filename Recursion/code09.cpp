#include<iostream>
using namespace std;
//power of n number 
int power(int num , int n){
    if( n == 1) return num;
    if(n == 0) return 1;
    return num * power(num , n-1);
}
int main(){
    int num , n;
    cout<<"enter the number ";
    cin>>num;
    cout<<endl;
    cout<<"enter its power ";
    cin>>n;
    int p = power(num,n);
    cout<<p;
}