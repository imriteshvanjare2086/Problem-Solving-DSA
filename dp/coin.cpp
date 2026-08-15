// Problem: Coin Change
// Platform: LeetCode
// Time Complexity: O(n)
// Space Complexity: O(n)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

int func(int idx,vector <int> &v,vector<vector<int>> &dp,int target)
{
    if(idx == v.size())
    {
        if(target == 0)
        {
            return 0;
        }
        return INT_MAX;
    }
    if(dp[idx][target] != -1)
    {
        return dp[idx][target];
    }
    int take = INT_MAX;
    if(v[idx] <= target)
    {
        take = func(idx,v,dp,target-v[idx]);
        if(take != INT_MAX)
        {
            take = take+1;
        }
    }
    int nottake = func(idx+1,v,dp,target);
    return dp[idx][target] = min(take,nottake); 
}

    int coinChange(vector<int>& v, int target) {

        vector<vector<int>> dp(v.size(),vector <int> (target+1,-1));
        return (func(0,v,dp,target) == INT_MAX ? -1 : func(0,v,dp,target));
    }
};