// Last updated: 8/16/2026, 9:16:47 PM
class Solution {
public:
    int maximum69Number (int num) {
     string s = to_string(num);
     for(char &c : s){
        if(c == '6'){
            c = '9';
            break;
        }
     }
     return stoi(s);
    }
};