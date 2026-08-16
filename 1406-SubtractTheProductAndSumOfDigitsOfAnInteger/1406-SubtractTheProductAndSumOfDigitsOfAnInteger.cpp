// Last updated: 8/16/2026, 9:17:02 PM
class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum = 0;
        int prod = 1;
        while(n>0){
            int digit = n%10;
            sum+= digit;
            prod = prod*digit;
            n /= 10; 
        }
        return prod-sum;
    }
};