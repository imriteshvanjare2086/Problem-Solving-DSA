// Problem: Valid Palindrom
// Platform: LeetCode
// Time Complexity: O(n)
// Space Complexity: O(n)


#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        transform(s.begin(),s.end(),s.begin(),::tolower);
        string result;
        for(int i=0;i<s.size();i++)
            {
                if((s[i]>='a' && s[i]<='z') || (s[i] >= '0' && s[i] <= '9'))
                {
                    result+=s[i];
                }
            }
        string x = result;
        reverse(result.begin(),result.end());

        return x==result;
    }
};