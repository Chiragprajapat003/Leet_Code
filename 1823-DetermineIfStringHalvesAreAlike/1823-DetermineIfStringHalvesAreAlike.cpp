// Last updated: 8/16/2026, 9:15:20 PM
class Solution {
public:
    bool halvesAreAlike(string s) {
        int count1 = 0 ; 
        int count2 = 0 ;
         transform(s.begin(), s.end(), s.begin(), ::tolower); 
        if(s.size() == 2){
            return true;
        }
        for( int i = 0 ; i < s.size() ; i++ ){
            
 if(i < s.size()/2){
    if(s[i] == 'a' ||s[i] == 'e' ||s[i] == 'i' ||s[i] == 'o' ||s[i] == 'u' ){
        count1++;
    }
 }else{
        if(s[i] == 'a' ||s[i] == 'e' ||s[i] == 'i' ||s[i] == 'o' ||s[i] == 'u' ){
        count2++;
    }
 }
        }
        return count1 == count2;
    }
};