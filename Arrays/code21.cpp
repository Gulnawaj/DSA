#include <iostream>
#include <vector>
using namespace std;
//first and last occurence with functions

int firstPosition(vector<int>& arr, int target) {
    int low = 0, high = arr.size() - 1;
    int ans = -1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == target) {
            ans = mid;
            high = mid - 1;  // Search on left side
        }
        else if (arr[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return ans;
}

int lastPosition(vector<int>& arr, int target) {
    int low = 0, high = arr.size() - 1;
    int ans = -1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == target) {
            ans = mid;
            low = mid + 1;   // Search on right side
        }
        else if (arr[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {5, 7, 7, 8, 8, 10};
    int target;
    cout<<"enter target value ";
    cin>>target;

    cout << "First Position: " << firstPosition(arr, target) << endl;
    cout << "Last Position: " << lastPosition(arr, target) << endl;

    return 0;
}