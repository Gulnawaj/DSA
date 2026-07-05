#include <iostream>
using namespace std;

void rotate90Clockwise(int arr[][4], int n) {
    // Transpose
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            swap(arr[i][j], arr[j][i]);
        }
    }

    // Reverse each row
    for (int i = 0; i < n; i++) {
        int start = 0, end = n - 1;
        while (start < end) {
            swap(arr[i][start], arr[i][end]);
            start++;
            end--;
        }
    }
}

int main() {
    int arr[4][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };
    int n = 4;
    int k;
    cout << "Enter number of rotations ";
    cin >> k;

    k = k % 4;

    while (k--) {
        rotate90Clockwise(arr, n);
    }

    cout << "\nRotated Matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}