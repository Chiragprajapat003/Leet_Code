// Last updated: 8/31/2026, 9:51:46 PM
class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int i = 0;
        int count = 0;

        string ans = "";

        for (int j = 0; j < s.size(); j++) {

            if (s[j] == '1') {
                count++;
            }

            while (count > k) {
                if (s[i] == '1') {
                    count--;
                }
                i++;
            }

            if (count == k) {

                while (s[i] == '0') {
                    i++;
                }

                string st = s.substr(i, j - i + 1);

                if (ans == "" || st.size() < ans.size() ||
                    (st.size() == ans.size() && st < ans)) {
                    ans = st;
                }
            }
        }

        return ans;
    }
};