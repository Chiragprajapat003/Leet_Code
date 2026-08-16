// Last updated: 8/16/2026, 9:21:32 PM
class Solution {
public:
    bool isHappy(int n) {

        unordered_set<int> seen;

        while(n != 1 && seen.count(n) == 0){

            seen.insert(n);

            int num = n;
            int sum = 0;

            while(num > 0){

                int digit = num % 10;

                sum += digit * digit;

                num = num / 10;
            }

            n = sum;
        }

        return n == 1;
    }
};