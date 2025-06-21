// Problem:
// Given a lowercase string s, return a map containing the count of each character.

// Example:
// Input: "hello"
// Output: {
//   'h': 1,
//   'e': 1,
//   'l': 2,
//   'o': 1
// }

#include <iostream>
#include <unordered_map>
#include <algorithm>

using namespace std;

int main()
{
    // string s = "hello";
    string s = "banana";

    // storing
    unordered_map<char, int> mpp;
    for (int i = 0; i < s.size(); i++)
    {
        mpp[s[i]]++;
    }

    // fetching
    for (auto &it : mpp)
    {
        cout << it.first << " " << it.second << endl;
    }
}