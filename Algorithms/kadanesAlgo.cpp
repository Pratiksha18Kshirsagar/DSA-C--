#include <iostream>
using namespace std;

int maxSubArray(int arr[], int n)
{
    int maxVal = INT8_MIN;
    for (int st = 0; st < n; st++)
    {
        int currSum = 0;
        for (int end = st; end < n; end++)
        {
            currSum = currSum + arr[end];
            maxVal = max(currSum, maxVal);
            // for (int i = st; i <= end; i++)
            // {
            //     cout << arr[i];
            // }
            // cout << " ";
        }
        }
    cout << maxVal;
}

int main()
{
    int n = 5;
    int arr[5] = {1, -2, 3, -4};
    maxSubArray(arr, n);
}