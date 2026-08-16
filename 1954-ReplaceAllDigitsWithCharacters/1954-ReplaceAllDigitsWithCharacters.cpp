// Last updated: 8/16/2026, 9:14:45 PM
class Solution {
public:
    string replaceDigits(string s) {
        string store = "";
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i] >= 'a' && s[i] <= 'z'){
                store += s[i];
            }else{
                store += s[i] + (s[i-1]-'0');
            }
        }
        return store;
    }
};
