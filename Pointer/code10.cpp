#include <iostream>
using namespace std;
//swap using xor 
void swapXOR(int &a, int &b)
{
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
}

int main()
{
    int x = 10;
    int y = 20;
    cout << "Before Swap: " << x << " " << y << endl;
    swapXOR(x, y);
    cout << "After Swap: " << x << " " << y << endl;
    return 0;
}