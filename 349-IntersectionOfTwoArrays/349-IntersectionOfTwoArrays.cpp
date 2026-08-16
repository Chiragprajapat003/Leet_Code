// Last updated: 8/16/2026, 9:20:19 PM
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

        unordered_set<int> s1(nums1.begin(), nums1.end());
        unordered_set<int> ans;

        for(int num : nums2) {
            if(s1.count(num)) {
                ans.insert(num);
            }
        }

        return vector<int>(ans.begin(), ans.end());
    }
};