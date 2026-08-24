// Problem: Word break
// Platform: LeetCode
// Time Complexity: O(n)    
// Space Complexity: O(n)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    bool func(int idx, string &s, unordered_set<string> &st,
              vector<int> &dp)
    {
        if(idx == s.size())
        {
            return true;
        }

        if(dp[idx] != -1)
        {
            return dp[idx];
        }

        string temp = "";

        for(int i = idx; i < s.size(); i++)
        {
            temp += s[i];
            if(st.find(temp) != st.end())
            {
                if(func(i + 1, s, st, dp))
                {
                    return dp[idx] = true;
                }
            }
        }
        return dp[idx] = false;
    }

    bool wordBreak(string s, vector<string>& wordDict)
    {
        unordered_set<string> st;

        for(auto &word : wordDict)
        {
            st.insert(word);
        }

        vector<int> dp(s.size(), -1);

        return func(0, s, st, dp);
    }
};