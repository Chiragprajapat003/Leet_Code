// Last updated: 8/16/2026, 9:11:14 PM
class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int max = *max_element(nums.begin() , nums.end());
        int min = *min_element(nums.begin() , nums.end());

        int length = max-min+1;
        vector<bool>  check(length);

        for(int i : nums){
            check[i-min] = true;
        }

        vector<int> ans;

        for(int i = 0 ; i < length ; i++){
            if(!check[i]){
                ans.push_back(i+min);
            }
        }

    return ans;
    }
};