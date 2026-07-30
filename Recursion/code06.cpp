#include<iostream>
using namespace std;
//factorial 
int fact(int n){
    if(n == 0){
        return 1;
    }
    return n*fact(n-1);
}
int main(){
    int n;
    cout<<"enter the value ";
    cin>>n;
    int p =  fact(n);
    cout<<"factorial of "<<n<<" "<<p;
}