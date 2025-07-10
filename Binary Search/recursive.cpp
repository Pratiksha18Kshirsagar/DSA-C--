#include <iostream>
#include <vector>
using namespace std;

int search(vector<int> &nums, int low, int high, int target)
{
    int mid = low + (high - low) / 2;
    if (target == nums[mid])
        return mid;
    else if (target > nums[mid])
        return search(nums, mid + 1, high, target);
    else
    {
        return search(nums, low, mid - 1, target);
    }
}

int main()
{
    vector<int> nums = {2, 3, 4, 5, 6, 7, 8, 9};
    int n = nums.size() - 1;
    cout<<search(nums, 0, n, 9);
    return -1;
}