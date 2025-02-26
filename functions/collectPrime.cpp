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
int collectPrime(int m){
    for (int i = 1; i <= m ; i++)
    {
        if(primeOrNot(i)){
            cout<< i <<endl;
        }
    }
    
}
int main()
{
collectPrime(7);
    return 0;
}