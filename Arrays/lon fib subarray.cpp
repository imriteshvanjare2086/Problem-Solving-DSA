// Problem: Contain Duplicate
// Platform: LeetCode
// Time Complexity: O(nlogn)
// Space Complexity: O(n)

class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        if (n < 3) return nums.size();

        int maxi = 0;
        int curr = 2;  

        for (int i = 2; i < n; i++) {
            if (nums[i] == nums[i-1] + nums[i-2]) {
                curr++;
            } else {
                curr = 2;  
            }
            maxi = max(maxi, curr);
        }

        return maxi >= 3 ? maxi : 2;
    }
};