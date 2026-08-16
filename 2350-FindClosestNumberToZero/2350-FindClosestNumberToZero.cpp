// Last updated: 8/16/2026, 9:13:17 PM
class Solution {
public:
    int findClosestNumber(vector<int>& nums) {

       int ans = nums[0];
       

        for(int i = 0 ; i < nums.size() ; i++){
            if(abs(nums[i]) < abs(ans)){
                    ans = nums[i];
            }else if(abs(nums[i]) == abs(ans) && nums[i] > ans){
                ans = nums[i];
            }
        }
        return ans;


    }
};