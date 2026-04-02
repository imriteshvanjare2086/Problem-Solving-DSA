// Problem: Longest Substring without repeating character
// Platform: LeetCode
// Time Complexity: O(n)
// Space Complexity: O(n)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int compress(vector<char>& chars) 
    {
        
        int count = 1;
        vector <int> v;
        for(int i=0;i<chars.size()-1;i++)
        {
            if(chars[i] == chars[i+1])
            {
                count++;
            }
            else
            {
                v.push_back(chars[i]);

                if(count > 1)
                {
                    string s = to_string(count);
                    for(char c : s)
                    {
                        v.push_back(c);
                    }
                }
                count = 1;
            }
        }
        v.push_back(chars[chars.size()-1]);
        if(count > 1)
        {
            string s = to_string(count);
            for(char c : s)
            {
                v.push_back(c);
            }
        }

        for(int i=0;i<v.size();i++)
        {
            chars[i] = v[i];
        }
        return v.size();
    }
};