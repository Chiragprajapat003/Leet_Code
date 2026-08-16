// Last updated: 8/16/2026, 9:15:13 PM
class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int , int> mp;
        int sum = 0;
        for(int num : nums){
            mp[num]++;
        }

        for(auto &num : mp){
            if( num.second == 1){
                sum += num.first;
            }
        }
        return sum ;
    }
};