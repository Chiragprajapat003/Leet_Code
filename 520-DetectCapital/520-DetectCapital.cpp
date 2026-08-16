// Last updated: 8/16/2026, 9:19:30 PM
class Solution {
public:
    bool detectCapitalUse(string word) {

        int upper = 0;

        for(char c : word){
            if(c >= 'A' && c <= 'Z'){
                upper++;
            }
        }

        // all uppercase
        if(upper == word.size()){
            return true;
        }

        // all lowercase
        if(upper == 0){
            return true;
        }

        // only first uppercase
        if(upper == 1 && word[0] >= 'A' && word[0] <= 'Z'){
            return true;
        }

        return false;
    }
};