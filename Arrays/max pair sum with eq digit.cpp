#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumSum(vector<int>& nums) {
        
        unordered_map<int, vector<int>> freq;

        int j = 0;
        for(int i : nums)
        {
            string s = to_string(i);
            long long sum = 0;

            for(char c : s)
            {
                sum += c - '0';
            }

            freq[sum].push_back(j);
            j++;
        }

        int maxi = INT_MIN;

        for(auto &a : freq)
        {
            int maxisum = INT_MIN;
            vector<int> v = a.second;

         

            int first = INT_MIN;
            int second = INT_MIN;

            for(int i : v)
            {
                first = max(first, nums[i]);
            }

            bool found = false;

            for(int i : v)
            {
                if(nums[i] == first && !found)
                {
                    found = true;
                }
                else
                {
                    second = max(second, nums[i]);
                }
            }

            if(second != INT_MIN)
            {
                maxisum = first + second;
            }

            maxi = max(maxi, maxisum);
        }

        return maxi == INT_MIN ? -1 : maxi;
    }
};