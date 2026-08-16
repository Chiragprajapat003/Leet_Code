// Last updated: 8/16/2026, 9:12:42 PM
class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
         
         unordered_map<string,int>  mp;
vector<pair<string,int>> v;
        for(int i = 0 ; i < heights.size() ; i++){
            v.push_back({names[i],heights[i]});
        }
    
       

       sort(v.begin() , v.end() , [] (auto &a , auto &b){
        return a.second > b.second;
       });
       
       vector<string> ans;

       for(auto x : v){
        ans.push_back(x.first);
       }

       return ans;
    }
};