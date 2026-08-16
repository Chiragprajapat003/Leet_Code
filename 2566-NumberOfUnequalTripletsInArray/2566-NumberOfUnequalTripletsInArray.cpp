// Last updated: 8/16/2026, 9:12:27 PM
class Solution {
public:
    int unequalTriplets(vector<int>& nums) {
        int count  = 0;
        for(int i = 0 ; i < nums.size()-2 ; i++){
            
            for(int j = i+1 ; j < nums.size()-1 ; j++ ){
                
                for( int k = j+1 ; k < nums.size() ; k++)   {

                    if(nums[i] != nums[j] && nums[j] != nums[k] && nums[i] != nums[k]){
                        count++;
                    }
                }
            }
        }
        return count;
    }
};