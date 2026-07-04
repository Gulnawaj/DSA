#include<iostream>
using namespace std;
int main(){
     int arr[3][4] = {10, 20 , 30 , 40 , 50 , 60 , 1 , 2 , 3, 4, 5 ,6};
     for(int i = 0 ; i<3 ; i++){
        for(int j = 0 ; j<4 ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
     }
     cout<<endl;
     for(int i = 0 ; i<3 ; i++){
        int start = 0 , end = 3;
        while(start<end){
            swap(arr[i][start] , arr[i][end]);
            start++;
            end--;
        }
     }
     cout<<"reverse row of the 2d matrix"<<endl;
      for(int i = 0 ; i<3 ; i++){
        for(int j = 0 ; j<4 ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
     }

}