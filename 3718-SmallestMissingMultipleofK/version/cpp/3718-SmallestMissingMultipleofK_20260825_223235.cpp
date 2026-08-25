// Last updated: 8/25/2026, 10:32:35 PM
1class Solution {
2public:
3    int missingMultiple(vector<int>& nums, int k) {
4        
5        sort(nums.begin(), nums.end());
6
7        int count = 1;
8        for(int i = 0 ; i < nums.size();i++){
9            if(count*k == nums[i]){
10                count++;
11            }else{
12                continue;
13            }
14        }
15        return k*count;
16    }
17};