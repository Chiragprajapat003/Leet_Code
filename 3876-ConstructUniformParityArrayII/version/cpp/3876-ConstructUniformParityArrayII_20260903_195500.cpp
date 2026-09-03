// Last updated: 9/3/2026, 7:55:00 PM
1class Solution {
2public:
3    bool uniformArray(vector<int>& nums1) {
4        int c_even = 0;
5        int c_odd = 0;
6
7        for(int i = 0 ; i < nums1.size();i++){
8            if(nums1[i]%2 != 0 ){
9                c_odd++;
10            }else{
11                c_even++;
12            }
13        }
14
15    if(c_odd == nums1.size() || c_even == nums1.size()){
16        return true;
17    }
18    
19    int min_value = *min_element(nums1.begin(),nums1.end());
20
21    if(min_value%2 == 0){
22        return false;
23    }else{
24        return true;
25    }
26    return true;
27    }
28};