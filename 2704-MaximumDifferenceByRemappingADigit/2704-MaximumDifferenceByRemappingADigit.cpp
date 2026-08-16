// Last updated: 8/16/2026, 9:12:12 PM
class Solution {
public:
    int minMaxDifference(int num) {

        int max_num = 0;
        int min_num = 0;

        string s = to_string(num);

        // digit to replace for maximum
        int max_digit = -1;

        for(char c : s){
            if(c != '9'){
                max_digit = c - '0';
                break;
            }
        }

        // digit to replace for minimum
        int min_digit = s[0] - '0';

        int count = 0;

        while(num > 0){

            int digit = num % 10;
            num = num / 10;

            // build maximum
            if(digit == max_digit){
                max_num += 9 * pow(10, count);
            }
            else{
                max_num += digit * pow(10, count);
            }

            // build minimum
            if(digit == min_digit){
                min_num += 0 * pow(10, count);
            }
            else{
                min_num += digit * pow(10, count);
            }

            count++;
        }

        return max_num - min_num;
    }
};