// Last updated: 10/12/2026, 8:15:45 PM
1class Solution {
2public:
3
4    void solve(vector<int>& candidates , int target , int i , vector<int> store , vector<vector<int>> &ans ){
5
6                if(target == 0){
7            ans.push_back(store);
8            return;
9        }
10   if (i == candidates.size() || target < 0) {
11            return;
12        }
13
14
15        if(candidates[i] <= target){
16            
17            store.push_back(candidates[i]);
18            solve(candidates,target-candidates[i],i,store,ans);
19             store.pop_back();
20        }
21
22       
23        // target += candidates[i];
24        solve(candidates,target,i+1,store,ans);
25
26    }
27
28    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
29        int i = 0;
30        vector<vector<int>> ans ;
31        vector<int> store;
32        solve(candidates,target,i,store,ans);
33
34        return ans;
35    }
36};