#include <iostream>
using namespace std;
int main()
{
    int n = 3;
    int nums[n] = {1,2,3};
    int count = 0 ;
    int k = 3;
    for (int st = 0; st < n; st++)
    {
        for (int end = st; end < n ; end++)
        {
            int sum = 0;
            for (int k = st; k <= end; k++)
            {
                cout << nums[k]<<" ";
                  sum += nums[k];
            }
            if(sum == k ){
                count++; 
            }
            cout<<" ";
        }
        cout<<endl;
    }
    cout<<"count is :" <<count;
    return 0;
}