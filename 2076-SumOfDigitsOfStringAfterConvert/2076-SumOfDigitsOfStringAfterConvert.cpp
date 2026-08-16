// Last updated: 8/16/2026, 9:14:19 PM
class Solution {
public:
    int getLucky(string s, int k) {

        string num = "";

        // Convert letters to alphabet positions
        for(int i = 0; i < s.size(); i++) {
            int value = s[i] - 'a' + 1;
            num += to_string(value);
        }

        int sum = 0;

        // Perform k transformations
        for(int i = 0; i < k; i++) {

            sum = 0;

            for(int j = 0; j < num.size(); j++) {
                sum += num[j] - '0';
            }

            num = to_string(sum);
        }

        return sum;
    }
};