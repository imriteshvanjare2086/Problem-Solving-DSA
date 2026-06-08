// Problem: Top k  most frequent elements
// Platform: LeetCode
// Time Complexity: O(nlogn)
// Space Complexity: O(n)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map <int,int> freq;

        for(int i : nums)
        {
            freq[i]++;
        }

        vector<pair<int,int>> v(freq.begin(),freq.end());
        sort(v.begin(),v.end(),[](auto &a,auto &b)
        {
            if(a.second == b.second)
            {
                return a.first < b.first;
            }
            return a.second > b.second;
        });

        vector <int> ans;
        for(auto &a : v)
        {
            if(k > 0)
            {
                ans.push_back(a.first);
            }
            else
            {
                break;
            }
            k--;
        }
        return ans;
    }
};