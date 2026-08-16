// Last updated: 8/16/2026, 9:14:00 PM
class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1,
                              vector<int>& nums2,
                              vector<int>& nums3) {

        vector<int> freq(101, 0);

        unordered_set<int> s1(nums1.begin(), nums1.end());
        unordered_set<int> s2(nums2.begin(), nums2.end());
        unordered_set<int> s3(nums3.begin(), nums3.end());

        for (int x : s1) freq[x]++;
        for (int x : s2) freq[x]++;
        for (int x : s3) freq[x]++;

        vector<int> ans;

        for (int i = 1; i <= 100; i++) {
            if (freq[i] >= 2)
                ans.push_back(i);
        }

        return ans;
    }
};