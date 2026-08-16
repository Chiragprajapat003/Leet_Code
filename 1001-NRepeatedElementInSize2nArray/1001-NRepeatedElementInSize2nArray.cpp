// Last updated: 8/16/2026, 9:18:04 PM
class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_set<int> seen;

        for (int num : nums) {
            if (seen.count(num))
                return num;

            seen.insert(num);
        }

        return -1;
    }
};