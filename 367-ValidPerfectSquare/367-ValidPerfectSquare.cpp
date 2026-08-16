// Last updated: 8/16/2026, 9:20:18 PM
class Solution {
public:
    bool isPerfectSquare(int num) {
    long long count = 0;
    long long power ;
    while( num >= power){
        power = count*count;
        if(num == power){
            return true;

        }
        count++;
    }
    return false;
    }
};