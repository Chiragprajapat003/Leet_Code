// Last updated: 8/16/2026, 9:16:37 PM
class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> ans;
        for(int i = 0 ; i < nums.size() ; i++){
            ans.insert(ans.begin() + index[i] , nums[i]);
        }
        return ans;
    }
};