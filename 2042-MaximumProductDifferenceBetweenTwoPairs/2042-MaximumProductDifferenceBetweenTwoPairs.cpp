// Last updated: 8/16/2026, 9:14:28 PM
class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        // sort(nums.begin() , nums.end());
        // int n = nums.size();
        // return nums[n-1]*nums[n-2] - nums[0]*nums[1];
        

       // 2nd approch for 0(n) time complexity
       int max1 = INT_MIN , max2 = INT_MIN;
       int min1 = INT_MAX , min2 = INT_MAX;
       for(int x : nums){
        if(x > max1){
            max2 = max1;
            max1 = x;
            
        }else if(x > max2){
            max2 = x;
        }

        if(x < min1){
            min2 = min1;
            min1 = x;
            
        }else if(x < min2){
            min2 = x;
        }
       }

       return max1*max2 - min1*min2;
    } 
};