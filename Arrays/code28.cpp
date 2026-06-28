#include <iostream>
using namespace std;
void seggregate(int arr[], int n){
    
    int left = 0;
    int right = n - 1;

    while (left < right) {

        if (arr[left] == 0)
            left++;

        else if (arr[right] == 1)
            right--;

        else {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }

}

int main() {
    int arr[] = {1, 0, 1, 0, 1, 0, 0, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    for(int i = 0 ; i<n ; i++){
        cout<<arr[i]<<" ";

    }
    seggregate(arr,n);
    cout<<endl;
    cout << "Array after segregation:\n";

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}