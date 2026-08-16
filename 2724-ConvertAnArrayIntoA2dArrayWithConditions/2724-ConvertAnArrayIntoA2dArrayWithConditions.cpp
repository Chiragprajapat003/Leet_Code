// Last updated: 8/16/2026, 9:12:04 PM
class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>> ans ;
        
       
        while(nums.size() != 0){
            vector<int> store;
             int i = 0;
        while(i < nums.size()){
            if(find(store.begin() , store.end() , nums[i]) == store.end()){
               
              store.push_back(nums[i]);
              nums.erase(nums.begin() +i);
                
            }else{
                i++;
            }
        }
        ans.push_back(store);
        
        }
        return ans;
    }
};