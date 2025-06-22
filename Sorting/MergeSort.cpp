#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high)
{
    vector<int> temp;
    int i = low;
    int j = mid + 1;
    while (i <= mid && j <= high)
    {
        if (arr[i] < arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
            temp.push_back(arr[j]);
            j++;
        }
    }

    while (i <= mid)
    {
        temp.push_back(arr[i]);
        i++;
    }

    while (j <= high)
    {
        temp.push_back(arr[j]);
        j++;
    }

    for (int i = low; i <= high; i++)
    {
           arr[i] = temp[i-low];
    }
    
}

void mergeSort(vector<int> &arr, int low, int high)
{
    if (low >= high)
        return;
    int mid = low + (high - low) / 2;
    mergeSort(arr, low, mid);      // left 4
    mergeSort(arr, mid + 1, high); // right 1
    merge(arr, low, mid, high);
}



int main()
{
    vector<int> arr = {3,1,2,4,1,5,2,6,4};
    mergeSort(arr, 0, arr.size()-1);
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    
}