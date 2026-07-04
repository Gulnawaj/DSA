#include <iostream>
using namespace std;
//Search in 2D array 
bool search(int arr[][3], int rows, int cols, int x)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] == x)
            {
                cout << "Element found at (" << i << ", " << j << ")" << endl;
                return true;
            }
        }
    }

    return false;
}

int main()
{
    int arr[4][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9},
        {10,11,12}
    };

    int x;
    cout << "Enter element to search: ";
    cin >> x;

    if (!search(arr, 4, 3, x))
    {
        cout << "Element not found.";
    }
    return 0;
}