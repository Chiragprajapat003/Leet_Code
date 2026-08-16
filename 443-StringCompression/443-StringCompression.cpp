// Last updated: 8/16/2026, 9:19:46 PM
class Solution {
public:
    int compress(vector<char>& chars) {
        int count = 0;
    string ans = "";
    int j = 0;
    for(int i = 0 ; i < chars.size() ; i++){
        if(count == 0){
            ans += chars[i];
            count++;
        }else {
            if(chars[i] == chars[j]){
                j++;
                count++;
            }else {
                if(count > 1) {ans += to_string(count);}
                ans += chars[i];
                count = 1;
                j++;
            }
        }
    }
    if(count > 1){
        ans += to_string(count);
    }
   
   chars.clear();
   for(int i = 0 ; i < ans.size() ; i++){
    chars.push_back(ans[i]);
   }

    return chars.size();
    }
};