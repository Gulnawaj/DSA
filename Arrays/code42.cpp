#include<iostream>
#include<vector>
#include<algorithm>
//check whether sum of two equal subarrays are present or not 
using namespace std;
bool divide(vector<int>arr){
    int pre = 0 ,  totalSum = 0 , n = arr.size();
    for(int i = 0 ; i<n ; i++){
        totalSum += arr[i];
    }
    for(int i = 0 ; i<n ; i++){
        pre += arr[i];
        int ans  = totalSum - pre;
        if(ans == pre){
            return 1;
        }
    }
    return 0;
}
int main(){
    int n;
    cout<<"enter the size of the array "<<endl;
    cin>>n;
    vector<int>v(n);
    cout<<"enter the element in the array ";
    for(int i = 0 ; i<n ; i++){
       cin>>v[i];

    }
    cout<<endl;
    int p = divide(v);
    if(p){
        cout<<"two equal sum subarrays are present";
    }
    else{
        cout<<"two equal sum subarrays are not present";
    }

}