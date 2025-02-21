#include <iostream>
using namespace std;
int main()
{
    int num = 4;
    char ch = 'A';
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            // cout << i+1 ;
            cout << ch;
        }
        ch++;
        cout << endl;
    }

    return 0;
}