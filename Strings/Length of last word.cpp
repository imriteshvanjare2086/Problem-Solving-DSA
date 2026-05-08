// Problem: Length of last word
// Platform: LeetCode
// Time Complexity: O(n)
// Space Complexity: O(1)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) 
    {
        int n = s.size();
        bool ok = true;
        int count = 0;
        for(int i=n-1;i>=0;i--)
        {
            if(isalpha(s[i]))
            {
                count++;
                ok = false;
                continue;
            }
            if(s[i] == ' ' && ok)
            {
                continue;
            }
            else
            {
                break;
            }
        }    
        return count;
    }
};