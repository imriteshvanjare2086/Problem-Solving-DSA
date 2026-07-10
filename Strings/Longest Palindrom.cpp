// Problem: Longest Palindrom
// Platform: LeetCode
// Time Complexity: O(n) 
// Space Complexity: O(n)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    int longestPalindrome(string s) 
    {
        unordered_map <char,int> freq;
        for(char c : s)
        {
            freq[c]++;
        }

        int ans = 0;
        bool ok = false;
        for(auto &a : freq)
        {
            if(a.second%2 == 0)
            {
                ans+=a.second;
            }
            else
            {
                ans+=a.second-1;
                ok = true;
            }
        }
        if(ok)
        {
            ans++;
        }
        return ans;
    }
};