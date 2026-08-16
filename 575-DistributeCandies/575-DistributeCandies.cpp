// Last updated: 8/16/2026, 9:19:18 PM
class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int count = candyType.size()/2;
        unordered_set<int> candy(candyType.begin() , candyType.end());
        return candy.size() < count ?  candy.size() : count ;
    }
};