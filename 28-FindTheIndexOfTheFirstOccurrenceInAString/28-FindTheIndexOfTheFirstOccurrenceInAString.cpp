// Last updated: 8/16/2026, 9:23:51 PM
class Solution {
public:
    int strStr(string haystack, string needle) {
    int n = haystack.size();
    int m = needle.size();
    for(int i = 0 ; i <= n-m ; i++){
        if(haystack.substr(i,m) == needle){
            return i;
        }
    }
    return -1;
    }
};