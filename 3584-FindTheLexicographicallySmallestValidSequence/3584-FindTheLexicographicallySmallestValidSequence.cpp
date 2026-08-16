// Last updated: 8/16/2026, 9:11:43 PM
class Solution {
public:
    vector<int> validSequence(string word1, string word2) {

        int n = word1.size();
        int m = word2.size();

        vector<int> ans(m);

        vector<int> last(m, -1);

        int i = n - 1;
        int j = m - 1;

        while (i >= 0 && j >= 0) {

            if (word1[i] == word2[j]) {
                last[j] = i;
                j--;
            }

            i--;
        }
        i = 0;
        j = 0;

        bool check = false;   

        while (i < n && j < m) {

           
            if (word1[i] == word2[j]) {

                ans[j] = i;

                i++;
                j++;
            }

        
            else {

                if (!check &&
                    (j == m - 1 || i < last[j + 1])) {

                    ans[j] = i;

                    check = true;

                    i++;
                    j++;
                }
                else {
                    i++;
                }
            }
        }

        if (j == m) {
            return ans;
        }

        return {};
    }
};