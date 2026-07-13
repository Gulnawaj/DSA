#include<iostream>
#include<string>
//check palindrome
using namespace std;
int main(){
    string s;
    cin>>s;
    int start = 0 , end = s.size()-1;
    while(start<end){
        if(s[start] != s[end]){
            cout<<"it is not palindrome";
            return 0;
        }
        start++;
        end--;
    }
    cout<<"it is a palindrome ";


}