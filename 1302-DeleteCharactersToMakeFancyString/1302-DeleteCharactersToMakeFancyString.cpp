// Last updated: 8/16/2026, 9:17:15 PM
class Solution {
public:
    string makeFancyString(string s) {
        string word = "";
        char first= 0;
        int count = 0;
        for(int i = 0 ; i < s.size() ; i++){
            if(first != s[i]){
                first = s[i];
                count = 0;

            }else{
                count++;
            }
        if(count < 2){
         word += s[i];
        }
        }
        return word;
    }
};