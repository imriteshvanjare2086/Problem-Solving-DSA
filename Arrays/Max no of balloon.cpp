// Problem: Max no of balloon
// Platform: LeetCode
// Time Complexity: O(n) 
// Space Complexity: O(1)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxNumberOfBalloons(string text) {
        
        int cnt = 0;
        unordered_map <char,int> freq;
        for(char  c: text)
        {
            freq[c]++;
        }       

        int count = 0;
        while(true)
        {
            int cnt = 0;
            string s = "balloon";
            for(char c : s)
            {
                if(freq[c] >= 1)
                {
                    cnt++;
                    freq[c]--;
                }
                else
                {
                    break;
                }
            }
            if(cnt == s.size())
            {
                count++;
            }
            else
            {
                break;
            }
        }
        return count;
    }
};