// Last updated: 8/16/2026, 9:14:56 PM
class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int mx = nums[0];
        int sum = nums[0];
        for(int i =0 ; i < nums.size()-1 ; i++){
            if(nums[i] < nums[i+1]){
                sum += nums[i+1];
                
            }else {
                sum = 0;
                sum += nums[i+1];
            }

            mx = max(mx , sum);
        }
        return mx;
    }
};