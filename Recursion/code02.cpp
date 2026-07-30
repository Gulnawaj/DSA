#include<iostream>
using namespace std;
//fibo using recursive call
int fibo(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    return fibo(n - 1) + fibo(n - 2);
}
int main(){
    int n;
    cout<<"enter value ";
    cin>>n;
    int p = fibo(n);
    cout<<"fibo number is "<<p;
}