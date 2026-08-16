// Last updated: 8/16/2026, 9:16:57 PM
class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;

        for (int num : nums) {
            if ((num >= 10 && num <= 99) ||
                (num >= 1000 && num <= 9999) ||
                (num == 100000)) {
                count++;
            }
        }

        return count;
    }
};