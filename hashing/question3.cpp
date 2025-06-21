#include<iostream>
#include<unordered_map>
using namespace std;


int main(){
string s = "lletcode";
unordered_map<char,int>mpp;
for (int i = 0; i < s.length(); i++)
{
    mpp[s[i]]++;
}

for (int i = 0; i < s.length(); i++)
{
    if(mpp[s[i]]==1){
        cout<<i;
        return i;
    }
}


}