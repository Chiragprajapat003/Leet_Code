// Last updated: 8/29/2026, 10:50:46 PM
1class Solution {
2public:
3    vector<int> lexicographicallySmallestArray(vector<int>& nums, int limit) {
4        int n = nums.size();
5        vector<int>sorted = nums;
6        sort(sorted.begin(),sorted.end());
7
8        unordered_map<int,int>group;
9        unordered_map<int,int>j_idx;
10        vector<int>ans;
11
12        int grp = 0;
13        group[sorted[0]] = grp;
14        j_idx[grp] = 0;
15
16        for(int i=1;i<n;i++){
17            if(sorted[i]-sorted[i-1] > limit){
18                grp++;
19                j_idx[grp] = i;
20            }
21            group[sorted[i]] = grp;
22        }
23
24        int i = 0;
25        while(i < n){
26            int currgrp = group[nums[i]];
27            int j = j_idx[currgrp];
28
29            ans.push_back(sorted[j]);
30            j_idx[currgrp]++;
31            i++;
32        }
33
34        return ans;
35    }
36};