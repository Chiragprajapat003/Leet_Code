// Last updated: 8/16/2026, 9:11:50 PM
class Solution {
public:
    int maximumLengthSubstring(string s) {
        unordered_map<int, int > mp;

        int mx = INT_MIN;
        int left = 0;
        int right = 0;
        
        while(right < s.size()){

            mp[s[right]]++;
            if(mp[s[right]] <=2){
            mx = max(mx , right-left+1);
            right++;
            }else{
                while(mp[s[right]]> 2){
                 
                    mp[s[left]]--;
                       left++;
                }
                right++;
            }
        }

        return mx;
    }
};
