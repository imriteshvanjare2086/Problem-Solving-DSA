// Problem: Find common characters
// Platform: LeetCode
// Time Complexity: O(n^2)
// Space Complexity: O(n)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> commonChars(vector<string>& words) 
    {
        unordered_map <char,int> freq;

        for(char c : words[0])
        {
                freq[c]++;
        }    

        vector <string> v;

        for(int i=1;i<words.size();i++)
        {
            unordered_map <char,int> temp;

            for(char c : words[i])
            {
                temp[c]++;
            }

            for(auto &p : freq)
            {
                p.second = min(p.second,temp[p.first]);
            }
        }

        for(auto &p : freq)
        {
            for(int i=0;i<p.second;i++)
            {
                v.push_back(string(1,p.first));
            }
        }
        return v;
    }
};