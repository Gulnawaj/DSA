#include<iostream>
using namespace std;
//swaping without pointers
void swap(int a,int b)
{
    int temp=a;
    a=b;
    b=temp;
}
int main(){
    int a = 10 , b = 20;
    cout<<"before swap , values are "<<a<<" "<<b<<endl;
    swap(a,b);
    cout<<"After swap , values are "<<a<<" "<<b<<endl;

}