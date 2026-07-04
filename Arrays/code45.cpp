#include <iostream>
using namespace std;
// Function to print transpose
void transpose(int arr[][100], int rows, int cols)
{
    cout << "\nTranspose of the Matrix:\n";

    for (int j = 0; j < cols; j++)
    {
        for (int i = 0; i < rows; i++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int rows, cols;
    int arr[100][100];
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;
    cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout<<"original matrix "<<endl;
      for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;

    }
    cout<<endl;
    transpose(arr, rows, cols);

    return 0;
}