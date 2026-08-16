// Last updated: 8/16/2026, 9:21:04 PM
class Solution {
public:
    bool isAnagram(string s, string t) {
        //   if(s.size() != t.size()) {
        //     return false;
        // }
        //  sort(s.begin() , s.end());
        //  sort(t.begin() , t.end());
        // if(s == t){
        //     return true;
        // }

        // return false;

        // 2nd method ->

        if(s.size() != t.size()) {
            return false;
        }

        int freq[26] = {0};

        for(int i = 0; i < s.size(); i++) {
            freq[s[i] - 'a']++;
            freq[t[i] - 'a']--;
        }

        for(int i = 0; i < 26; i++) {
            if(freq[i] != 0) {
                return false;
            }
        }

        return true;
        
    }
};