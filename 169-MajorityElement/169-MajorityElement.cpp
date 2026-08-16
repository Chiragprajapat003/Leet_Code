// Last updated: 8/16/2026, 9:22:17 PM
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        // for(int i = 0; i < nums.size(); i++) {
            
        //     int count = 0;

        //     for(int j = 0; j < nums.size(); j++) {
        //         if(nums[i] == nums[j]) {
        //             count++;
        //         }
        //     }

        //     if(count > nums.size() / 2) {
        //         return nums[i];
        //     }
        // }

        // return -1;


        // another method --> 
        map<int , int > mp;

        for(int i = 0 ; i < nums.size() ; i++){
             mp[nums[i]]++;
             if(mp[nums[i]] > nums.size()/2){
                return nums[i];
             }
        }
        return -1;
    }
};