// Last updated: 8/16/2026, 9:23:43 PM
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
     unordered_map<string , vector<string>> mp;
     for(string s: strs){
        string key = s;
        sort(key.begin() , key.end());
        mp[key].push_back(s);
     }
     vector<vector<string>> result ;
     for(auto &vt : mp){
        result.push_back(vt.second);
     }
     return result;
    }
 
};