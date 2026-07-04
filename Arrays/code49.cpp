#include<iostream>
using namespace std;
//print sum of the diagonal 
int main(){
    int arr[3][3] = {2,3,4,5,6,7,8,9,10};
    for(int i = 0 ; i<3 ; i++){
        for(int j=0 ; j<3 ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    int first = 0;
    for(int i=0 ; i<3 ; i++){
        first += arr[i][i];
    }
    int second = 0;
    int i = 0 ; int j = 2;
    while(j>=0){
        second += arr[i][j];
        i++;
        j--;
    }
    cout<<"first diagonal sum is "<<first<<endl;
    cout<<"second diagonal sum is "<<second<<endl;
}