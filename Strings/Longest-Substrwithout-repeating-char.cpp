// Problem: Longest Substring without repeating character
// Platform: LeetCode
// Time Complexity: O(n²)
// Space Complexity: O(n)

#include<iostream>>
#include<string>
#include<unordered_set>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        int maxcount = 0;
        for(int i=0;i<s.size();i++)
        {
            unordered_set <char> st;
            int count = 0;
            for(int j=i;j<s.size();j++)
            {
                if(!st.count(s[j]))
                {
                    count++;
                    st.insert(s[j]);
                }
                else
                {
                    break;
                }
            }
            maxcount = max(maxcount,count);
        }    
        return maxcount;
    }
};