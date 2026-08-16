// Last updated: 8/16/2026, 9:15:38 PM
class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
       int count  = 0;
       for(int i = 0 ; i < words.size() ;i++) {
        string word = words[i];
       
        int cnt = 0;
        for(char c : word){
            
            if(allowed.find(c) != string::npos){
               cnt++;
            }
          
        }
        if(cnt == word.size()){
            count++;
        }

       }
       return count;
    }
};