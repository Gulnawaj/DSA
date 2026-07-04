#include<iostream>
using namespace std;
//spiral traveral in 2d array
int main()
{
    int arr[4][4] = {
        {10,20,30,40},
        {1,2,3,4},
        {5,6,7,8},
        {50,60,70,80}
    };
    cout<<"original array is "<<endl;
    for(int i = 0; i<4 ;i++){
        for(int j = 0 ; j<4 ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int top = 0;
    int bottom = 3;
    int left = 0;
    int right = 3;

    while(top <= bottom && left <= right)
    {
        // Top Row
        for(int j = left; j <= right; j++)
            cout << arr[top][j] << " ";
        top++;

        // Right Column
        for(int i = top; i <= bottom; i++)
            cout << arr[i][right] << " ";
        right--;

        // Bottom Row
        if(top <= bottom)
        {
            for(int j = right; j >= left; j--)
                cout << arr[bottom][j] << " ";
            bottom--;
        }

        // Left Column
        if(left <= right)
        {
            for(int i = bottom; i >= top; i--)
                cout << arr[i][left] << " ";
            left++;
        }
    }

    return 0;
}