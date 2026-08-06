#include<bits/stdc++.h>
using namespace std;    
    
    class Solution {
    public:

        int func(string &text1,string &text2,int idx1,int idx2,vector<vector<int>> &dp)
        {
            if(idx1 < 0 || idx2 < 0)
            {
                return 0;
            }
            if(dp[idx1][idx2] != -1)
            {
                return dp[idx1][idx2];
            }
            if(text1[idx1] == text2[idx2])
            {
                return dp[idx1][idx2] = 1+func(text1,text2,idx1-1,idx2-1,dp);
            }
            return dp[idx1][idx2] = max(0+func(text1,text2,idx1-1,idx2,dp),0+func(text1,text2,idx1,idx2-1,dp));
        }

        int longestCommonSubsequence(string text1, string text2) {
            vector<vector<int>> dp(text1.size(), vector<int>(text2.size(), -1));
            return func(text1,text2,text1.size()-1,text2.size()-1,dp);
        }
    };