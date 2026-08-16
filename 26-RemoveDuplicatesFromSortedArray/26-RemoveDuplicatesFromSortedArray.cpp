// Last updated: 8/16/2026, 9:23:58 PM
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
int count = 1;
// int num = 0;
        for(int i = 1; i < nums.size() ; i++){
            if(nums[i] != nums[count-1]){
nums[count] = nums[i];
++count;
            }
        }
        return count;
    }
};