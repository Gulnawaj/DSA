#include<iostream>
using namespace std;
//use of reference variable
int main(){
    int num = 10;
    int &temp = num;
    //adress of temp and num
    cout<<&num<<endl;
    cout<<&temp<<endl;
     
    //value of num and temp
    cout<<num<<endl;
    cout<<temp<<endl;
    temp++;
    cout<<num<<endl;
    num--;
    cout<<temp;

}