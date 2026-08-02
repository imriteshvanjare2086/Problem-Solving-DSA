// Problem: Subsets
// Platform: LeetCode
// Time Complexity: O(2^n)
// Space Complexity: O(n)


#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    void func(int idx,vector <int> result,vector<vector<int>>&ans,vector <int> nums)
    {
        if(idx == nums.size())
        {
            ans.push_back(result);
            return;
        }
        result.push_back(nums[idx]);
        func(idx+1,result,ans,nums);

        result.pop_back();
        func(idx+1,result,ans,nums);
    }
    vector<vector<int>> subsets(vector<int>& nums) {

        vector<int> result;
        vector<vector<int>> ans;
        func(0,result,ans,nums);
        return ans;
    }
};