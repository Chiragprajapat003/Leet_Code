// Last updated: 8/16/2026, 9:14:11 PM
class Solution {
public:
     int countQuadruplets(vector<int>& nums) {
    // int count = 0;

    // // sort(nums.begin() , nums.end());

    // for(int i = 0 ; i < nums.size()-3 ; i++){
    //     for(int j = i+1 ;  j < nums.size() -2 ; j++){
    //         for(int k = j+1 ; k < nums.size()-1 ; k++){
    //             for(int l = k+1 ; l < nums.size() ; l++){
    //                 if(nums[i] + nums[j] + nums[k] == nums[l]){
    //                     count++;
    //                 }
    //             }
    //         }
    //     }
    // }


    // o(n*2)  approch -> 

        int n = nums.size();
        int ans = 0;

        unordered_map<int, int> mp;

        for (int b = n - 3; b >= 1; b--) {

            // Store nums[d] - nums[c]
            for (int d = b + 2; d < n; d++) {
                mp[nums[d] - nums[b + 1]]++;
            }

            // Find nums[a] + nums[b]
            for (int a = 0; a < b; a++) {
                ans += mp[nums[a] + nums[b]];
            }
        }

        return ans;
    }
};