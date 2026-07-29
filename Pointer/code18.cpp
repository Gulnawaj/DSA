#include <iostream>
using namespace std;
//dynamic memory allocation.
int main()
{
    int *ptr = new int;   // Heap me ek integer allocate hua
    *ptr = 25;            // Value store

    cout << "Value = " << *ptr << endl;
    cout << "Address stored in ptr = " << ptr << endl;
    cout << "Address of pointer variable = " << &ptr << endl;

    delete ptr;           // Heap memory free

    return 0;
}