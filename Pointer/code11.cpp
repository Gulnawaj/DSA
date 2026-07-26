#include<iostream>
#include<vector>
using namespace std;
//pointers in vectors
int main()
{
    vector<int> v = {10,20,30};
    vector<int> *ptr = &v;
    cout << (*ptr)[0]<<endl;
    cout<<&v<<endl;
    cout<<ptr<<endl;
}