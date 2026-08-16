// Last updated: 8/16/2026, 9:22:49 PM
class Solution {
public:
    bool isPalindrome(string s) {
        // if(s == " "){
        //     return true;
        // }
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        string s1 = "";
        for(char c : s){
            if((c >= 'a' && c <= 'z') || (c >= '0' && c <= '9')){
                s1 += c;
            }
        }
        string s2 = s1;
        reverse(s2.begin(), s2.end());
        return s1 == s2;
    }
};