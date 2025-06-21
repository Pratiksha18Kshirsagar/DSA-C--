#include <iostream>
#include<vector>
using namespace std;

int reverseArray(vector<int>&arr)
{
    int start = 0;
    int end = 4;
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    
}

int main()
{
    vector<int>arr = {1,2,3,4,5};
    reverseArray(arr);

    // Print the array correctly
    cout << "Reversed Array: ";
    for (int val : arr)
    {
        cout << val << " ";
    }
    cout << endl;

}