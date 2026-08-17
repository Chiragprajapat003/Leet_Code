// Last updated: 8/17/2026, 10:49:34 PM
class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int move = 0;
        int mx = nums[0];
        for(int i = 1 ; i < nums.size() ; i++){
            if(mx >= nums[i]){
                int diff = mx-nums[i] ;
                mx = nums[i]+diff+1;
                move += diff+1;
            }else{
                mx = nums[i];
            }
            
        }
        return move;
    }
};