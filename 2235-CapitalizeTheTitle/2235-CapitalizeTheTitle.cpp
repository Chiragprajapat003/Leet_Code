// Last updated: 8/16/2026, 9:13:44 PM
class Solution {
public:
    string capitalizeTitle(string title) {
        vector<string> v;
        string s;

        for(char c : title){
            if(c != ' '){
                s += c;
            }else{
                v.push_back(s);
                s.clear();
            }
        }
        v.push_back(s);
        s.clear();

          
        for(int i = 0 ; i < v.size() ; i++){
          string word = v[i];
          transform(word.begin(), word.end(), word.begin(), ::tolower);
        if(word.size() > 2){
         word[0] = toupper(word[0]);
        }
        s+= word + ' ';

        }
        s.pop_back();
        return s;
    }
};