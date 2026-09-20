#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) 
    {
       vector<vector<int>> ans;
       map <int,int> mp;
       for(auto &a : items1)
       {
            mp[a[0]]+=a[1];
       }
       for(auto &a : items2)
       {
            mp[a[0]]+=a[1];
       }
       for(auto &a : mp)
       {
            ans.push_back({a.first,a.second});
       }
       return ans;
    }
};