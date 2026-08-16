// Last updated: 8/16/2026, 9:23:55 PM
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count = 0;
        int size = nums.size();
        int i = 0;
        while( i != nums.size()){
            if(nums[i] == val){
                count+= 1;
                nums.erase(nums.begin() + i);
            }else{
                i++;
            }
        }

        return size-count;
    }
};