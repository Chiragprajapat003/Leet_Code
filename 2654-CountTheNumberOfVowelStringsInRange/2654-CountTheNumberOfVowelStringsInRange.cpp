// Last updated: 8/16/2026, 9:12:13 PM
class Solution {
public:
    int vowelStrings(vector<string>& words, int left, int right) {
    int count = 0;
   
    for(int i = left ; i <= right ; i++){
        string word = words[i];
        int n = word.size()-1;
        if((word[0]== 'a' || word[0]== 'e' || word[0] == 'i' || word[0]== 'o' || word[0] == 'u' )&& (word[n]== 'a' || word[n]== 'e' || word[n] == 'i' || word[n]== 'o' || word[n] == 'u')){
            count++;
        }
    }
    return count;
    }
};