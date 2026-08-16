// Last updated: 8/16/2026, 9:20:24 PM
class Solution {
public:
    bool isPowerOfFour(int n) {
        int i = 0;
        long long power = 0;
        while(n >= power){
            power =  pow(4,i);
            if(n == power){
                return true;
            }else{
                i++;
            }
        }
        return false;
    }
};