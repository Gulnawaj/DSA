#include<iostream>
using namespace std;
int main(){
    char arr[5] = "1234";
    char *ptr = arr;
    //element of char array
    cout<<arr<<endl;
    cout<<ptr<<endl;

    //address of the element 
    cout<<endl;
     cout<<(void*)arr<<endl;
    cout<<(void*)ptr<<endl;

    //another concept 
    cout<<endl;
    char name = 'a';
    cout<<name<<endl;
    char *ptr1 = &name;
    cout<<ptr1<<endl;
    cout<<(void*)ptr1<<endl;
    cout<<(void*)&name<<endl;
}