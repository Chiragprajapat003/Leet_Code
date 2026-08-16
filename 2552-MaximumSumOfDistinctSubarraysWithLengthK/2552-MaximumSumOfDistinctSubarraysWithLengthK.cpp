// Last updated: 8/16/2026, 9:12:35 PM
class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {

        unordered_set<int> st;

        long long sum = 0;
        long long mx = 0;

        int low = 0;

        for(int high = 0; high < nums.size(); high++) {

            // remove duplicates
            while(st.count(nums[high])) {
                st.erase(nums[low]);
                sum -= nums[low];
                low++;
            }

            // add current element
            st.insert(nums[high]);
            sum += nums[high];

            // maintain window size k
            if(high - low + 1 > k) {
                st.erase(nums[low]);
                sum -= nums[low];
                low++;
            }

            // window size k and all elements are unique
            if(high - low + 1 == k) {
                mx = max(mx, sum);
            }
        }

        return mx;
    }
};