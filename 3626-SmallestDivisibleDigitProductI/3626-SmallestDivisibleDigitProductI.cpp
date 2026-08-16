// Last updated: 8/16/2026, 9:11:40 PM
class Solution {
public:
    int smallestNumber(int n, int t) {
        
        
       
       int org = n;
        while(org){
       int digit = org;
        int prod = 1;
        while(digit>0){
            int mod = digit%10;
            prod *= mod;
            digit = digit/10;

        }
        if(prod%t == 0){
            return org;
        }
        org++;
        }
        return 0;
    }
};