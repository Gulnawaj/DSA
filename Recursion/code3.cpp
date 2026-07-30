#include <iostream>
using namespace std;

void printFib(int a, int b, int n) {
    if (n == 0)
        return;

    cout << a << " ";

    printFib(b, a + b, n - 1);
}

int main() {
    int n;
    cout<<"enter value ";
    cin>>n;
    printFib(0, 1, n);
    return 0;
}