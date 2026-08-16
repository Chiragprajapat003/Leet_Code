// Last updated: 8/16/2026, 9:16:44 PM
class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        
        int count = 0;
        unordered_set<int> st;
        for(int i = 0 ; i < arr.size() ; i++){
                st.insert(arr[i]);
                if(arr[i] == 0){
                    count++;
                }
        }

        if(count > 1){
            return true;
        }
        for(int j = 0 ; j < arr.size() ; j++){
            
            if(arr[j] != 0 && st.count(2*arr[j])){
                return true;
            }
        }
        return false;
    }
};