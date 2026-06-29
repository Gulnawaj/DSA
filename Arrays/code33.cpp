#include<iostream>
using namespace std;

int main()
{
    pair<int,int> p = {1,2};

    cout << p.first << " " << p.second << endl;

    pair<char,int> p2 = {'G',2};

    cout << p2.first << " " << p2.second << endl;

    return 0;
}