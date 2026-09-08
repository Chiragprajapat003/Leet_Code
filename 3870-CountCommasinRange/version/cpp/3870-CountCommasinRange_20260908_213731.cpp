// Last updated: 9/8/2026, 9:37:31 PM
1class Solution {
2public:
3    int countCommas(int n) {
4        // if(n < 1000){
5        //     return 0;
6        // }
7
8        // if( n == 100000){
9        //     return 99001;
10        // }
11
12        int count = 0;
13        int track = 0;
14        int i = 1;
15        while(i <= n){
16            string num = to_string(i);
17            if(num.length()%3 > 0){
18                 count += num.length()/3;
19                 track = num.length()/3;
20            }else{
21                count += track;
22            }
23           
24            i++;
25        }
26      return count;  
27    }
28};