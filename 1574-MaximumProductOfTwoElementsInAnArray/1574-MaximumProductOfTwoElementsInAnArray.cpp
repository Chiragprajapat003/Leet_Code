// Last updated: 8/16/2026, 9:16:23 PM
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        sort(nums.begin() , nums.end());
        int n = nums.size()-1;

        return (nums[n-1] -1)*(nums[n]-1);
    }
};