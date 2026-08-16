// Last updated: 8/16/2026, 9:20:40 PM
class Solution {
public:
    int maxProduct(vector<string>& words) {
        int mx = INT_MIN;
        int prod = 0;

        for(int i = 0 ; i < words.size() ; i++){
           string  word = words[i];
            unordered_set<char>  st(word.begin() , word.end());
            for(int j = i+1 ; j < words.size() ; j++){
                string word2 = words[j];
                bool cond = false;
                for(char c : word2){
                    if(st.count(c)){
                        cond = true;
                        break;
                    }
                }
                if(!cond){
                    prod =  word.size()*word2.size();
                    mx = max(mx ,prod);
                }else{
                    mx = max(mx ,prod);
                }
            }
        }
        return mx;
    }
};