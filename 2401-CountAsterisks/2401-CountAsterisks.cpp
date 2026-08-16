// Last updated: 8/16/2026, 9:13:02 PM
class Solution {
public:
    int countAsterisks(string s) {
     int count = 0;
     bool inside = false;
     for(char c : s){
        if( c == '|'){
            inside = !inside;
        }else if(c == '*' && !inside){
          count++;
        }
     }
     return count;
    }
};