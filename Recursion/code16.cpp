#include<iostream>
using namespace std;

void printArr(int arr[], int i){
    if(i < 0) return;

    cout << arr[i] << " ";
    printArr(arr, i-1);
}

int main(){
    int arr[5] = {10,20,30,40,50};

    printArr(arr, 4);
}