// Last updated: 8/29/2026, 10:32:29 PM
1class Solution {
2public:
3    vector<int> minOperations(string boxes) {
4        int n = boxes.length();
5        vector<int> ans(n);
6
7        for(int i = 0 ; i < n ; i++){
8            int sum = 0;
9            for(int j = 0 ; j < n ; j++){
10                if(j != i && boxes[j] == '1'){
11                    sum += abs(j-i);
12                }
13            }
14            ans[i] = sum;
15        }
16        return ans;
17    }
18};