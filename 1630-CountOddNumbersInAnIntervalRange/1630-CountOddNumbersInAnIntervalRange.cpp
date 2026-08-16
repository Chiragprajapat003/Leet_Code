// Last updated: 8/16/2026, 9:16:08 PM
class Solution {
public:
    int countOdds(int low, int high) {
        // int count = 0;
        // for(int i = low ; i <= high ; i++){
        //         if(i%2 == 1){
        //             count++;
        //         }
        // }
        // return count;
        int diff = (high - low) ;
        if(diff %2 == 0){
            if(low%2 == 1){
                return diff/2 +1;
            }else{
                return diff/2;
            }
        }
         
        return diff%2 == 1 ? (diff)/2 + 1 : diff/2;
    }
};