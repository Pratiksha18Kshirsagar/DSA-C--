#include <iostream>
#include <vector>
using namespace std;

int linearSearch(vector<int>&nums, int target)
{
    for (int i = 0; i < 5; i++)
    {
        if (target == nums[i])
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    vector<int>nums = {1,2,3,4,5};

    int ans = linearSearch(nums, 3);
    cout << ans;
    return 0;
}