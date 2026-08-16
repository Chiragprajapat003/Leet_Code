// Last updated: 8/16/2026, 9:15:07 PM
class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
       int idx = 0 ;
       if(ruleKey == "type"){
        idx = 0;
       }else if (ruleKey == "color"){
        idx = 1;
       }else{
        idx = 2;
       }
      int count = 0;
       for(const auto& item : items){
        if(item[idx] == ruleValue){
            count++;
        }
       }
       return count;
    }
};