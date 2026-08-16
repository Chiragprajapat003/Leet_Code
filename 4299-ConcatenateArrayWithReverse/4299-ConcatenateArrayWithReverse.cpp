// Last updated: 8/16/2026, 9:11:12 PM
class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        
        int n = nums.size();
        vector<int> ans(2*n);

        for(int i = 0  ; i < n ; i++){
            ans[i] = nums[i];
            ans[2*n-i-1] = nums[i];
        }
        return ans;
    }

};