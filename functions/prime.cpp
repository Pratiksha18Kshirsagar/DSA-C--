#include <iostream>
using namespace std;
int primeOrNot(int n)
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
        cout << "prime";
    }
    else
    {
        cout << "not prime";
    }
}

int main()
{
    primeOrNot(15);

    return 0;
}