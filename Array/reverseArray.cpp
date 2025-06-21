#include <iostream>
using namespace std;

int reverseArray(int arr[])
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
    int arr[] = { 1, 2, 3, 4, 5 };
    reverseArray(arr);

    // Print the array correctly
    cout << "Reversed Array: ";
    for (int i = 0; i < 5; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

}