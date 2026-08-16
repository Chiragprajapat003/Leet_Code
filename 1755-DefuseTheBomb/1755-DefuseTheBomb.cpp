// Last updated: 8/16/2026, 9:15:46 PM
class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        
        vector<int> ans(code.size());

        for(int i = 0 ; i < code.size() ; i++){
        int n = 0;
       
        int sum = 0;

        if(k >= 0){
             int j = i+1;
        while( n < k){
            if(j < code.size()){
             sum += code[j];
             n++;
             j++;
            }else{
                j = 0;
                sum += code[j];
                n++;
                j++;
            }
        }
        ans[i] = sum;
        }else{
            
             int j = i-1;
             while( n < abs(k)){
                
            if(j >= 0){
             sum += code[j];
             n++;
             j--;
            }else{
                j = code.size()-1;
                sum += code[j];
                n++;
                j--;
            }
        }
        ans[i] = sum;
        }
        }
        return ans;
    }
};