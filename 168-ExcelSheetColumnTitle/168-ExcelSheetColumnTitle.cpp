// Last updated: 8/16/2026, 9:22:21 PM
class Solution {
public:
    string convertToTitle(int columnNumber) {
          string ans = "";
          while(columnNumber > 0){
            columnNumber--;
            char ch = 'A' + (columnNumber%26);
            ans = ch + ans;
            columnNumber /= 26;

          }
          return ans;
    }
};