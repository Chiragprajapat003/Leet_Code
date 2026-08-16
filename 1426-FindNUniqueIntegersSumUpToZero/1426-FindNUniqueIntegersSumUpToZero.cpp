// Last updated: 8/16/2026, 9:16:54 PM
class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> arr;
         
        if(n%2 == 0){
            for(int i = 1 ; i <= n/2 ; i++){
                    arr.push_back(i*-1);  
            }
            for(int i = 1 ; i <= n/2 ; i++){
                    arr.push_back(i*1);  
            }
        }else{
            int m = (n/2)*-1;
            while(m <= n/2){
                arr.push_back(m);
                m++;
            }
        }
    return arr;
    }
};