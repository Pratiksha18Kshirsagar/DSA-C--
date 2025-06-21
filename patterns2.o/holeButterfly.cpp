#include <iostream>
using namespace std;
int main(){
for (int i = 5; i > 0; i--)
    {
        for (int j = 0;j < i; j++)
        {
            cout<<"*";
        }
        for (int j = 0; j < (10-(2*i)); j++)
        {
            cout<<" ";
        }
         for (int j = 0;j < i; j++)
        {
            cout<<"*";
        }
        
        cout<<endl;
        
    }
     for (int i = 0; i <= 4; i++)
    {
        for (int j = 0; j <= i; j++)
        {
         cout<<"*";
        }
        for (int j = 0; j < (8-(i*2)); j++)
        {
            cout<<" ";
        }
        for (int j = 0; j <= i; j++)
        {
         cout<<"*";
        }
        
         cout<<endl;    
    }
}