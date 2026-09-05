// Last updated: 9/5/2026, 11:01:40 PM
1class Solution {
2public:
3    int firstStableIndex(vector<int>& nums, int k) {
4        int n = nums.size();
5
6        int ansIdx = 0;        
7        int globalMax = INT_MIN;          
8        int ansMax = INT_MIN;   
9
10        for(int i = 0; i < n; i++){
11            globalMax = max(globalMax, nums[i]);
12
13            if(i == ansIdx)
14                ansMax = max(ansMax, nums[i]);
15
16            if(nums[i] < ansMax - k){
17                ansIdx = i + 1;
18                ansMax = globalMax;
19            }
20        }
21
22        return ansIdx < n ? ansIdx : -1;
23    }
24};