#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) 
    {
        vector<vector<int>> ans;
        
        for(int i=0;i<numRows;i++)
        {
            vector <int> v;
            int num = 1;
            for(int j=0;j<=i;j++)
            {
                v.push_back(num);
                num = num*(i-j)/(j+1);
            }
            ans.push_back(v);
        }    
        return ans;
    }
};