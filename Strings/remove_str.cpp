#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeStars(string s) {
        
        string str = "";
        for(int i=0;i<s.size();i++)
        {   
            if(isalpha(s[i]))
            {
                str+=s[i];
            }
            else
            {
                str.pop_back();
            }
        }
        return str;
    }
};