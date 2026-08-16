// Last updated: 8/16/2026, 9:20:22 PM
class Solution {
public:
    void reverseString(vector<char>& s) {
        int j = s.size()-1;
        
        for(int i = 0 ; i < s.size()/2 ; i++){
            int value = s[i];
             s[i] = s[j];
             s[j] = value;
            j--;
        }
      
    }
};