#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(vector<int> &nums, int target)
{
    int n = nums.size();
    int start = 0;
    int end = n - 1;
    vector<int> ans;
    while (start < end)
    {
        int sum = nums[start] + nums[end];
        if (sum > target)
        {
            end--;
        }
        else if (sum < target)
        {
            start++;
        }
        else
        {
            ans.push_back(start);
            ans.push_back(end);
            return ans;
        }
    }
   
}

int main()
{
    vector<int> nums = {2, 7, 11, 15};
    int target = 13;
    vector<int> arr = pairSum(nums, target);
    cout << arr[0] << "," << arr[1];
}