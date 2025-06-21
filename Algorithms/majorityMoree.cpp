#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int majorityElem(vector<int> vec)
{
    int n = vec.size();
    for (int val : vec)
    {
        int freq = 0;
        for (int el : vec)
        {
            if (val == el)
            {
                freq++;
            }
        }
        if (freq > n / 2)
        {
            return val;
        }
    }
}

int majorityOptimized(vector<int> vec)
{
    sort(vec.begin(), vec.end());
    int freq = 1;
    int ans = vec[0];
    int n = vec.size();   
    for (int i = 1; i < vec.size(); i++)
    {
        if (vec[i] == vec[i - 1])
        {
            freq++;
        }
        else
        {
            freq = 1;
            ans = vec[i];
        }
        if (freq > n / 2)
        {
            return ans;
        }
    }
}

int main()
{
    vector<int> vec = {2, 2, 2, 1, 1};
    // cout << majorityElem(vec);
    cout << majorityOptimized(vec);
}