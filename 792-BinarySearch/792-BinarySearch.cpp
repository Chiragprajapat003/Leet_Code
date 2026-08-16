// Last updated: 8/16/2026, 9:18:35 PM
class Solution {
public:
    int search(vector<int>& nums, int target) {
        // for(int i = 0 ; i < nums.size() ;i++){
        //     if(nums[i] == target){
        //         return i;
        //     }
        // }

        // binary search method ->> 
        int left = 0;
        int right = nums.size()-1;
        while(left <= right){
            int mid = (right+left)/2;
            if(nums[mid] < target ){
                left++;
            }else if(nums[mid] > target){
                right--;
            }else{
                return mid;
            }
        }
        return -1;
    }
};