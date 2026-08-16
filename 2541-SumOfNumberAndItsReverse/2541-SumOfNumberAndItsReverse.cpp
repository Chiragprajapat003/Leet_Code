// Last updated: 8/16/2026, 9:12:44 PM
class Solution {
public:
    bool sumOfNumberAndReverse(int num) {
        for(int i = num / 2; i <= num; ++i){
            int x = i, rev = 0;
            while(x){
                rev = rev * 10 + x % 10;
                x /= 10;
            }
            if(i + rev == num) return true;
        }
        return false;
    }
};