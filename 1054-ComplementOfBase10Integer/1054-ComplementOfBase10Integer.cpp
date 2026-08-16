// Last updated: 8/16/2026, 9:17:53 PM
class Solution {
public:
    int bitwiseComplement(int n) {
 if(n == 0) return 1;
         string binarry =  "";
        while(n > 0){
            if(n&1){
                binarry += '0';
            }else{
                binarry += '1';
            }

            n = n>>1;
        }
        int sum = 0;
        for(int i = 0 ; i < binarry.size() ; i++){
            sum += (binarry[i] - '0') * pow(2, i);
        }
return sum;
    }
};