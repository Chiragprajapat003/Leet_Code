// Last updated: 8/16/2026, 9:14:16 PM
class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        string store = "";
     for(string &word : words){
        store += word;
        if(store == s){
            return true;
        }

        if(store.size() > s.size()){
            return false;
        }
     }
     return false;
    }
};