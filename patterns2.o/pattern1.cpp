#include <iostream>
using namespace std;
int main(){
    for (int i = 0; i < 5; i++)
    {
            for (int j = 0; j <= i; j++)
            {
                cout<<"*";
            }
            cout<<endl;
            
    }
    
    cout<<endl;

     for (int i = 1; i <= 5; i++)
    {
            for (int j = 1; j <= i; j++)
            {
                cout<<j;
            }
            cout<<endl;
            
    }

    cout<<endl;

     for (int i = 1; i <= 5; i++)
    {
            for (int j = 1; j <= i; j++)
            {
                cout<<i;
            }
            cout<<endl;
            
    }

    cout<<endl;

     for (int i = 0; i < 5; i++)
    {
            for (int j = 5; j > i; j--)
            {
                cout<<"*";
            }
            cout<<endl;
            
    }

    cout<<endl;

     for (int i = 0; i < 5; i++)
    {
            for (int j = 1; j <=(5-i); j++)
            {
                cout<<j;
            }
            cout<<endl;
            
    }

    cout<<endl;

    for (int i = 5; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<j;
        }
         cout<<endl;
    }
    cout<<endl;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 4; j > i; j--)
        {
            cout<<" ";
        }
        for (int k = 0; k < (i*2+1); k++)
        {
            cout<<"*";
        }
        for (int j = 4; j>i; j--)
        {
            cout<<" ";
        }
        cout<<endl;   
    }
    
    cout<<endl;

    

    for (int i = 0; i < 5; i++)
    {
        
        for (int j = 0; j < i; j++)
        {
            cout<<" ";
        }
        for (int k = 1; k <= (10-(2*i+1)); k++)
        {
            cout<<"*";
        }
        for (int j = 0; j < i; j++)
        {
            cout<<" ";
        }
        cout<<endl;
        
    }
    

}