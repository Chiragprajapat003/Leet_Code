// Last updated: 8/16/2026, 9:18:58 PM
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0;

       for( int i = 0 ; i < nums.size() ; i++){
        sum += nums[i];
       } 
        int sum2  = 0;

        if(sum2 == (sum-nums[0])) return 0;
       for(int i = 0 ; i < nums.size()-1 ; i++){
        if(i == 0 ){
            sum2 += nums[i];
            if(sum2 == (sum-nums[i]-nums[i+1])){
                return i+1;
            }
            sum = sum-nums[i]-nums[i+1];
        }else {
                sum2 += nums[i];
                if(sum2 == (sum - nums[i+1])){
                    return i+1;
                }
                sum = sum-nums[i+1];
        }
       }
       return -1;
    }

};