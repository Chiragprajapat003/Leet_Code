// Last updated: 8/16/2026, 9:11:56 PM
class Solution {
public:
    int missingInteger(vector<int>& nums) {
        
        unordered_set<int> st(nums.begin() , nums.end());

        int mx = nums[0];
    
        int i = 0;
        int j = 1;
        while(j < nums.size() && i < nums.size()){
            if(nums[j-1] == (nums[j]-1)){
                mx += nums[j];
                j++;
            }else{
             break;
            }   
        }
       

        while(st.count(mx)){
        mx++;
        }
        return mx;
    }
};