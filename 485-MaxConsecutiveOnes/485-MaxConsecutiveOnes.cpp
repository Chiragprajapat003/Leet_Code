// Last updated: 8/16/2026, 9:19:34 PM
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int mx_one = 0;
        int count = 0;

        // int left = 0;
        for(int right = 0 ; right < nums.size() ; right++){
            if(nums[right] == 1){
                count++;
            }else{
                // left++;
                mx_one = max(mx_one , count);
                count = 0;
            }
        }
         mx_one = max(mx_one , count);
        return mx_one;
    }
};