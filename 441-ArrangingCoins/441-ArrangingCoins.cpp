// Last updated: 8/16/2026, 9:19:49 PM
class Solution {
public:
    int arrangeCoins(int n) {
        int row = 1;

        while(n >= row){
            n -= row;
            row++;
        }

        return row - 1;
    }
};