// Last updated: 8/16/2026, 9:24:30 PM
class Solution {
public:
    int maxArea(vector<int>& height) {

        int left = 0;
        int right = height.size() - 1;

        int ans = 0;

        while (left < right) {

            int width = right - left;
            int h = min(height[left], height[right]);

            ans = max(ans, width * h);

            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }

        return ans;
    }
};