// Last updated: 9/10/2026, 10:10:56 PM
1class Solution {
2public:
3    vector<vector<int>> threeSum(vector<int>& nums) {
4        
5        sort(nums.begin() , nums.end());
6
7        vector<vector<int>> ans;
8
9        for(int i = 0 ; i < nums.size()-2 ; i++){
10
11            if(i > 0 && nums[i] == nums[i-1]){
12                continue;
13            }
14
15            int j = i+1 ; int k = nums.size()-1;
16            while(j < k){
17                int sum = nums[i] + nums[j] + nums[k];
18
19                if(sum == 0){
20                    ans.push_back({nums[i] , nums[j] , nums[k]});
21                    j++;
22                    k--;
23                    while(j < k && nums[j] == nums[j-1]){
24                        j++;
25                    }
26                }else if( sum < 0){
27                    j++;
28                }else{
29                    k--;
30                }
31            }
32        }
33        return ans;
34    }
35};