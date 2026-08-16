// Last updated: 8/16/2026, 9:23:48 PM
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
    for(int i = 0 ; i < nums.size() ; i++){
        if(target <= nums[i]){
            return i;
        }
    }
   return  nums.size();
    }
};