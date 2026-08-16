// Last updated: 8/16/2026, 9:14:46 PM
class Solution {
public:
    int arraySign(vector<int>& nums) {
        double prod = 1;

        for(int i = 0 ; i < nums.size() ; i++){
            prod *= nums[i];
        }

        if(prod > 0){
            return 1;
        } else if( prod < 0){
            return -1;
        }
        return 0;
    }
};