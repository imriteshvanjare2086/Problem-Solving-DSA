#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        
        map <int,string> mp;

        int i = 0;
        for(string s : names)
        {
            mp[heights[i++]] = s;
        }

        vector <string> v;
        for(auto it = mp.rbegin();it!=mp.rend();it++)
        {
            v.push_back(it->second);
        }
        return v;
    }
};