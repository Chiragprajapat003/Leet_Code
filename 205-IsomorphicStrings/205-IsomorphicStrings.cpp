// Last updated: 8/16/2026, 9:21:27 PM
class Solution {
public:
    bool isIsomorphic(string s, string t) {

     unordered_map<char,char>m1,m2;
     for(int i=0; i<s.length(); i++){
        char ch1 = s[i];
        char ch2 = t[i];
        if(m1.count(ch1) && m1[ch1]!=ch2) return false;
        if(m2.count(ch2) && m2[ch2]!=ch1) return false;
        m1[ch1] = ch2;
        m2[ch2] = ch1;
     
     }
     return true;
    }
};