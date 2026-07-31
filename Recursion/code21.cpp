#include<iostream>
using namespace std;

int binarySearch(int arr[], int start, int end, int key){

    // Base Case
    if(start > end)
        return -1;

    int mid = start + (end - start)/2;

    if(arr[mid] == key)
        return mid;

    if(arr[mid] < key)
        return binarySearch(arr, mid+1, end, key);

    return binarySearch(arr, start, mid-1, key);
}

int main(){

    int arr[] = {10,20,30,40,50,60,70,80,90};

    int ans = binarySearch(arr,0,8,70);

    if(ans==-1)
        cout<<"Element not found";
    else
        cout<<"Element found at index "<<ans;
}