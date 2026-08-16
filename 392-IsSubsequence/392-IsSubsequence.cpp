// Last updated: 8/16/2026, 9:20:02 PM
class Solution {
public:
    bool isSubsequence(string s, string t) {

        int i = 0;
        int j = 0;

        while (i < s.size() && j < t.size()) {

            if (s[i] == t[j]) {
                i++;
            }

            j++;
        }

        return i == s.size();
    }
};