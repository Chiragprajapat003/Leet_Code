// Last updated: 8/16/2026, 9:11:24 PM
class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n = nums.size();
        int xr = 0;
        bool hasNonZero = false;

        for (int x : nums) {
            xr ^= x;

            if (x != 0) {
                hasNonZero = true;
            }
        }

       
        if (xr != 0) {
            return n;
        }
        if (hasNonZero) {
            return n - 1;
        }
        return 0;
    }
};