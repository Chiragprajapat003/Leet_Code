// Last updated: 8/16/2026, 9:12:09 PM
class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
    vector<int> ans(n); // return 
    vector<int> ans1(n,0); // return 
    vector<int> ans2(n,0); // return 

    int right = 0;
    int left = 0;
    // base case 
    if(n == 1){
        return ans;
    }
    //left 
    for(int i = 0 ; i < n-1 ; i ++){
        left += nums[i];
        ans1[i+1] = left;
    }
    // right 
    for(int i = 0 ; i < n-1 ; i ++){
        right += nums[n-i-1];
        ans2[n-i-2] = right;
    }
    for(int i = 0 ; i < n; i ++){
        ans[i] = abs(ans1[i]-ans2[i]);
    }
return ans;
    }
};