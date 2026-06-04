// Problem: Reverse vowels in string
// Platform: LeetCode
// Time Complexity: O(n)    
// Space Complexity: O(1)

#include<bits/stdc++.h>
using namespace std;    


class Solution {
public:
        bool isvowel(char c)
        {
            char ch = tolower(c);
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            {
                return true;
            }
            return false;
        }

    string reverseVowels(string s) {

        int i = 0;
        int j = s.size()-1;

        while(i < j)
        {
            if(!isvowel(s[i]))
            {
                i++;
            }
            else if(!isvowel(s[j]))
            {
                j--;
            }
            else
            {
                swap(s[i],s[j]);
                i++;
                j--;
            }
        }
        return s;
    }
};