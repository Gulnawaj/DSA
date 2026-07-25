#include<iostream>
using namespace std ;
int main(){
    int a = 10;
    cout<<"value of a "<<a<<endl;
    cout<<"Adress of a "<<&a<<endl;
    int *ptr = &a;
    cout<<"adress of a using pointer "<<ptr<<endl;
    cout<<"value of a using pointer "<<*ptr<<endl;

}