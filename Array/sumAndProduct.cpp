#include <iostream>
using namespace std;

int arraySum(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}

int arrayProduct(int arr[], int size)
{
    int product = 1;
    for (int i = 0; i < size; i++)
    {
        product = product * arr[i];
    }
    return product;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
   cout<<arraySum(arr, 5)<<endl;
   cout<<arrayProduct(arr, 5);
}