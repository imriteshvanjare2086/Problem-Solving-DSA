// Problem: Two Sum
// Platform: LeetCode
// Time Complexity: O(n) 
// Space Complexity: O(n)

#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        unordered_map <int,int> freq;
        for(int i : nums)
        {
            freq[i]++;
        }
        int n = nums.size();
        for(int i : nums)
        {
            if(freq[i] > n/2)
            {
                return i;
            }
        } 
        return -1;
    }
};