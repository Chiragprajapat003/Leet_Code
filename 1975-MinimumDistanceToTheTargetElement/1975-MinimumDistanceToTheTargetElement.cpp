// Last updated: 8/16/2026, 9:14:32 PM
class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int min_dis = INT_MAX;
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] == target){
                min_dis = min(min_dis , abs(i-start));
            }
        }
        return min_dis;
    }
};