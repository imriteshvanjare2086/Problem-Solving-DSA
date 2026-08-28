// Problem: Print word vertically
// Platform: LeetCode
// Time Complexity: O(n^2)
// Space Complexity: O(n)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> printVertically(string s) {
        
        vector <string> ans;
        vector <string> v;

        stringstream ss(s);
        string word = "";

        int maxi = 0;
        while(ss >> word)
        {
            maxi = max(maxi,(int)word.size());
        }

        stringstream st(s);
        string text = "";

        while(st >> text)
        {
            while(text.size() < maxi)
            {
                text+=" ";
            }
            v.push_back(text);
        }
        
        for(int i=0;i<maxi;i++)
        {
            string str = "";
            for(int j=0;j<v.size();j++)
            {
                str+=v[j][i];
            }
            while (!str.empty() && str.back() == ' ')
            {
                str.pop_back();
            }
            ans.push_back(str);
        }
        return ans;
    }
};