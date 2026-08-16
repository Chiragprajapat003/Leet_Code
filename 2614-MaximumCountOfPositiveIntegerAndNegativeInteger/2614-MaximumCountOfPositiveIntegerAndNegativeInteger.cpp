// Last updated: 8/16/2026, 9:12:18 PM
class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int pos = 0;
        int neg = 0;

        for(int i = 0 ; i < nums.size() ;i++){
            if(nums[i] > 0){
                pos++;
            }else if(nums[i] < 0){
                neg++;
            }else{
                continue;
            }
        }

        return pos > neg ? pos : neg;
    }
};