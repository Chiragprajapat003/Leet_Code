// Last updated: 8/19/2026, 3:32:17 PM
class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {

        vector<int> freq(51);

        for (int& i : nums) {
            ++freq[i];
        }

        int n = nums.size();
        int ans = -1;

        for (int i = 0; i < n; i++) {

            if (k == n || 
                (freq[nums[i]] == 1 && 
                (k == 1 || !i || i == n - 1 ))) {

                ans = max(ans, nums[i]);
            }
        }

        return ans;
    }
};