// Last updated: 9/7/2026, 11:02:24 PM
1class Solution {
2public:
3    string addStrings(string num1, string num2) {
4        
5        int i = num1.length()-1;
6        int j = num2.length()-1;
7        int pow = 0;
8        string ans = "";
9        while(i >= 0 || j >= 0 || pow != 0){
10
11            int n1 = (i >= 0) ? num1[i]-'0':0;
12            int n2 = (j >= 0) ? num2[j]-'0':0;
13
14            int sum = n1+n2+pow;
15            pow =  sum/10;
16
17            ans += to_string(sum%10);
18
19
20            i--;
21            j--;
22
23            }
24
25        reverse(ans.begin(),ans.end());
26        return ans;
27    }
28};