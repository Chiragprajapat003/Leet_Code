// Last updated: 8/16/2026, 9:17:39 PM
class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> new_heights = heights;
        sort(new_heights.begin() , new_heights.end());
            int count = 0;
        for(int i = 0 ; i < heights.size() ; i++){
            if(heights[i] != new_heights[i]){
                count++;
            }
        }

        return count;
    }
};