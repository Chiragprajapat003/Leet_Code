// Last updated: 8/16/2026, 9:22:32 PM
class Solution {
public:
    string reverseWords(string s) {

        string temp = "";
        vector<string> wordStore;

        for(int i = 0; i < s.length(); i++){
            if(s[i] != ' '){
                temp += s[i];
            }
            else {
                if(!temp.empty()){
                    wordStore.push_back(temp);
                    temp = "";
                }
            }
        }

        if(!temp.empty()){
            wordStore.push_back(temp);
        }

        reverse(wordStore.begin(), wordStore.end());

        string result = "";
        for(int i = 0; i < wordStore.size(); i++){
            result += wordStore[i];
            if(i != wordStore.size() - 1){
                result += " ";
            }
        }

        return result;
    }
};