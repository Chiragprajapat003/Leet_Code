// Last updated: 8/16/2026, 9:11:28 PM
class Solution {
public:
    int maxFreqSum(string s) {

        unordered_map<char, int> cons;
        unordered_map<char, int> vowel;

        for(char c : s) {
            if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u') {
                vowel[c]++;
            } else {
                cons[c]++;
            }
        }

        int max1 = 0;
        int max2 = 0;

        for(auto &p : cons) {
            max1 = max(max1, p.second);
        }

        for(auto &p : vowel) {
            max2 = max(max2, p.second);
        }

        return max1 + max2;
    }
};