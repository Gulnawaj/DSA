#include<iostream>
using namespace std;
//count vowels
int countVowels(string str, int i){

    // Base Case
    if(i == str.length())
        return 0;

    // Check current character
    if(str[i]=='a' || str[i]=='e' || str[i]=='i' ||
       str[i]=='o' || str[i]=='u')
    {
        return 1 + countVowels(str, i+1);
    }

    return countVowels(str, i+1);
}

int main(){

    string str;

    cout<<"Enter string: ";
    cin>>str;

    cout<<"Number of vowels = "<<countVowels(str,0);
}