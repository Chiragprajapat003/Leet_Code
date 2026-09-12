// Last updated: 9/12/2026, 10:29:21 PM
1class Solution {
2public:
3    int reverse(int x) {
4        long long n = x;
5        long long ans = 0;
6
7        while(n != 0){
8            ans = ans * 10 + n % 10;
9            n = n / 10;
10        }
11
12        if(ans > INT_MAX || ans < INT_MIN){
13            return 0;
14        }
15
16        return (int)ans;
17    }
18};