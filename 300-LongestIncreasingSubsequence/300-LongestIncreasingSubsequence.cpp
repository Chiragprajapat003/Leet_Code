// Last updated: 8/16/2026, 9:20:41 PM
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {

        int n = nums.size();

        vector<int> dp(n, 1);

        int ans = 1;

        for (int i = 1; i < n; i++) {

            for (int j = 0; j < i; j++) {

                if (nums[i] > nums[j]) {

                    dp[i] = max(dp[i], dp[j] + 1);

                }
            }

            ans = max(ans, dp[i]);
        }

        return ans;
    }
};