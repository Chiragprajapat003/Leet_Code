// Last updated: 8/16/2026, 9:21:22 PM
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> st;

        for (int num : nums) {
            if (st.find(num) != st.end()) {
                return true;
            }
            st.insert(num);
        }

        return false;
    }
};