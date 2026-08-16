// Last updated: 8/16/2026, 9:17:34 PM
class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int count = 0;
        vector<int> ans;
        int i = 0;
        while(count < arr.size() )
        {
            if(arr[i] != 0){
                ans.push_back(arr[i]);
                count++;
            }else {
                ans.push_back(0);
                ans.push_back(0);
                
                count += 2;
             }
             i++;
        }
        
        for(int i = 0 ; i < arr.size() ; i++){
            arr[i] = ans[i];
        }
    }
};