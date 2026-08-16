// Last updated: 8/16/2026, 9:19:27 PM
class Solution {
public:
    string reverseWords(string s) {
        int count = 0;
        string store = "";
        vector<string> v;
        for(char c : s){
            if( c != ' '){
                store += c;
            }else{
                v.push_back(store);
                store.clear();
                count++;
            }
        }
        v.push_back(store);
        store.clear();

        for(int i = 0 ; i < v.size() ; i++){
            reverse(v[i].begin() , v[i].end());
            store += v[i];
            if(count != 0){
                store += ' ';
                count--;
            }
        }
        return store;
    }
};