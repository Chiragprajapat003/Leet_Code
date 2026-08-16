// Last updated: 8/16/2026, 9:23:17 PM
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {

        vector<vector<int>> ans = {{}};

        for (int num : nums) {

            int size = ans.size();

            for (int i = 0; i < size; i++) {

                vector<int> temp = ans[i];
                temp.push_back(num);

                ans.push_back(temp);
            }
        }

        return ans;
    }
};