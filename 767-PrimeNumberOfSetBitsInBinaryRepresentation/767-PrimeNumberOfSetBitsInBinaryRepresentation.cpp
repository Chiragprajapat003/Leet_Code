// Last updated: 8/16/2026, 9:18:46 PM
class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        int count1 = 0;
        for(int i = left ; i <= right ; i++){
           
            int n = i;
            // while(n > 0){
            //     if(n&1){
            //         count2++;
            //     }
            //  n =  n >> 1;
            // }
             int count2 = __builtin_popcount(n);
           int count3 = 0;
            for(int j = 2 ; j <= count2 ; j++ ){
                if(count2%j == 0){
                    count3++;
                }
            }

            if(count3 == 1){
                count1 += 1;
                count3 = 0;
                count2 = 0;
            }else{
                count3 = 0;
                count2 =0;
            }
        }
return count1;
    }
};