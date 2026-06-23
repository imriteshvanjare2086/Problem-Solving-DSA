// Problem: Vowel substrings of a string
// Platform: LeetCode
// Time Complexity: O(n^3)    
// Space Complexity: O(1)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    bool isvowel(string str)
    {
        set <char> s;
        for(char c : str)
        {
            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            {
                s.insert(c);
            }
            else
            {
                return false;
            }
        }
        if(s.size() == 5)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    int countVowelSubstrings(string word) 
    {

        int count = 0;
        for(int i=0;i<word.size();i++)
        {
            string str = "";
            for(int j=i;j<word.size();j++)
            {
                str+=word[j];
                if(str.size() >= 5)
                {
                    if(isvowel(str))
                    {
                        count++;
                    }
                }
            }
        }    
        return count;
    }
};