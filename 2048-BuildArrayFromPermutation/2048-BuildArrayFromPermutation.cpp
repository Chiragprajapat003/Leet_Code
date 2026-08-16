// Last updated: 8/16/2026, 9:14:23 PM
class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        for(int i = 0 ; i < n ; i++){
            ans[i] = nums[nums[i]];
        }
        return ans;
    }
};