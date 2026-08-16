// Last updated: 8/16/2026, 9:23:04 PM
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> ans;
        int i = 0;
        int j = 0;
        while(i < m && j < n){
            if(nums1[i] < nums2[j]){
                ans.push_back(nums1[i]);
                i++;
            }else{
                ans.push_back(nums2[j]);
                j++;
            }
        }
        if(i == m){
            while(j < n){
                ans.push_back(nums2[j]);
                j++;
            }
        }else if(j == n){
            while(i < m){
                ans.push_back(nums1[i]);
                i++;
            }
        }
        nums1 = ans;
    }
};