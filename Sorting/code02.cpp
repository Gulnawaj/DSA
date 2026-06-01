#include <iostream>
using namespace std;
//Selection Sort
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIdx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }
        swap(arr[minIdx], arr[i]);
    }
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = 5;
    cout<<"unsorted array: ";
    for(int i =0 ; i<5; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    selectionSort(arr, n);
    cout<<"sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    
    return 0;
}