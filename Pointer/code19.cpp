#include <iostream>
using namespace std;
//array creation in heap
int main()
{
    int n;
    cout << "Enter size: ";
    cin >> n;

    int *arr = new int[n]; //array creation in heap

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "\nElements are:\n";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    delete[] arr;
    return 0;
}