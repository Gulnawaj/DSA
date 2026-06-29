#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> l;
    l.push_back(2);
    l.push_back(3);
    l.push_front(5);
    l.push_front(1);
    l.push_front(11);
    l.push_front(12);
    l.push_front(13);
    cout<<"list elements ";
    for(int val:l){
        cout<<val<<" ";
    }
    cout<<endl;
    l.pop_back();
    l.pop_front();
    cout<<"after pop operation ";
     for(int val:l){
        cout<<val<<" ";
    }
}
