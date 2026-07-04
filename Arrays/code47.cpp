#include <iostream>
using namespace std;
// Function to add two matrix
void addMatrix(int arr1[][100], int arr2[][100], int rows, int cols)
{
    int sum[100][100];
    cout << "\nSum of the Matrices:\n";

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            sum[i][j] = arr1[i][j] + arr2[i][j];
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int rows, cols;
    int arr1[100][100], arr2[100][100];

    cout << "Enter number of rows: ";
    cin >> rows;

    cout << "Enter number of columns: ";
    cin >> cols;

    cout << "\nEnter elements of First Matrix:\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> arr1[i][j];
        }
    }

    cout << "\nEnter elements of Second Matrix:\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> arr2[i][j];
        }
    }

    // Function Call
    addMatrix(arr1, arr2, rows, cols);

    return 0;
}