// Last updated: 8/16/2026, 9:14:52 PM
class Solution {
public:
    int minOperations(vector<int>& nums) {

        // base case 

        if(nums.size() == 1) return 0;
        int count = 0;

        for(int i = 0 ; i < nums.size()-1 ; i++){
            while(nums[i]  >=  nums[i+1]){
               int diff = nums[i] - nums[i+1] +1;
               count += diff;
               nums[i+1] += diff; 
            }
        }
        return count;
    }
};