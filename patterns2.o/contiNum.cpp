#include <iostream>
using namespace std;
 int main(){
    int count = 1;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout<< count;
            cout<<" ";
            count++;
        }
     cout<<endl;   
    }
    
 }