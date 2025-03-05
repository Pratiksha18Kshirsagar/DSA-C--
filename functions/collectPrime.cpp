#include <iostream>
using namespace std;

bool primeOrNot(int n)
{
    bool isPrime = true;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    if (isPrime)
    {
        // cout << "prime";
        return isPrime;
    }
    else
    {
        // cout << "not prime";
        return isPrime;
    }
}
int collectPrime(int x)
{
    x = 10;
    for (int i = 1; i <= x; i++)
    {
        if (primeOrNot(i))
        {
            cout << i << endl;
        }
    }
}
int main()
{
    int x = 9;
    collectPrime(x);
    return 0;
}