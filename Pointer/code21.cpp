#include <iostream>
using namespace std;

int main()
{
    int x, y, z;
    cout << "Enter depth: ";
    cin >> x;
    cout << "Enter rows: ";
    cin >> y;
    cout << "Enter columns: ";
    cin >> z;

    // Allocate depth pointers
    int ***ptr = new int**[x];
    
    //creation of 2d array 
    // Allocate row pointers
    for(int i = 0; i < x; i++)
    {
        ptr[i] = new int*[y];

        // Allocate columns
        for(int j = 0; j < y; j++)
        {
            ptr[i][j] = new int[z];
        }
    }

    // Input
    cout << "\nEnter elements:\n";
    for(int i = 0; i < x; i++)
    {
        cout << "Matrix " << i + 1 << endl;

        for(int j = 0; j < y; j++)
        {
            for(int k = 0; k < z; k++)
            {
                cin >> ptr[i][j][k];
            }
        }
    }

    // Output
    cout << "\nStored Elements:\n";

    for(int i = 0; i < x; i++)
    {
        cout << "Matrix " << i + 1 << endl;
        for(int j = 0; j < y; j++)
        {
            for(int k = 0; k < z; k++)
            {
                cout << ptr[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    // Delete memory
    for(int i = 0; i < x; i++)
    {
        for(int j = 0; j < y; j++)
        {
            delete[] ptr[i][j];
        }

        delete[] ptr[i];
    }

    delete[] ptr;

    return 0;
}