// Last updated: 8/16/2026, 9:14:59 PM
class Solution {
public:
    bool squareIsWhite(string coordinates) {
      
        int num1  = coordinates[0] - 'a';
        int num2  = coordinates[1] - '0';

        return (num1 + num2)%2 == 0 ? true : false ;
    }
};