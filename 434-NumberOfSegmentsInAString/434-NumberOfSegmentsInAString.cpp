// Last updated: 8/16/2026, 9:19:57 PM
class Solution {
public:
    int countSegments(string s) {
        vector<string> v;
        string store = "";
        for(char c : s){
            if(c != ' '){
                store += c;
            }else{
                if(!store.empty()){
                    v.push_back(store);
                    store.clear();
                }
            }
        }

                if(!store.empty()){
                    v.push_back(store);
                    store.clear();
                }
                return v.size();
    }
};