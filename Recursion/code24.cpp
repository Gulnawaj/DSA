#include<iostream>
using namespace std;
//lower to upper
void toUpper(string &str, int i){

    // Base Case
    if(i == str.length())
        return;

    // Convert lowercase to uppercase
    if(str[i] >= 'a' && str[i] <= 'z'){
        str[i] = str[i] - 'a' + 'A';
    }

    // Recursive Call
    toUpper(str, i+1);
}

int main(){

    string str;
    cout<<"enter the string ";
    cin>>str;

    toUpper(str, 0);

    cout << str;
}