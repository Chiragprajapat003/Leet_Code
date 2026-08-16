// Last updated: 8/16/2026, 9:12:45 PM
class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
         sort(players.begin() , players.end());
        sort(trainers.begin() ,trainers.end());

        // int mx_len = max(g.size() , s.size());

        int i = 0;
        int j = 0;
        int count = 0;
        while(i < players.size() && j < trainers.size()){
            if(players[i] <= trainers[j]){
                count++;
                i++;
                j++;
            }else{
                j++;
            }
        }
        return count ;
    }
};