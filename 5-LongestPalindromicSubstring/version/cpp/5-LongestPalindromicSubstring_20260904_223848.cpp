// Last updated: 9/4/2026, 10:38:48 PM
1class Solution {
2public:
3
4    string expand(string s, int left, int right){
5
6        while(left >= 0 && right < s.size() && s[left] == s[right]){
7            left--;
8            right++;
9        }
10
11        return s.substr(left + 1, right - left - 1);
12    }
13
14    string longestPalindrome(string s) {
15
16        string ans = "";
17
18        for(int i = 0; i < s.size(); i++){
19
20            // odd length palindrome
21            string odd = expand(s, i, i);
22
23            if(odd.size() > ans.size()){
24                ans = odd;
25            }
26
27            // even length palindrome
28            string even = expand(s, i, i + 1);
29
30            if(even.size() > ans.size()){
31                ans = even;
32            }
33        }
34
35        return ans;
36    }
37};