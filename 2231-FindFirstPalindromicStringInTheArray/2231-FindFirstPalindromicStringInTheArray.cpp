// Last updated: 8/16/2026, 9:13:48 PM
class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(int i = 0 ; i < words.size() ; i++){
             string word = words[i];
        //     string word2 = word;
        //     reverse(word.begin() , word.end());

        //     if(word == word2){
        //         return word2;
        //     }
        // }

        // return "";

        // 2nd approch --> 

        int m = 0;
        int j = word.size()-1;

        while(m < j && word[m] == word[j]){
            m++;
            j--;
        }

        if(m >= j){
            return word;
        }
        }

        return "";
    }
};