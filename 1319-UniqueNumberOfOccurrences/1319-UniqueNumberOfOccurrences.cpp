// Last updated: 8/16/2026, 9:17:13 PM
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> freq;

        // Count frequency
        for(int num : arr){
            freq[num]++;
        }

        unordered_set<int> seen;

        // Check uniqueness
        for(auto it : freq){
            if(seen.count(it.second)){
                return false;
            }
            seen.insert(it.second);
        }

        return true;
    }
};