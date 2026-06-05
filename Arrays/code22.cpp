#include <iostream>
#include <vector>
using namespace std;
//search insert position
int searchInsert(vector<int>& nums, int target) {
    int low = 0;
    int high = nums.size() - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (nums[mid] == target)
            return mid;
        else if (nums[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return low;
}

int main() {
    vector<int> nums = {1, 3, 5, 6};
    int target;

    cout << "Enter target: ";
    cin >> target;

    int position = searchInsert(nums, target);

    cout << "Position: " << position << endl;

    return 0;
} 