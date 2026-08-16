// Last updated: 8/16/2026, 9:14:13 PM
class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int count = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            for(int j = i+1 ; j < nums.size() ; j++){
                if(abs(nums[i] - nums[j]) == k){
                    count++;
                }
            }
        }
        return count;
    }
};