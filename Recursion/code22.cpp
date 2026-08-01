#include<iostream>
using namespace std;
//check palindrome
bool palindrome(string str, int start, int end){

    // Base Case
    if(start >= end)
        return true;

    if(str[start] != str[end])
        return false;

    // Recursive Call
    return palindrome(str, start+1, end-1);
}

int main(){

    string str;

    cout<<"Enter string: ";
    cin>>str;

    if(palindrome(str,0,str.length()-1))
        cout<<"Palindrome";
    else
        cout<<"Not Palindrome";
}