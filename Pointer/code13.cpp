#include<iostream>
using namespace std;
//double and triple pointer
int main(){
    int n = 10;
    cout<<n<<" "<<endl;
    cout<<&n<<" "<<endl;
    int *ptr  = &n;
    cout<<ptr<<" "<<endl;

    //double pointer
    int **ptr1 = &ptr;
    cout<<&ptr<<" "<<endl;
    cout<<ptr1<<" "<<endl;
    cout<<*ptr1<<" "<<endl;
    cout<<**ptr1<<" "<<endl;

    //triple pointer
    int ***ptr2 = &ptr1;
    cout<<&ptr1<<" "<<endl;
    cout<<ptr2<<" "<<endl;
    cout<<*ptr2<<" "<<endl;
    cout<<**ptr2<<" "<<endl;
    cout<<***ptr2<<" "<<endl;

}