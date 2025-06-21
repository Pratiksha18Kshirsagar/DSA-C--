#include <iostream>
using namespace std;
int main()
{
     char ch = 'A';
     for (int i = 0; i < 5; i++)
     {
          for (int j = 0; j <= i; j++)
          {
               cout << ch++;
          }

          cout << endl;
          ch = 'A';
     }

     cout << endl;

     for (int i = 5; i > 0; i--)
     {
          for (int j = 0; j < i; j++)
          {
               cout << ch++;
          }
          ch = 'A';
          cout << endl;
     }

     cout << endl;

     for (int i = 0; i < 5; i++)
     {
          for (int j = 0; j <= i; j++)
          {
               cout << ch;
          }
          cout << endl;
          ch++;
     }
}