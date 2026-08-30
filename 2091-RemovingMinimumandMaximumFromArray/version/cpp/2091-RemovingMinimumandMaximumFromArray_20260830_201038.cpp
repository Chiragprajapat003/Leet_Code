// Last updated: 8/30/2026, 8:10:38 PM
1class Solution {
2public:
3    int minimumDeletions(vector<int>& nums) {
4         int n = nums.size();
5         
6        int minidx = min_element(nums.begin(), nums.end()) - nums.begin();
7        int maxidx = max_element(nums.begin(), nums.end()) - nums.begin();
8
9        int l = min(minidx,
10                    maxidx);  
11        int r =
12            max(minidx, maxidx);
13
14        return min({r + 1, n - l, l + 1 + n - r}); 
15    }
16};