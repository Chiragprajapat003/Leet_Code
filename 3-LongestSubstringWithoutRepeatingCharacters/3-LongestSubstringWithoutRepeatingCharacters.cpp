// Last updated: 8/16/2026, 9:24:52 PM
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // int last[256];

        // for(int i = 0; i < 256; i++) {
        //     last[i] = -1;
        // }

        // int left = 0;
        // int ans = 0;

        // for(int right = 0; right < s.size(); right++) {
            
        //     if(last[s[right]] >= left) {
        //         left = last[s[right]] + 1;
        //     }

        //     last[s[right]] = right;

        //     ans = max(ans, right - left + 1);
        // }

        // return ans;

        
        int left = 0;
        unordered_set<int> st;
        int mx = INT_MIN;

        for(int right = 0 ; right < s.size() ; right++){
            while(st.count(s[right])){
               st.erase(s[left]);
                left++;
            }


            st.insert(s[right]);
            mx  = max(mx , right-left +1);
        }
        return mx > 0 ? mx : 0;
    }
};