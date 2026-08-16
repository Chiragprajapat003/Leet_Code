// Last updated: 8/16/2026, 9:14:07 PM
class Solution {
public:
    string reversePrefix(string word, char ch) {
     string store = "";
     int count = 0;
     for(char c : word){
        if( c != ch){
            store += c;
            count++;
        }else{
            store += c;
            count++;
            reverse(store.begin() , store.end());
            break;
            
        }
     }
     for(int i = count ; i < word.size() ;i++){
        store += word[i];
     }
     return store;
    }
};