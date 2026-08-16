// Last updated: 8/16/2026, 9:13:58 PM
class Solution {
public:
    int smallestEqual(vector<int>& nums) {
       for(int i = 0 ; i < nums.size() ; i++){
        if(i%10 == nums[i]){
            return i;
            break;
        }
       } 
       return -1;
    }
};