// Last updated: 9/24/2026, 4:50:48 PM
1class Solution {
2public:
3    int smallestIndex(vector<int>& nums) {
4
5        for(int i = 0 ; i < nums.size() ; i++){
6            int val = nums[i];
7            int val2 = 0;
8            while(val > 0){
9                val2 += val%10;
10                val /= 10;
11            }
12            if(i == val2){
13                return i;
14            }
15        }
16        return -1;
17    }
18};