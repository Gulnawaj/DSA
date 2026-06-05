#include<iostream>
#include<vector>
using namespace std;
//Binary search (check whether key is present or not)
bool binarySearch(vector<int> &arr , int key){
    int start = 0;
    int end = arr.size()-1;
    while(start<=end){
        int mid = start + (end-start)/2 ;
        if(arr[mid] == key){
            return 1;

        }
        else if(arr[mid]<key){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    return 0;

}
int main(){
    int n;
    cout<<"total elements in the array ";
    cin>>n;
    vector <int> arr(n);    
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }
    cout<<endl;
    cout<<"elements are: ";
    for(int i = 0; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int key;
    cout<<"enter key ";
    cin>>key;
    bool x = binarySearch(arr, key);
    if(x){
        cout<<"key is present";
    }
    else{
        cout<<"key is absent";
    }


}