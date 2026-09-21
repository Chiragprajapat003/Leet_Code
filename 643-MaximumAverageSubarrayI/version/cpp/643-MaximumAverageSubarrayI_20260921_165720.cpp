// Last updated: 9/21/2026, 4:57:20 PM
1class Solution {
2public:
3    double findMaxAverage(vector<int>& nums, int k) {
4        
5        int sum = 0;
6        for(int i = 0 ; i < k ; i++){
7            sum += nums[i];
8        }
9        int max_sum = sum;
10
11        for(int i = k ; i < nums.size() ; i++){
12            sum -= nums[i-k];
13            sum += nums[i];
14            max_sum = max(sum , max_sum);
15        }
16
17        
18        return (double)max_sum/k;
19
20    }
21};