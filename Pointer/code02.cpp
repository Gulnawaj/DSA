#include<iostream>
using namespace std;
//pointers in array
int main(){
    int arr[5] = {1 , 2, 3, 4, 5};
    cout<<"adress of the first element of the array "<<arr<<endl;
    cout<<"adress of the first element of the array "<<(arr+0)<<endl;
    cout<<"adress of the first element of the array "<<&arr[0]<<endl;

    int *ptr = arr;
    cout<<"adress of the first element of the array "<<ptr<<endl;
    
    //adress of arr[1]
    cout<<endl;
    cout<<"adress of the second element of the array "<<arr+1<<endl;
    cout<<"adress of the second element of the array "<<ptr+1<<endl;

    //value of the first index
    cout<<endl;
    cout<<"first element of the array "<<arr[0]<<endl;
    cout<<"first element of the array "<<*arr<<endl;
    cout<<"first element of the array "<<*(arr+0)<<endl;
    cout<<"first element of the array "<<*ptr<<endl;

    //print all element address 
    cout<<endl;
    for(int i=0;i<5;i++){
        cout<<arr+i<<"   ";
        cout<<ptr+i<<endl;

    }

    //print all element  
    cout<<endl;
    for(int i=0;i<5;i++){
        cout<<*(ptr+i)<<" ";
        cout<<ptr[i]<<endl;

    }
    //print all element  
    cout<<endl;
    for(int i=0;i<5;i++){
        cout<<*ptr<<" ";
        ptr++;

    }

}