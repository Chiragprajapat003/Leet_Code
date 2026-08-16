// Last updated: 8/16/2026, 9:18:07 PM
class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int count = 0;
         string str = strs[0];
        for(int i = 0 ; i < str.length() ;i++){
           
            int asend = false;
            for(int j = 0 ; j < strs.size()-1; j++){
                if(strs[j][i] > strs[j+1][i]){
                  asend =   true;
                  break;
                }
            }
            if(asend == true){
                count++;
            }
        }
        return count;
    }
};