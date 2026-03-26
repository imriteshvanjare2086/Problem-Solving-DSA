// Problem: Find first and last position of element in Array
// Platform: LeetCode
// Time Complexity: O(n)
// Space Complexity: O(1)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) 
    {
        int first = -1; 
        int last = -1;

        int n = nums.size();

        for(int i=0;i<n;i++)
        {
            if(nums[i] == target)
            {
                if(first == -1)
                {
                    first = i;
                }
                last = i;
            }
        }

        return {first, last};
    }
};

