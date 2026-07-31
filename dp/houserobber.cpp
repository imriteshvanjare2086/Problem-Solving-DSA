#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int func(vector <int> &nums,vector <int> &dp,int idx)
    {
        if(idx == 0)
        {
            return nums[idx];
        }
        if(idx < 0)
        {
            return 0;
        }
        if(dp[idx] != -1)
        {
            return dp[idx];
        }
        int pick = nums[idx]+func(nums,dp,idx-2);
        int not_pick = 0+func(nums,dp,idx-1);

        return dp[idx] = max(pick,not_pick);
    }
    int rob(vector<int>& nums) 
    {
        vector <int> dp(nums.size()+1,-1);
        return func(nums,dp,nums.size()-1);    
    }
};