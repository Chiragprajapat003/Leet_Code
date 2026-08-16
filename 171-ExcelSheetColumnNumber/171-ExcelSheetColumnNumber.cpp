// Last updated: 8/16/2026, 9:22:19 PM
class Solution {
public:
    int titleToNumber(string columnTitle) {

        int ans = 0;

        for(char c : columnTitle) {
            ans = ans * 26 + (c - 'A' + 1);
        }

        return ans;
    }
};