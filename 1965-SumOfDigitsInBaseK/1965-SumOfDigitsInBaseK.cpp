// Last updated: 8/16/2026, 9:14:38 PM
class Solution {
public:
    int sumBase(int n, int k) {
        int base = 0 ;
        while(n != 0){
            int digit = n%k;
            int div = n/k;
            n = div;
            base += digit;
        }
        return base;
    }
};