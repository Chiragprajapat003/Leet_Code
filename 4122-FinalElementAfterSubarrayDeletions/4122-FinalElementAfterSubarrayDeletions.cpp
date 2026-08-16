// Last updated: 8/16/2026, 9:11:16 PM
class Solution {
public:
    int finalElement(vector<int>& nums) {
        return max(nums.front(), nums.back());
    }
};