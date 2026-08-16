// Last updated: 8/16/2026, 9:16:43 PM
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> ans;
        for(int i = 0 ; i < nums.size() ; i++){
            int count = 0;
            for(int j = 0 ; j < nums.size() ; j++){
                if(nums[i] > nums[j]){
                    count++;
                }
             
            }
            ans.push_back(count);
        }
        return ans;
    }
};