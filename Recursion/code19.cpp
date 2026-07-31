#include<iostream>
using namespace std;
//linear Search
bool search(int arr[], int i, int n, int key){
    if(i == n) return false;

    if(arr[i] == key) return true;

    return search(arr, i+1, n, key);
}
int main(){
    int arr[5] = {12,32,34 ,23,54};
    int key;
    cout<<"enter the key ";
    cin>>key;
    int p = search(arr,0,5,key);
    if(p){
        cout<<"key is present ";
    }
    else{
        cout<<"key is absent";
    }

}