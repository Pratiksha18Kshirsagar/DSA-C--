
// Problem:
// Given two strings s and t, return true if t is an anagram of s, and false otherwise.

// Example:
// Input: s = "listen", t = "silent"  
// Output: true

// ✅ Example:
// "listen" → "silent" ✅ (Anagram)

// "triangle" → "integral" ✅ (Anagram)

// "hello" → "world" ❌ (Not an anagram)

#include <iostream>
#include <unordered_map>
#include <algorithm>

using namespace std;

bool isAnagram(string s, string t)
{
    if (s.length() != t.length())
        return false;

    unordered_map<char, int> freq;

    for (char c : s)
    {
        freq[c]++;
    }

    for (char c : t)
    {
        freq[c]--;
        if (freq[c] < 0)
            return false;
    }
    return true;
}

int main()
{
    // string s = "hello";
    string s = "silent";
    string t = "listen";

    if (isAnagram(s, t))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
}