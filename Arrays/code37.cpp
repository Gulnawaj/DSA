#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int> s;
    s.push(3);
    s.push(2);
    s.push(10);
    s.push(4);
    s.push(7);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}
