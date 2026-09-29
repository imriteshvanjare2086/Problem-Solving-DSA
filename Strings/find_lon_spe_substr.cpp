#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int maximumLength(string s) {
        
        int maxi = INT_MIN;
        int n = s.size();
        unordered_map <string,int> freq;
        for(int i=0;i<n;i++)
        {
            string str = "";
            for(int j=i;j<n;j++)
            {
               str+=s[j];
               set <char> st(str.begin(),str.end());
               if(st.size() == 1)
               {
                    freq[str]++;
               }
            }
        }

        for(auto &a : freq)
        {
            if(a.second >= 3)
            {
                maxi = max(maxi,(int)a.first.size());
            }
        }   
        return maxi == INT_MIN ? -1 : maxi;
    }
};