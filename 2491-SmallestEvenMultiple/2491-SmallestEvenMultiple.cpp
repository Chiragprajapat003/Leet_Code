// Last updated: 8/16/2026, 9:12:47 PM
class Solution {
public:
    int smallestEvenMultiple(int n) {
        if(n%2 == 0){
            return n;
        }else{
            return n*2;
        }
    }
};