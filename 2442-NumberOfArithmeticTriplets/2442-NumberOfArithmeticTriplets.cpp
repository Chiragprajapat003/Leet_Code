// Last updated: 8/16/2026, 9:12:58 PM
class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int count = 0;

        unordered_set<int> st(nums.begin(), nums.end());

        for(int x : nums) {
            if(st.count(x + diff) &&
               st.count(x + 2 * diff)) {
                count++;
            }
        }

        return count;
    }
};