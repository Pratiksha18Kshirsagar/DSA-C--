#include <iostream>
using namespace std;

int uniqueArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int count = 0;
        for (int j = 0; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count == 1)
        {
            cout<< arr[i];
        }
        count = 0;
    }
}

int main()
{
    int arr[] = {1, 2, 1, 4, 4, 5};
    uniqueArray(arr , 6);
}