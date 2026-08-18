// Last updated: 8/18/2026, 10:30:02 PM
class Solution {
public:
    vector<vector<int>> ans;
    vector<int> v;

    void solve(int start, int n, int k) {

        if (v.size() == k) {
            ans.push_back(v);
            return;
        }

        for (int i = start; i <= n; i++) {
            v.push_back(i);

            solve(i + 1, n, k);

            v.pop_back();
        }
    }

    vector<vector<int>> combine(int n, int k) {

        solve(1, n, k);

        return ans;
    }
};