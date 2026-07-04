#include <iostream>
using namespace std;
//print row index with max sum
int main()
{
    int rows, cols;
    int arr[100][100];

    cout << "Enter number of rows: ";
    cin >> rows;

    cout << "Enter number of columns: ";
    cin >> cols;

    cout << "Enter matrix elements:\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> arr[i][j];
        }
    }

    int maxSum = 0;
    int rowIndex = 0;

    for (int i = 0; i < rows; i++)
    {
        int sum = 0;

        for (int j = 0; j < cols; j++)
        {
            sum += arr[i][j];
        }

        if (sum > maxSum)
        {
            maxSum = sum;
            rowIndex = i;
        }
    }

    cout << "\nRow Index with Maximum Sum = " << rowIndex << endl;
    cout << "Maximum Sum = " << maxSum << endl;

    return 0;
}