#include<iostream>
using namespace std;
int main(){
    for (int i = 4; i > 0; i--)
    {
        for (int j = 4; j>= i; j--)
        {
            cout<<j;
        }
        for (int j = i; j > 1; j--)
        {
        cout<<i;
        }
        for (int j = 4; j>= i; j--)
        {
            cout<<j;
        }
        
        cout<<endl;
    }
    
}