// Last updated: 8/16/2026, 9:14:49 PM
class Solution {
public:
    string truncateSentence(string s, int k) {
        int count = 0;
        string store = "";
        for(int i = 0 ; i < s.size() ; i++){
            if(count >= k){
             break;
            }
            if(s[i] != ' '){
                store += s[i];
            }else{
                count++;
                if(count < k){
                    store += s[i];
                }
              
            }
        }
  return store;
    }
};