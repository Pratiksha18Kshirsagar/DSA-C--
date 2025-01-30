#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter the ch : ";
    cin >> ch;
    if (ch >= 65 && ch <= 90)
    {
        cout << "upperCase";
    }
    else{
        cout << "lowerCase";
    }

    return 0;
}