// Problem: Reverse words in string
// Platform: LeetCode
// Time Complexity: O(n²)
// Space Complexity: O(n)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string result;
        string word;

        while(ss >> word)
        {
            result = word+" "+result;
        }
        return result.substr(0,result.size()-1);
    }
};