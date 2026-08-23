// Last updated: 8/23/2026, 10:28:37 PM
class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {

        unordered_map<int, unordered_set<int>> mp;

        for (auto &seat : reservedSeats) {
            mp[seat[0]].insert(seat[1]);
        }

        int count = (n - mp.size()) * 2;

        for (auto &[row, seats] : mp) {

            bool left = true;
            bool middle = true;
            bool right = true;

           
            for (int j = 2; j <= 5; j++) {
                if (seats.count(j)) {
                    left = false;
                    break;
                }
            }

        
            for (int j = 4; j <= 7; j++) {
                if (seats.count(j)) {
                    middle = false;
                    break;
                }
            }

          
            for (int j = 6; j <= 9; j++) {
                if (seats.count(j)) {
                    right = false;
                    break;
                }
            }

            if (left && right) {
                count += 2;
            }
            else if (left || middle || right) {
                count += 1;
            }
        }

        return count;
    }
};