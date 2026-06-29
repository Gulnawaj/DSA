#include <iostream>
#include <vector>
using namespace std;
//two sum (using two pointer)
vector<int> twoSum(vector<int> &nums, int target)
{
    int left = 0;
    int right = nums.size() - 1;
    while (left < right)
    {
        int sum = nums[left] + nums[right];

        if (sum == target)
        {
            return {left, right};
        }
        else if (sum < target)
        {
            left++;
        }
        else
        {
            right--;
        }
    }
    return {};
}

int main()
{
    vector<int> nums = {1, 2, 4, 7, 11, 15};
    int target;
    cout<<"enter the target ";
    cin>>target;
    vector<int> ans = twoSum(nums, target);
    if (ans.size() == 2)
    {
        cout << "Indices: " << ans[0] << " " << ans[1] << endl;
    }
    else
    {
        cout << "No pair found";
    }
    return 0;
}