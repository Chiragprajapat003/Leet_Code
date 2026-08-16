// Last updated: 8/16/2026, 9:19:05 PM
class Solution {
public:
    bool judgeSquareSum(int c) {
        long long int root = sqrt(c);
        long long int  i = 0; 
        long long int j = root;
        while(i <= j){
            if((i*i + j*j) == c){
                return true;
            }else if((i*i + j*j) < c ){
                i++;
            }else if((i*i + j*j) > c){
                j--;
            }
        }
        return false;
    }
};