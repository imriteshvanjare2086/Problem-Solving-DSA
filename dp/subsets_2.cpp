// Problem: Subsets
// Platform: LeetCode
// Time Complexity: O(2^n)
// Space Complexity: O(n)


#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    set <vector<int>> st;
    void func(int idx,vector <int> result,vector<vector<int>> &ans,vector<int> nums)
    {
        if(idx == nums.size())
        {
            if(st.find(result) == st.end())
            {
                ans.push_back(result);
            }
            st.insert(result);
            return;
        }
        result.push_back(nums[idx]);
        func(idx+1,result,ans,nums);
        result.pop_back();
        func(idx+1,result,ans,nums);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector <int> result;
        sort(nums.begin(),nums.end());
        func(0,result,ans,nums);
        return ans;
    }
};