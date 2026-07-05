#include <iostream>
using namespace std;
//Search in a sorted row-col 2d array
bool searchMatrix(int arr[][5], int n, int m, int target) {
    int row = 0;
    int col = m - 1;

    while (row < n && col >= 0) {
        if (arr[row][col] == target) {
            return true;
        }
        else if (arr[row][col] > target) {
            col--;
        }
        else {
            row++;
        }
    }

    return false;
}

int main() {

    int arr[5][5] = {
        {1, 4, 7, 11, 15},
        {2, 5, 8, 12, 19},
        {3, 6, 9, 16, 22},
        {10, 13, 14, 17, 24},
        {18, 21, 23, 26, 30}
    };

    int target;

    cout << "Enter target: ";
    cin >> target;

    if (searchMatrix(arr, 5, 5, target))
        cout << "Element Found";
    else
        cout << "Element Not Found";

    return 0;
}