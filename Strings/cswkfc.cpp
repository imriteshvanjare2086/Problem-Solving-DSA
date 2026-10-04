#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numberOfSubstrings(string s, int k) {

        int cnt = 0;
        int n = s.size();

        for(int i = 0; i < n; i++)
        {
            unordered_map<char, int> mp;

            for(int j = i; j < n; j++)
            {
                mp[s[j]]++;

                if(mp[s[j]] == k)
                {
                    cnt+=(n-j);
                    break;
                }
            }
        }

        return cnt;
    }
};