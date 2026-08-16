// Last updated: 8/16/2026, 9:11:26 PM
class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        // vector<int> arr;
        // for(int i = 0 ; i < order.size() ; i++){
        //     for(int j = 0 ; j < friends.size() ;j++){
        //         if(order[i] == friends[j]){
        //             arr.push_back(order[i]);
        //         }
        //     }
        // }
        // return arr;

        unordered_set<int> arr(friends.begin() , friends.end());
        vector<int> ans;
        for(int i = 0 ; i < order.size() ; i++){
            if(arr.count(order[i])){
                ans.push_back(order[i]);
            }
        }
        return ans;
    }
};