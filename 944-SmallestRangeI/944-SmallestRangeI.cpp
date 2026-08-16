// Last updated: 8/16/2026, 9:18:14 PM
class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {

        int minimum = *min_element(nums.begin(), nums.end());
        int maximum = *max_element(nums.begin(), nums.end());

        return max(0, (maximum - minimum) - 2 * k);
    }
};