// Last updated: 8/16/2026, 9:12:51 PM
class Solution {
public:
    bool isStrictlyPalindromic(int n) {
        int org = n;
        int base = n-(n-2);
        
        while(base <= n){
         string palindrom = "";
         while(n != 0){
            if(n%base == 0){
                palindrom += '0';
                n /= base;
            }else{
                palindrom += '1';
                n /= base;
            }
         }
            string rev = palindrom;
         reverse(palindrom.begin() , palindrom.end());
         if(rev != palindrom){
            return false;
         }else{
            n = org;
            base++;
         }
        }

        return true;

    }
};