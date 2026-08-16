// Last updated: 8/16/2026, 9:13:49 PM
class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int max = 0;
        for(string s : sentences){
            int count = 1;
for(char w : s){
    if(w == ' '){
         count ++;
    }

}
if(count > max){
max = count;
}
        }
        return max;
    }
};