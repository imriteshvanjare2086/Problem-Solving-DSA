// Problem: Target sum
// Platform: LeetCode
// Time Complexity: O(n)
// Space Complexity: O(n)


#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

int func(int idx,vector <int> &v,int sum,int curr,vector<vector<int>>&dp,int target)
{
    if(idx == v.size())
    {
        if(curr-(sum-curr) == target)
        {
            return 1;
        }
        return 0;
    }
    if(dp[idx][curr] != -1)
    {
        return dp[idx][curr];
    }

    int take = func(idx+1,v,sum,curr+v[idx],dp,target);
    int nottake = func(idx+1,v,sum,curr,dp,target);

    return dp[idx][curr] = take+nottake;
}
    int findTargetSumWays(vector<int>& v, int target) {
        int sum = 0;
        int curr = 0;
        for(int i : v)
        {
            sum+=i; 
        }
        vector<vector<int>> dp(v.size(),vector <int> (sum+1,-1));
        return func(0,v,sum,curr,dp,target);
    }
};