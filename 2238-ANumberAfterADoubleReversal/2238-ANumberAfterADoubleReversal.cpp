// Last updated: 8/16/2026, 9:13:40 PM
class Solution {
public:
    bool isSameAfterReversals(int num) {

        int org = num;
        int rev1 = 0;
        while(num != 0){
            int mod  = num%10;
            rev1 = 10*rev1 + mod;
            num = num/10;
        }
        int rev2 = 0;
        while(rev1 != 0){
            int dig = rev1%10;
            rev2 = rev2*10 + dig;
            rev1 = rev1/10;
        }

return org == rev2 ? true:false;
    }

};