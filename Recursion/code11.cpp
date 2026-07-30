#include<iostream>
using namespace std;
//Sum of the square of n natural
int sumSquare(int n){
      if( n==0 ) return 0;
      return (n*n) + sumSquare(n-1);
}
int main(){
    int n ;
    cout<<"enter the number ";
    cin>>n;
    int p = sumSquare(n);
    cout<<"sum of the sqaure of n natural number "<<p;

}