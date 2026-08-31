// Last updated: 8/31/2026, 9:51:23 PM
class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        
        sort(nums.begin(), nums.end());

        int count = 1;
        for(int i = 0 ; i < nums.size();i++){
            if(count*k == nums[i]){
                count++;
            }else{
                continue;
            }
        }
        return k*count;
    }
};