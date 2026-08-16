// Last updated: 8/16/2026, 9:22:01 PM
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        // int count = k;
        
        vector<int> v ;
        k %= nums.size();
        int p = nums.size()-k;
       for(int i = p ; i < nums.size(); i++){
       
            v.push_back(nums[i]);
        
      
       } 

       for(int i = 0 ; i < p ; i++){
        v.push_back(nums[i]);
       }

        nums =v;
    }
};