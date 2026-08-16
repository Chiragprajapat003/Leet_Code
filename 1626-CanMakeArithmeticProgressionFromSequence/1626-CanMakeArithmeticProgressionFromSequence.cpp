// Last updated: 8/16/2026, 9:16:12 PM
class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {

        int n = arr.size();

        int mn = *min_element(arr.begin(), arr.end());
        int mx = *max_element(arr.begin(), arr.end());

        if ((mx - mn) % (n - 1) != 0)
            return false;

        int diff = (mx - mn) / (n - 1);

        unordered_set<int> st(arr.begin(), arr.end());

        for (int i = 0; i < n; i++) {
            if (!st.count(mn + i * diff))
                return false;
        }

        return true;
    }
};