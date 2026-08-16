// Last updated: 8/16/2026, 9:15:48 PM
class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        
        int maximum = INT_MIN;
        
        for(int i = 0 ; i < s.size() ; i++){
            for(int j = i+1 ; j < s.size() ; j++){
                if(s[i] == s[j]){
                    maximum = max(maximum , j-i-1);
                    
                }
            }
        }
    return maximum >= 0 ? maximum : -1;
    }
};