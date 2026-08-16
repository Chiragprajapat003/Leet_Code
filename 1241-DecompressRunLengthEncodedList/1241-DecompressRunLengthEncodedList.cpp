// Last updated: 8/16/2026, 9:17:23 PM
class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> ans;
        for(int i = 0 ; i < nums.size() ; i+= 2){
            int n = nums[i];
            int m = nums[i+1];
            for(int i = 0 ; i < n ; i++){
                ans.push_back(m);
            }
        }
        return ans;
            }
};