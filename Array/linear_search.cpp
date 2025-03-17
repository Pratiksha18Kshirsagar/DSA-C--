#include <iostream>
using namespace std;

int linearSearch(int arr[], int target)
{
    for (int i = 0; i < 5; i++)
    {
        if (target == arr[i])
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    int ans = linearSearch(arr, 3);
    cout << ans;
    return 0;
}