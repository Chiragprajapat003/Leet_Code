// Last updated: 8/16/2026, 9:11:27 PM
class Solution {
public:
    string processStr(string s) {

       string ans = "";
       int n = ans.size();
       for(char c : s) {
        if(c >= 'a' && c <= 'z'){
            ans+= c;
        }else if(c == '*'){
            if(!ans.empty()){
            ans.pop_back();}
        }else if(c == '%'){
            reverse(ans.begin() , ans.end());
        }else{
           ans+= ans;
        }
       }

       return ans;
    }
};