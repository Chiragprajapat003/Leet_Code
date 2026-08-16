// Last updated: 8/16/2026, 9:17:11 PM
class Solution {
public:
    string removeDuplicates(string s, int k) {
    vector<pair<char,int>> vt;
      
    
      for(int i = 0 ; i < s.size() ; i++){
        if(!(vt.empty()) &&  vt.back().first == s[i]){
            vt.back().second++;

        }
         else{
             vt.push_back({s[i],1});
        }

        if(vt.back().second == k){
            vt.pop_back();
        }
      }  
      string ans = "";
      for(auto &p : vt){
        ans.append(p.second,p.first);
      }
      return ans;
    }
};