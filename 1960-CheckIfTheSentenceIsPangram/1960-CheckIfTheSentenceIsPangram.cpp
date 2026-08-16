// Last updated: 8/16/2026, 9:14:42 PM
class Solution {
public:
    bool checkIfPangram(string sentence) {

     string s = sentence;
     int count = 0;
     sort(s.begin() , s.end());
     for(int i = 0 ; i < s.size()-1; i++){
        if(s[i] != s[i+1]){
            count += 1;
        }
     }
     return (count + 1 == 26);
    }
};