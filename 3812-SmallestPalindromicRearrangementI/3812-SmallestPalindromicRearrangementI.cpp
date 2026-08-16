// Last updated: 8/16/2026, 9:11:33 PM
class Solution {
public:
    string smallestPalindrome(string s) {
        // base case -> 
        if(s.size() == 1 ){
            return s;
        }
        

        vector<int> freq(26 , 0);

        
        for(int i = 0 ; i < s.size()/2 ; i++){
            freq[s[i] - 'a']++;
        }

        string half = "";
        for(int i = 0 ; i < 26 ; i++){
            half += string(freq[i] , char(i + 'a'));
        }

        string rev = half;

        reverse(rev.begin() , rev.end());

        return s.size()%2 == 0 ? half+rev : half + s[s.size()/2]+ rev;
    }
};