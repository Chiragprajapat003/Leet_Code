// Last updated: 8/16/2026, 9:17:49 PM
class Solution {
public:
    string removeOuterParentheses(string s) {
            int count = 0 ;
        string ans = "";
        string store = "";
        for(int i = 0 ; i < s.size() ;i++){
        
            if(s[i] == '('){
                count++;
            }else{
                count--;
            }
            if(count != 0){
                store += s[i];
            }else{
                store += s[i];
                for(int j = 1 ; j < store.size()-1 ;j++){
                    ans += store[j];
                }
                store.clear();
                count = 0;
            }

        }
        return ans;

    }
};