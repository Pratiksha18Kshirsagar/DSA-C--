#include <iostream>
using namespace std;
int main()
{
        char ch = 'A';
  for (int i = 0; i < 4; i++)
  {
    for (int j = 3; j > i ; j--)
    {
        cout<<".";
    }
    for (int j = 0; j < 2*i+1; j++)
    {
        cout<<ch++;
    }
    ch = 'A';
    for (int j = 3; j > i ; j--)
    {
        cout<<".";
    }
    cout<<endl;
}
}