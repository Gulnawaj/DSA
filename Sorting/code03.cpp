#include<iostream>
using namespace std;
//Insertion sort 
void insertionSort(int arr[] , int n){
    for(int i = 1 ; i<n ; i++){
        int temp = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }

}
int main(){
    int arr[6] = {8,4,1,5,9,2};
    cout<<"unsorted array: ";
    for(int i  = 0 ; i < 6 ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    insertionSort(arr,6);
    cout<<"sorted array: ";
    for(int x : arr){
        cout<<x<<" ";
    }

}