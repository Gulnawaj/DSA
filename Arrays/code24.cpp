#include <iostream>
#include <vector>
using namespace std;
//count occurence using binary search
int firstOccurrence(vector<int>& arr, int target) {
    int low = 0, high = arr.size() - 1;
    int ans = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            ans = mid;
            high = mid - 1;
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

int lastOccurrence(vector<int>& arr, int target) {
    int low = 0, high = arr.size() - 1;
    int ans = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            ans = mid;
            low = mid + 1;
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

int countOccurrences(vector<int>& arr, int target) {
    int first = firstOccurrence(arr, target);

    if (first == -1)
        return 0;

    int last = lastOccurrence(arr, target);

    return last - first + 1;
}

int main() {
    vector<int> arr = {1, 2, 2, 2, 3, 4, 5 ,5, 7, 8,8,8,8,8};
    int target;
    cout<<"enter target value ";
    cin>>target;

    cout << "Count = " << countOccurrences(arr, target);

    return 0;
}