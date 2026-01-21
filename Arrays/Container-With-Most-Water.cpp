// Problem: Container With Most Water
// Platform: LeetCode
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0;
        int r = height.size() - 1;
        int maxWater = 0;

        while (l < r) {
            int width = r - l;
            int ht = min(height[l], height[r]);
            int area = width * ht;

            maxWater = max(maxWater, area);

            if (height[l] < height[r])
                l++;
            else
                r--;
        }
        return maxWater;
    }
};
