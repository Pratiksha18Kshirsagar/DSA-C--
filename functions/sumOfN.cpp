#include <iostream>
using namespace std;

int sum(int n)
{
    int val = 0;
    for (int i = 1; i <= n; i++)
    {
        val = val + i;
    }
    return val;
}

int factorial(int n)
{
    int val = 1;
    for (int i = 1; i <= n; i++)
    {
        val = val * i;
    }
    return val;
}

int sumOfDigits(int n)
{
    int sum = 0;
    while (n > 0)
    {
        int lastDig = n % 10;
        n = n / 10;
        sum = sum + lastDig;
    }
    return sum;
}

int main()
{
    cout << sum(4);
    cout << endl << factorial(0);
    cout <<endl << sumOfDigits(120);
    return 0;
}