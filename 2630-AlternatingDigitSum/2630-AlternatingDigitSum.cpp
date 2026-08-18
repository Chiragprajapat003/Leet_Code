// Last updated: 8/18/2026, 10:25:36 PM
class Solution {
public:
    int alternateDigitSum(int n) {
        vector<int> arr;
        int org = n;
        while(n > 0){
            arr.push_back(n%10);
            n = n/10;
        }
        int m = arr.size();
        bool sign = false;
        int sum = 0;
        for(int i = m-1 ; i >=  0; i--){
            if(!sign){
                sum += arr[i];
                sign = true;
            }else{
                sum += arr[i]*-1;
                sign = false;
            }
        }
        return sum;
    }
};