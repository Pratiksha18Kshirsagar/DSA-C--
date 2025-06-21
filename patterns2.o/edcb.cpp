#include <iostream>
using namespace std;
int main()

{
   int n = 4;
    for (int i = 0; i < 4; i++)
    {
       
        for (char ch = ('A'+ n-1)-i; ch <= ('A'+n-1); ch++)
        {
        cout<<ch<<" ";
        }
        cout << endl;
    }


    
}