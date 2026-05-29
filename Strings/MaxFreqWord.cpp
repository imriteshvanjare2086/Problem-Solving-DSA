// Problem: Most Common Word
// Platform: LeetCode
// Time Complexity: O(n)
// Space Complexity: O(n)

#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    string mostCommonWord(string p, vector<string>& ban) {
        
        transform(p.begin(),p.end(),p.begin(), ::tolower);

       for(char &c : p)
       {
        if(ispunct(c))
        {
            c = ' ';
        }
       }

       unordered_map <string,int> freq;
       string word;
       stringstream ss(p);
       string result;

       unordered_set <string> seen(ban.begin(),ban.end());

       while(ss >> word)
       {
            freq[word]++;
       }

       string maxword;
       int maxfreq = 0;
       for(auto &a : freq)
       {
            if(seen.find(a.first) == seen.end() && a.second > maxfreq)
            {
                maxword = a.first;
                maxfreq = a.second;
            }
       }
       return maxword;
    }
};