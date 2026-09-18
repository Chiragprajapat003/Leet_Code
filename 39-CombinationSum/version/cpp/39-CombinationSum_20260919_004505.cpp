// Last updated: 9/19/2026, 12:45:05 AM
1class Solution {
2public:
3
4    void solve(vector<int>& candidates, int target, int i,
5       vector<int>& store, vector<vector<int>>& ans) {
6
7        
8        if(target == 0){
9            ans.push_back(store);
10            return;
11        }
12
13        if(i == candidates.size()){
14            return;
15        }
16
17        if(candidates[i] <= target){
18            store.push_back(candidates[i]);
19
20            
21            solve(candidates, target - candidates[i], i, store, ans);
22
23           
24            store.pop_back();
25        }
26
27        
28        solve(candidates, target, i + 1, store, ans);
29    }
30
31    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
32
33        vector<vector<int>> ans;
34        vector<int> store;
35
36        solve(candidates, target, 0, store, ans);
37
38        return ans;
39    }
40};