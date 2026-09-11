// Last updated: 9/11/2026, 5:44:27 PM
1class Solution {
2public:
3    int totalNumbers(vector<int>& digits) {
4        int freq[10] = {};
5
6        for (int digit : digits) {
7            freq[digit]++;
8        }
9
10        int answer = 0;
11
12        for (int first = 1; first <= 9; first++) {
13            for (int second = 0; second <= 9; second++) {
14                for (int third = 0; third <= 8; third += 2) {
15                    if (freq[first] == 0 || freq[second] == 0 || freq[third] == 0) {
16                        continue;
17                    }
18
19                    if (first == second && second == third && freq[first] < 3) {
20                        continue;
21                    }
22
23                    if (first == second && freq[first] < 2) {
24                        continue;
25                    }
26
27                    if (first == third && freq[first] < 2) {
28                        continue;
29                    }
30
31                    if (second == third && freq[second] < 2) {
32                        continue;
33                    }
34
35                    answer++;
36                }
37            }
38        }
39
40        return answer;
41    }
42};