// Last updated: 10/14/2026, 7:57:43 PM
1class Solution {
2public:
3    string maxSumOfSquares(int num, int sum) {
4        if(sum > num*9){
5            return "";
6        }
7
8        string ans = "";
9
10        for(int i = 0 ; i < num ; i++){
11            int digit = min(9,sum);
12
13            ans += digit + '0';
14
15            sum -= digit;
16            
17        }
18
19    return ans;
20    }
21};