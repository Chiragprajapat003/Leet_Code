// Last updated: 8/16/2026, 9:20:34 PM
class Solution {
public:
    bool isPowerOfThree(int n) {
        // int count = 0;
        // long long power;
        // while(n >= power){
        //   power = pow(3,count);
        //   if(n == power){
        //     return true;
        //   }
        //   count++;
        // }
        // return false;

        // more optimized ans -> 

        if(n <= 0){
            return false;
        }

        while(n%3 == 0){
            n /= 3;
        }
        return n == 1;
    }
};