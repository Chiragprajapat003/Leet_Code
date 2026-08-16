// Last updated: 8/16/2026, 9:11:54 PM
class Solution {
public:
    int countKeyChanges(string s) {
        int count = 0;
  
         for (int i = 0 ; i < s.size()-1 ; i++) {
      char  c = tolower(s[i]);
        char c2 = tolower(s[i+1]);

        if( c != c2 ){
            count++;
        }
    }
    return count;
        }
    
};