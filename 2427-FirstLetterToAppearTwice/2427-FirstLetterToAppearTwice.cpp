// Last updated: 8/16/2026, 9:13:00 PM
class Solution {
public:
    char repeatedCharacter(string s) {

        unordered_set<char> seen;

        for (int i = 0; i < s.size(); i++) {

            if (seen.count(s[i])) {
                return s[i];
            }

            seen.insert(s[i]);
        }

        return ' ';
    }
};