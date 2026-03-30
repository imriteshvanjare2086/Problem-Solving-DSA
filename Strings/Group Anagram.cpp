// Problem: Group Anagrams
// Platform: LeetCode
// Time Complexity: O(n*klogk)
// Space Complexity: O(n*k)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       
       unordered_map <string,vector<string>> rs;

        for(string &b : strs)
        {
            string s = b;
            sort(s.begin(),s.end());
            rs[s].push_back(b);
        }

        vector<vector<string>> result;

        for(auto &p : rs)
        {
            result.push_back(p.second);
        }

        return result;
    }
};