// Last updated: 10/15/2026, 10:34:41 PM
1class Solution {
2public:
3    int sumCounts(vector<int>& nums) {
4       int n = nums.size();
5
6        int res = 0;
7        for(int i  = 0 ; i < n ; i++){
8            unordered_set<int> s;
9            for(int j = i ; j < n ; j++){
10                s.insert(nums[j]);
11                int d = s.size();
12                res += d*d;
13            }
14        }
15
16        return res;
17    }
18};