// Last updated: 8/16/2026, 9:15:34 PM
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {

        int mx = 0;

        for(int i = 0; i < accounts.size(); i++){

            int sum = 0;

            for(int j = 0; j < accounts[i].size(); j++){

                sum += accounts[i][j];
            }

            mx = max(mx, sum);
        }

        return mx;
    }
};