// Last updated: 8/16/2026, 9:15:10 PM
class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> vt;
        
        for(int i = 0 ; i < boxes.size() ; i++){
            int count = 0;
            for(int j = 0 ;  j < boxes.size() ; j++){
                if(i != j && boxes[j] == '1'){
                    count += abs(i-j);
                }
            }
            vt.push_back(count);
        }
        return vt;
    }
};