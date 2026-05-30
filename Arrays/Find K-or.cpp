// Problem: Find the k-or of an array
// Platform: LeetCode
// Time Complexity: O(n^2)
// Space Complexity: O(n)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findKOr(vector<int>& nums, int k) 
    {
        int Bits=0;
        for(int x : nums)
        {
            if(x!=0)
            {
                Bits = max(Bits, 32 - __builtin_clz(x));
            }
        }
        vector <string> v;
        for(int i : nums)
        {
            string s;
            while(i>0)
            {
                s+=(i%2)+'0';
                i/=2;
            }
            while(s.size() < Bits)
            {
                s+='0';
            }
            reverse(s.begin(),s.end());
            cout << s << endl;
            v.push_back(s);
        }   
        string ans;
        for(int i=0;i<v[0].size();i++)
        {
            int ob=0; 
            int zb=0; 
            for(int j=0;j<v.size();j++)
            {
                if(v[j][i] == '1')
                {
                    ob++;       
                }
                else
                {
                    zb++;
                }
            }
            ans+=(ob>=k)? '1' :'0';
        }
        reverse(ans.begin(),ans.end());
        long long base=1;
        int val=0;
        for(char c : ans)
        {
            if(c=='1')
            {
                val+=base;
            }
            base*=2;
        }
        return val;
    }
};