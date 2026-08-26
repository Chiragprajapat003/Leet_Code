// Last updated: 8/26/2026, 10:56:03 PM
1class Solution {
2public:
3    string shortestBeautifulSubstring(string s, int k) {
4        int i = 0;
5        int count = 0;
6
7        string ans = "";
8
9        for (int j = 0; j < s.size(); j++) {
10
11            if (s[j] == '1') {
12                count++;
13            }
14
15            while (count > k) {
16                if (s[i] == '1') {
17                    count--;
18                }
19                i++;
20            }
21
22            if (count == k) {
23
24                while (s[i] == '0') {
25                    i++;
26                }
27
28                string st = s.substr(i, j - i + 1);
29
30                if (ans == "" || st.size() < ans.size() ||
31                    (st.size() == ans.size() && st < ans)) {
32                    ans = st;
33                }
34            }
35        }
36
37        return ans;
38    }
39};