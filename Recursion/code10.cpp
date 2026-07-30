#include<iostream>
using namespace std;
//negative powers
double power(double num, int n){
    if(n == 0)
        return 1;

    if(n > 0)
        return num * power(num, n-1);

    return 1.0 / power(num, -n);
}
int main(){
    int num , n;
    cout<<"enter the number ";
    cin>>num;
    cout<<endl;
    cout<<"enter its power ";
    cin>>n;
    double p = power(num,n);
    cout<<p;
}