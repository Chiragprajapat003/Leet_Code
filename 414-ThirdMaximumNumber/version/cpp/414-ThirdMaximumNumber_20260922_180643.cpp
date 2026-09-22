// Last updated: 9/22/2026, 6:06:43 PM
1class Solution {
2public:
3    int thirdMax(vector<int>& nums) {
4        unordered_set<int> num ;
5        for(int i = 0 ; i < nums.size() ; i++){
6            num.insert(nums[i]);
7        }
8        if(num.size() < 3 ){
9            return *max_element(num.begin() , num.end());
10        }
11        long long int  third_max = LLONG_MIN;
12        long long int second_max = LLONG_MIN;
13        long long int max = LLONG_MIN;
14
15        for(int x : num){
16            if( x >= max){
17                third_max = second_max;
18                second_max = max;
19                max = x;
20            }else if( x < max  && x >= second_max ){
21                third_max = second_max;
22                second_max = x ;
23                
24            }else if ( x < second_max && x >= third_max  ){
25                third_max = x;
26            }
27        }
28
29        return third_max;
30    }
31};