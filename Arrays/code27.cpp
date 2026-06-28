#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    vector<int> v;

    // Insert elements
    v.push_back(8);
    v.push_back(9);
    v.push_back(6);
    v.push_back(10);
    v.push_back(77);

    cout << "Original Vector: ";
    for (auto x : v) {
        cout << x << " ";
    }

    // Erase the element at index 2 (value = 6)
    v.erase(v.begin() + 2);

    cout << "\nAfter erase: ";
    for (auto x : v) {
        cout << x << " ";
    }

    // Maximum element
    int p = *max_element(v.begin(), v.end());
    cout << "\nMaximum Element = " << p;

    // Minimum element
    cout << "\nMinimum Element = " << *min_element(v.begin(), v.end());

    // Count occurrence of 9
    cout << "\nCount of 9 = " << count(v.begin(), v.end(), 9);

    return 0;
}