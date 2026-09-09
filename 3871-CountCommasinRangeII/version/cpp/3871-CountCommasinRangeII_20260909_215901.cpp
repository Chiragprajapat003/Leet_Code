// Last updated: 9/9/2026, 9:59:01 PM
1class Solution {
2public:
3    long long countCommas(long long n) {
4
5
6        long long count = 0;
7        long long pow = 1000;
8        while( pow <= n){
9            count += n-pow+1;
10            pow *= 1000;
11        }
12
13        return count;
14
15
16        /////////////////////////////2d aproch ////////////
17        // long long count = 0;
18
19        // if (n >= 1000)
20        //     count += n - 999;
21
22        // if (n >= 1000000)
23        //     count += n - 999999;
24
25        // if (n >= 1000000000)
26        //     count += n - 999999999;
27
28        // if (n >= 1000000000000)
29        //     count += n - 999999999999;
30
31        // if (n >= 1000000000000000)
32        //     count += n - 999999999999999;
33
34        // return count;
35    }
36};