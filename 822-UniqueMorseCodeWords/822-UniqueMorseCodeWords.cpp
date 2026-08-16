// Last updated: 8/16/2026, 9:18:32 PM
class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<pair<char , string>> ans;
        vector<string> morse = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};

          for(int i = 0 ; i < 26 ; i++){
            ans.push_back({'a'+i , morse[i]});
          }

          unordered_set<string> out;
          
          for(int i = 0 ; i < words.size() ; i++){
               string  word = words[i];
                 string store = "";
                 for(char c : word){
                    store += ans[c-'a'].second ;
                 }
               out.insert(store)  ;
          }
  return out.size();
    }
};