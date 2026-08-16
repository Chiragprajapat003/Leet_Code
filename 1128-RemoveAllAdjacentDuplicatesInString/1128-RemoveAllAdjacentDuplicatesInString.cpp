// Last updated: 8/16/2026, 9:17:41 PM
class Solution {
public:
    string removeDuplicates(string s) {
        // int i = 0;
        // while(i < s.size()){
        //     if(s[i] == s[i+1]){
        //         s.erase(i,2);
        //         i = 0;
        //     }else{
        //         i++;
        //     }
        // }
        // return s; 

        // 2nd method -->> 

        string  ans = "";
        for(int i = 0 ; i < s.size() ; i++){
            if(!ans.empty() && ans.back() == s[i]){ans.pop_back();} 
            else{
            ans.push_back(s[i]);}

        }
        // string out = "";
        // for(char c : ans){
        //    out += c;
        // }
        return ans;
    }
};