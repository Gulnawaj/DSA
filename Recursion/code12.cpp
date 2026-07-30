#include<iostream>
using namespace std;
//nth stairs
int stairs(int n){
    if(n == 1) return 1;
    if( n == 2) return 2;
    return stairs(n-1)+stairs(n-2);
}
int main(){
    int n;
    cout<<"enter number of stairs ";
    cin>>n;
    int p = stairs(n);
    cout<<"number of ways "<<p;
}