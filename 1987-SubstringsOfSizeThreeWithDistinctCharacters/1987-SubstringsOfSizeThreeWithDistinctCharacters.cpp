// Last updated: 8/16/2026, 9:14:31 PM
class Solution {
public:
    int countGoodSubstrings(string s) {
        int count = 0;
        if(s.size() < 3){
            return 0;
        }
        for(int i = 0 ; i < s.size() - 2; i++ ){

            if(s[i+1] != s[i] && s[i+2] != s[i] && s[i+1] != s[i+2]){
                count += 1;
            }
        }
        return count;
    }
};