// Last updated: 8/16/2026, 9:18:28 PM
class Solution {
public:
    string toGoatLatin(string sentence) {

        vector<string> words;
        string temp = "";

        // split sentence into words
        for(char c : sentence){

            if(c != ' '){
                temp += c;
            }
            else{
                words.push_back(temp);
                temp.clear();
            }
        }

        words.push_back(temp);

        string ans = "";

        string vowel = "aeiouAEIOU";

        for(int i = 0; i < words.size(); i++){

            string w = words[i];

            // vowel case
            if(vowel.find(w[0]) != string::npos){

                w += "ma";
            }
            else{

                char first = w[0];

                w.erase(0,1);

                w += first;

                w += "ma";
            }

            // add a's
            w += string(i + 1, 'a');

            ans += w;

            if(i != words.size() - 1){
                ans += " ";
            }
        }

        return ans;
    }
};