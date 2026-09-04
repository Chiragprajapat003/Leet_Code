// Last updated: 9/4/2026, 10:49:28 PM
1class Solution {
2public:
3    int firstStableIndex(vector<int>& nums, int k) {
4        for(int i = 0 ; i < nums.size() ; i++){
5            int max = *max_element(nums.begin(), nums.begin()+i+1);
6            int min = *min_element(nums.begin() + i, nums.end());
7            int diff = max-min;
8            if(max-min <= k){
9                return i;
10            }
11        }
12        return -1;
13    }
14};