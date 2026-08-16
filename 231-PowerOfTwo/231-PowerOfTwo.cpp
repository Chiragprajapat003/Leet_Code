// Last updated: 8/16/2026, 9:21:12 PM
class Solution {
public:
    bool isPowerOfTwo(int n) {
        int count = 0;
        long long power = 0;
        while(n >= power){
            power= pow(2,count);
            if( n == power){
                return true;
            }
            count++;
        }
        return false;
    }
};