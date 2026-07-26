#include<iostream>
using namespace std;
//pass by value 
void change(int *x)
{
    *x = 100;
}

int main()
{
    int a = 10;
    cout <<"before function call "<<a<<endl;
    change(&a);
    cout <<"after function call "<<a;
}