// Last updated: 8/16/2026, 9:17:09 PM
class Solution {
public:
    int balancedStringSplit(string s) {
     int count = 0;
     int out = 0;
     for(int i = 0 ; i < s.size() ; i++){
        if(s[i] == 'R'){
            count++;
        }else{
            count--;
        }
        if(count == 0){
            out++;
        }
     }
     return out;
    }
};