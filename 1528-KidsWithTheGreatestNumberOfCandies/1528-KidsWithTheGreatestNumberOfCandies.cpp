// Last updated: 8/16/2026, 9:16:30 PM
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {

        int mx = 0;

        for(int candy : candies){

            mx = max(mx, candy);
        }

        vector<bool> ans(candies.size());

        for(int i = 0; i < candies.size(); i++){

            ans[i] = (candies[i] + extraCandies >= mx);
        }

        return ans;
    }
};