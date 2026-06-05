#include <iostream>
#include <vector>
using namespace std;
//first and last occurence in array
int main() {
    vector<int> arr = {5, 7, 7, 8, 8, 10};
    int target = 8;

    int first = -1, last = -1;

    // Find first occurrence
    int low = 0, high = arr.size() - 1;
    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == target) {
            first = mid;
            high = mid - 1;
        }
        else if (arr[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    // Find last occurrence
    low = 0;
    high = arr.size() - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == target) {
            last = mid;
            low = mid + 1;
        }
        else if (arr[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    cout << "First Position: " << first << endl;
    cout << "Last Position: " << last << endl;

    return 0;
}