#include<iostream>
using namespace std;
//Binary Search
int binarySearch(int arr[], int n, int target) {
    int start = 0;
    int end = n - 1;

    while(start <= end) {

        int mid = start + (end - start) / 2;

        if(arr[mid] == target) {
            return mid;
        }

        else if(arr[mid] < target) {
            start = mid + 1;
        }

        else {
            end = mid - 1;
        }
    }

    return -1;
}

int main() {

    int arr[] = {2,4,6,8,10,12,14};
    int n = 7;
    int target;
    cout<<"enter target element ";
    cin>>target;

    int ans = binarySearch(arr, n, target);

    if(ans != -1)
        cout << "Element found at index: " << ans;
    else
        cout << "Element not found";

    return 0;
}