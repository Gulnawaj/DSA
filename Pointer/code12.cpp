#include<iostream>
#include<vector>
using namespace std;
//pointers in vector function
void print(vector<int> *v)
{
    for(int i=0;i<v->size();i++)
    {
        cout << (*v)[i] << " ";
    }
}

int main()
{
    vector<int> arr = {1,2,3,4};
    print(&arr);
}