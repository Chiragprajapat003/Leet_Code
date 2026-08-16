// Last updated: 8/16/2026, 9:24:38 PM
class Solution {
public:
    bool isPalindrome(int x) {

        // negative numbers are not palindrome
        // numbers ending with 0 cannot be palindrome
        // except 0 itself
        if(x < 0 || (x % 10 == 0 && x != 0)){
            return false;
        }

        int rev = 0;

        while(x > rev){

            rev = rev * 10 + x % 10;

            x = x / 10;
        }

        // even digits: x == rev
        // odd digits: x == rev/10

        return (x == rev || x == rev / 10);
    }
};