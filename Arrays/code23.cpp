#include<iostream>
using namespace std;
//count occurence using linear search
int countOccurence(int arr[] , int n , int target){
    int count = 0;
    for(int i = 0; i<n ; i++){
        if(arr[i] == target){
            count++;
        }
    }
    return count;
}
int main(){
    int arr[8] = {1,2,2,2,5,5,7,8};
    for(int x : arr){
        cout<<x<<" ";
    }
    cout<<endl;
    int target;
    cout<<"enter target element ";
    cin>>target;
    int p = countOccurence(arr , 8 , target);
    cout<<"total occurence of "<<target<<" is "<<p;

}