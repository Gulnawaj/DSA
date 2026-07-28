#include<iostream>
using namespace std;
//pointer practice
int main(){
    char c[] = "GATE2024";
    char *p = c;
    cout<< p+p[3]-p[1];
}