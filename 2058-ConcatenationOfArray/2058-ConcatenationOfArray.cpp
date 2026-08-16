// Last updated: 8/16/2026, 9:14:21 PM
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {

        int n = nums.size();

        vector<int> ans(2 * n);

        for(int i = 0; i < n; i++){

            ans[i] = nums[i];

            ans[i + n] = nums[i];
        }

        return ans;
    }
};