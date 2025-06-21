#include <iostream>
using namespace std;

int smallestNum()
{
    int arr[5];
    int size = sizeof(arr) / sizeof(int);

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int smallest = +INT8_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }
    cout << "Smallest num is :" << smallest<<"/n";
}

int largestNum()
{
    int arr[5];
    int size = sizeof(arr) / sizeof(int);

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int largest = INT8_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    cout << "Largest num is :" << largest;
}

int main()
{
    smallestNum();
    largestNum();
    return 0;
}