#include<iostream>
#include<vector>
using namespace std;
vector<int> suffixSum(vector<int> &v, int n)
{
    vector<int> suf(n);

    // Last element remains the same
    suf[n-1] = v[n-1];
    // Traverse from right to left
    for(int i = n-2; i >= 0; i--)
    {
        suf[i] = suf[i+1] + v[i];
    }
    return suf;
}

int main()
{
    vector<int> v = {4,6,5,-3,2,8};
    cout << "Original Array: ";
    for(int x : v)
        cout << x << " ";

    cout << endl;

    vector<int> ans = suffixSum(v, v.size());
    cout << "Suffix Sum Array: ";
    for(int x : ans)
        cout << x << " ";

    return 0;
}