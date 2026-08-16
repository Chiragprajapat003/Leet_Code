// Last updated: 8/16/2026, 9:13:34 PM
class Solution {
public:
    int minimumCost(vector<int>& cost) {

        sort(cost.begin(), cost.end(), greater<int>());

        int sum = 0;

        for (int i = 0; i < cost.size(); i++) {
            if (i % 3 != 2) {   // Skip every 3rd candy (free one)
                sum += cost[i];
            }
        }

        return sum;
    }
};