// Last updated: 8/16/2026, 9:11:47 PM
class Solution {
public:
    string compressedString(string word) {
           int count = 0;
    string ans = "";
    int j = 0;
    for(int i = 0 ; i < word.size() ; i++){
        if(count == 0 ){
            count++;
        }else {
            if(word[i] == word[j]){
                if(count ==  9) {ans += to_string(count);
                ans += word[i];
                count = 0 ;}
                j++;
                count++;
            }else {
                if(count >= 1) {ans += to_string(count);}
                ans += word[i-1];
                count = 1;
                j++;
            }
        }
    }
    if(count >= 1){
        ans += to_string(count);
        ans += word[word.size()-1];
    }

    return ans;
    }
};