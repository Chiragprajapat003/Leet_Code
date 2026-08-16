// Last updated: 8/16/2026, 9:11:15 PM
class Solution {
public:
    int digitFrequencyScore(int n) {
        
int sum = 0;
        while( n > 0){
            int digit = n%10;
            n = n/10;
            sum += digit;
        }
        return sum;
    }
};