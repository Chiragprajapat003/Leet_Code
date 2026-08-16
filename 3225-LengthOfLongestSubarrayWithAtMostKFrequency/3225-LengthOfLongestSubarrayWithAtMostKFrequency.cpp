// Last updated: 8/16/2026, 9:11:58 PM
class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        
        if(nums.size() == 1) return 1;
        int mx = 0;

        unordered_map<int , int > mp;
        int left = 0;
        int right = 0;
        while( left < nums.size() &&right < nums.size()){
            mp[nums[right]]++;
            if(mp[nums[right]]  <= k){
                right++;
            }else{
                mx = max(mx , right - left );
                while(mp[nums[right]] > k){
                mp[nums[left]]--;
                left++;
                }
               
                
                right++;
            }
        }
        mx = max(mx , right -left );
        
        return mx;
    }
};