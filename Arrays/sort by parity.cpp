#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector <int> v;
        for(int i : nums)
        {
            if(i%2 == 0)
            {
                v.push_back(i);
            }
        }
        for(int i : nums)
        {
            if(i%2 != 0)
            {
                v.push_back(i);
            }
        }
        return v;
    }
};