#include <iostream>
using namespace std;
// Function to print the 2D array
void printArray(int arr[][100], int rows, int cols)
{
    cout << "\nElements of the 2D Array are:\n";

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int rows, cols;

    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    int arr[100][100];
    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> arr[i][j];
        }
    }
    printArray(arr, rows, cols);

    return 0;
}