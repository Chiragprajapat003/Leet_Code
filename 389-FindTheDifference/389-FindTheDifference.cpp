// Last updated: 8/16/2026, 9:20:06 PM
class Solution {
public:
    char findTheDifference(string s, string t) {

        vector<int> freq(26, 0);

        for(char c : s){
            freq[c - 'a']++;
        }

        for(char c : t){
            freq[c - 'a']--;
        }

        for(int i = 0; i < 26; i++){
            if(freq[i] == -1){
                return i + 'a';
            }
        }

        return ' ';
    }
};