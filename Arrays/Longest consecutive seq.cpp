// Problem: Longest Consecutive Sequence
// Platform: LeetCode
// Time Complexity: O(n) 
// Space Complexity: O(n)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums)
    {
        if(nums.size() == 0)
        {
            return 0;
        }
        set <int> s(nums.begin(),nums.end());
        vector <int> num(s.begin(),s.end());

        int maxcount = 1;
        int count = 1;
        for(int i=1;i<num.size();i++)
        {
            if(num[i] == num[i-1]+1)
            {
                count++;
            }
            else
            {
                count = 1;
            }
            maxcount = max(count,maxcount);
        }
        return maxcount;
       
    }
};
