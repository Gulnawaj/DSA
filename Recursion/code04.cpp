#include<iostream>
using namespace std;
//revserse digit 
void reverse(int n){
    if(n == 1){
        cout<<1<<endl;
        return;
    }
    cout<<n<<" ";
    return reverse(n-1);

}
int main(){
    int n;
    cout<<"enter the number ";
    cin>>n;
    reverse(n);

}