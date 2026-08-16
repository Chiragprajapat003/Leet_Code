// Last updated: 8/16/2026, 9:22:02 PM
class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        unordered_set<string> seen;
        unordered_set<string> repeated;
        
        vector<string> ans;

        for (int i = 0; i + 10 <= s.length(); i++) {
            string str = s.substr(i, 10);

            if (seen.count(str)) {
                repeated.insert(str);
            } else {
                seen.insert(str);
            }
        }

        for (auto &str : repeated) {
            ans.push_back(str);
        }

        return ans;
    }
};
