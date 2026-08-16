// Last updated: 8/16/2026, 9:23:34 PM
class Solution {
public:
    int lengthOfLastWord(string s) {
        vector<string> v;
        string store = "";
        for(char c : s){
            if( c != ' '){
                store += c;
            }else{
                if(!(store.empty())){
                    v.push_back(store);
                    store.clear();
                }
            }
        }
                        if(!(store.empty())){
                    v.push_back(store);
                    store.clear();
                }
         return v.back().size();
    }
};