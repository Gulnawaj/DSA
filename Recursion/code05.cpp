#include<iostream>
using namespace std;
//reverse table of the number 
void table(int n , int i){
    if(i == 0) return;
    cout<<n*i<<" ";
    return table(n , i-1);
}
int main(){
    int n;
    cout<<"enter the number ";
    cin>>n;
    table(n , 10);

}