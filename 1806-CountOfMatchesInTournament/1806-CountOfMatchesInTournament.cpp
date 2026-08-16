// Last updated: 8/16/2026, 9:15:30 PM
class Solution {
public:
    int numberOfMatches(int n) {
     int sum = 0;
     while(n != 1){
        if(n%2 != 0){
            int digit = n/2;
            sum += digit;
            n = digit+1;
        }else{
             int digit = n/2;
            sum += digit;
            n = digit;
        }
     }
     return sum;
    }
};