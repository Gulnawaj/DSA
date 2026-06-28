#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;

    // Insert elements using push_back()
    v.push_back(8);
    v.push_back(9);
    v.push_back(6);
    v.push_back(10);
    v.push_back(77);

    cout << "Vector after push_back(): ";
    for (auto x : v) {
        cout << x << " ";
    }

    // Remove last two elements
    v.pop_back();
    v.pop_back();

    cout << "\nVector after pop_back(): ";
    for (auto x : v) {
        cout << x << " ";
    }

    return 0;
}