#include<iostream>
using namespace std;

int sum(int arr[], int i ,int n){
    if(i == n) return 0;
    return arr[i] + sum(arr,i+1,n);
}

int main(){
    int arr[5] = {10,20,30,40,50};
    int p =  sum(arr,0,5);
    cout<<"sum of array element is "<<p;
}