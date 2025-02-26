#include <iostream>
using namespace std;

int decToBinary(int n)
{
    int ans = 0;
    int pow = 1;
    while (n > 0)
    {
        int rem = n % 2;
        n = n / 2;
        ans = ans + (rem * pow);
        pow = pow * 10;
    }
    return ans;
}

int binTodec(int bin)
{
    int ans = 0;
    int pow = 1;
    while (bin > 0)
    {
        int rem = bin % 10;
        bin = bin / 10;
        ans = ans + (rem*pow);
        pow = pow * 2;
    }
    return ans;
}

int main()
{
    // cout << decToBinary(6);
    // cout << endl << binTodec(1010);
    int a =6;
    int b = 10;
    cout << (10 >> 1) ;
    return 0;
}