#include<iostream>
using namespace std;
//Quick sort
int partition(int arr[] , int start , int end){
    int pos = start;
    for(int i = start ; i<end ; i++){
        if(arr[i]<arr[end]){
            swap(arr[pos],arr[i]);
            pos++;
        }
    }
    swap(arr[pos],arr[end]);
    return pos;
}
void quickSort(int arr[] , int start , int end){
    //base condition
    if(start>=end) return ;
    //find pivot
    int pivot = partition(arr,start,end);
    //left side 
    quickSort(arr, start , pivot-1);
    //right right 
    quickSort(arr,pivot+1 , end);
}
int main(){
    int arr[8] = {23,32,12,78,67,33,22,13};
    cout<<"unsorted array:- "<<endl;
    for(int i = 0 ; i < 8 ; i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;
    quickSort(arr,0,7);
    cout<<"sorted array:- ";
    for(int i = 0 ; i<8 ; i++){
        cout<<arr[i]<<" ";
    }
}