// Last updated: 8/16/2026, 9:15:24 PM
class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        
        
        unordered_set<int> st;
        int sum = 0;
        int mx = INT_MIN;
        int left = 0;

        for(int right = 0 ; right < nums.size() ; right++){
            while(st.count(nums[right])){
                st.erase(nums[left]);
                sum -= nums[left];
                left++;
                
            }
            st.insert(nums[right]);
            sum += nums[right];
            mx = max(sum ,mx);
        }
        return mx;
    }
};