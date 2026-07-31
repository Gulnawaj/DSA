#include<iostream>
using namespace std;
//print array 
void printArr(int arr[] , int i , int n){
    if(i == n) return;
    cout<<arr[i]<<" ";
    return printArr(arr , i+1 , n);
}
int main(){
    int arr[5] = {10,20,30,40,50};
    printArr(arr,0,5);
}