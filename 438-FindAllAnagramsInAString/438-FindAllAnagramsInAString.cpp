// Last updated: 8/16/2026, 9:19:52 PM
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {

        vector<int> ans;

        int m = p.size();
        int n = s.size();

        if (m > n) return ans;

        unordered_map<char , int> m1;
        for(char c : p){
            m1[c]++;
        }

        for(int i = 0 ; i <= n-m ; i++){
            unordered_map<char , int> m2;
            for(int j = i ; j < i+m ; j++){
                m2[s[j]]++;
            }
            if(m1 == m2){
                ans.push_back(i);
            }
        }


        return ans;
    }
};