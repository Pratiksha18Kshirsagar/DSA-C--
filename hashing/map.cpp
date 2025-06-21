#include<iostream>
#include<vector>
#include<unordered_map>
#include <algorithm>
using namespace std;

//comparator
bool compareByValue(const pair<int, int>& a, const pair<int, int>& b){
    if(a.second==b.second){
        return a.first>b.first;
    }
    return a.second < b.second;
}

int main(){
vector<int>vec={1,2,2,3,3,};   // {1->1} , {2->2} , {3->2};


//pre compute - storing
unordered_map<int ,int>mpp;
for (int i = 0; i < vec.size(); i++)
{
    mpp[vec[i]]++;
}

//fetching
auto maxPair = max_element(mpp.begin(), mpp.end(), compareByValue); 

cout << maxPair->first;
}
