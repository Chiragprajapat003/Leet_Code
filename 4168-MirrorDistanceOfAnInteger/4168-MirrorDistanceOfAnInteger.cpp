// Last updated: 8/16/2026, 9:11:11 PM
class Solution {
public:
    int mirrorDistance(int n) {
        int rev = 0 ;
        int org = n;
        while( n!= 0){
            int mod = n%10;
         
            rev = rev*10 + mod;

               n = (n -(n%10))/10;
        }
        return abs(rev-org);
    }
};