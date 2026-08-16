// Last updated: 8/16/2026, 9:13:56 PM
class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> arr;
        sort(nums.begin() , nums.end());
        int i = 0;
        while(i < nums.size() && target >= nums[i]){
            if(nums[i] == target){
                arr.push_back(i);
            }
            i++;
        }
            return arr;
    }
};