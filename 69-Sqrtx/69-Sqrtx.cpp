// Last updated: 8/16/2026, 9:23:21 PM
class Solution {
public:
    int mySqrt(int x) {
   long long  count;
   long long power;
   while(x >= power){
    power = count*count;
    count++;
   }
   return count-2;
    }
};