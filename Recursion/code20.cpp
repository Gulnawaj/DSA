#include<iostream>
using namespace std;
//reverse an array
void reverse(int arr[], int i, int j){
    if(i >= j) return;

    swap(arr[i], arr[j]);

    reverse(arr, i+1, j-1);
}
int main(){
    int arr[5] = {12,32,34 ,23,54};
    for(int i = 0 ; i<5 ; i++){
        cout<<arr[i]<<" ";
    }
    reverse(arr,0,4);
    cout<<" reverse :- ";
    for(int i = 0 ; i<5 ; i++){
        cout<<arr[i]<<" ";
    }
}