#include<iostream>
using namespace std;
//find minimun
int minArr(int arr[], int i ,int n){
    if(i == n-1) return arr[i];
    return min(arr[i] , minArr(arr,i+1,n));
}

int main(){
    int arr[7] = {62,37,28,92,12,82,93};
    int p =  minArr(arr,0,5);
    cout<<"minimum element is  "<<p;
}