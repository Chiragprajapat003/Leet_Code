// Last updated: 8/16/2026, 9:19:42 PM
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        // int max = *max_element(nums.begin());
        int mn = *min_element(nums.begin() , nums.end());
        int n = nums.size();

        unordered_set<int> st(nums.begin() , nums.end());
        vector<int> ans;

        for(int i = 0 ; i < n ; i++){
            if(!st.count(1+i)){
                ans.push_back(1+i);
            }
        }
    return ans;
    }
};