// Last updated: 8/16/2026, 9:13:29 PM
class Solution {
public:
    int minimumSum(int num) {

        vector<int> store ;
        while(num>0){
            int digit = num%10;
            store.push_back(digit);
            num /= 10;
        }
        sort(store.begin() , store.end());
     return (store[0]*10+store[2]) + (store[1]*10+store[3]);
    }
};