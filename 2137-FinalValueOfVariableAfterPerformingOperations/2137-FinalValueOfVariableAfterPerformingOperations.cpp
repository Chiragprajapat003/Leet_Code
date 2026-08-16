// Last updated: 8/16/2026, 9:14:03 PM
class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int count = 0;
        for(int i = 0 ; i < operations.size();i++){
            string w = operations[i];
            int n = 0;
          while(n < w.size()){
            if(w[n] == '-'){
                count -=1;
                n++;
                break;
            }else if(w[n] == '+'){
                count +=1;
                n++;
                break;
            }
            n++;
          }
    }
        return count;
    }
};