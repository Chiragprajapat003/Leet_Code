// Last updated: 8/16/2026, 9:13:19 PM
class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        
        int count = 0;

        for(int i = 0 ; i < words.size() ;i++){
            string word = words[i];
            bool prefix = true;
            for(int j = 0 ; j < word.size() ; j++){
                if(word[j] != s[j]){
                    prefix = false;
                }
            }
            if(prefix){
                count++;
            }
        }
        return count;
    }
};