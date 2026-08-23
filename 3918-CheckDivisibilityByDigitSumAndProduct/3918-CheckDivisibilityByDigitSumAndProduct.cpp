// Last updated: 8/23/2026, 10:26:25 PM
class Solution {
public:
    bool checkDivisibility(int n) {
        int org = n;
        int sum = 0;
        int prod =1;



        while(n > 0){
          long long int   digit = n%10;
           sum += digit;
           prod *= digit;
           n /= 10;
        }
        return org%(prod+sum) == 0?true:false;
    }
};