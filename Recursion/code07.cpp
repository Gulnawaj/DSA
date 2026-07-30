#include<iostream>
using namespace std;
int sumNatural(int n){
    if( n == 1){
        return 1;
    }
    return n + sumNatural(n-1);
}
int main(){
    int n ;
    cin>> n;
    int p =  sumNatural(n);
    cout<<"sum of n natural number is "<<p; 
}