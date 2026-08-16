// Last updated: 8/16/2026, 9:23:01 PM
class Solution {
public:
    vector<int> findRow(int n){
        vector<int> ans;
        int prod = 1;
        for(int i = 1 ; i <= n ; i++){
           ans.push_back(prod);
           prod = prod*(n-i)/i; 
        }
        return ans;
    }

    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans ;
         for(int i = 1; i <= numRows ;i++){
            ans.push_back(findRow(i));
         }
         return ans;
    }
};