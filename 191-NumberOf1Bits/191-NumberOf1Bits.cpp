// Last updated: 8/16/2026, 9:21:40 PM
class Solution {
public:
    int hammingWeight(int n) {
        int count = 0;
        while(n > 0){
            if(n&1){
                count++;
            }
            n = n >> 1;
        }
        return count;
    }
};