// Last updated: 8/16/2026, 9:16:49 PM
class Solution {
public:
    int numberOfSteps(int num) {
        int step = 0;
        while(num != 0){
            if(num%2 == 0){
                step++;
                num /= 2;
            }else{
                step++;
                num= num-1;
            }
        }
        return step;
    }
};