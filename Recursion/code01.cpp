#include<iostream>
using namespace std;
void fun(int n){
    if(n == 0){
        cout<<"Time out ";
        return;
    }
    cout<<n<<" days left ";
    cout<<endl;
    return fun(n-1);

}
int main(){
    fun(2);
}