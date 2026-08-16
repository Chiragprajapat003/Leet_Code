// Last updated: 8/16/2026, 9:23:38 PM
class Solution {
public:
    bool canJump(vector<int>& nums) {

        if(nums.size() == 1) return true;
       int  size = nums.size() -1;
       int jump = 0;
       for(int i = 0 ; i < size ; i++){
           
           if(nums[i] == 0 && jump <= i ) return false;

           jump = max(jump,nums[i] + i);
          int k = nums[i];
          
            if(k+i+1 >= nums.size()){
                return true;
          }
           
          
       }
       return false;
    }
};