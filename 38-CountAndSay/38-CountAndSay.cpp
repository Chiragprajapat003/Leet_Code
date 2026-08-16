// Last updated: 8/16/2026, 9:23:44 PM
class Solution {
public:
    string countAndSay(int n) {
        string s = "1";
        int c = 1;
        while(c < n ){
        string st = "";
        int i = 1;
        int count = 1;
        while(i < s.size()){
            if(s[i] != s[i-1]){
                st += to_string(count);
                st += s[i-1];
                count = 1;
            }else{
                count++;
            }
            i++;
        }
        st += to_string(count);
        st += s[s.size()-1];
        s = st;
        c++;
        }
    return s;
    }
};