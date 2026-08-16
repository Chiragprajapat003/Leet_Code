// Last updated: 8/16/2026, 9:13:24 PM
class Solution {
public:
    vector<string> cellsInRange(string s) {
        int n1 = s[1];
        int n2 = s[4];
        vector<string> ans;
        for(char i = s[0] ; i <= s[3] ;i++){
            
            for(int j = n1 ; j <=n2 ;j++ ){
                string store = "";
                store += i;
                store+= j;
                ans.push_back(store);
            }
        }
        return ans;
    }
};