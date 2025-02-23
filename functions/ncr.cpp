#include <iostream>
using namespace std;

int factorial(int n)
{
    int val = 1;
    for (int i = 1; i <= n; i++)
    {
        val = val * i;
    }
    return val;
}

int ncr(int n, int r)
{
    int val1 = factorial(n);
    int val2 = factorial(r);
    int val3 = factorial(n - r);
    return val1 / (val2 * val3);
}

int main()
{
    cout << ncr(8, 2);
    return 0;
}