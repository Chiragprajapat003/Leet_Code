// Last updated: 9/21/2026, 12:36:51 AM
1class Solution {
2public:
3    int reverseDegree(string s) {
4        // unordered_map<char,int> mp;
5        // char ch = 'a';
6        // int c  =  26;
7        // while(ch <= 122){
8        //     mp[ch] = c;
9        //     ch++;
10        //     c--;
11        // }
12        // int ans = 0;
13        // for(int i = 0 ; i < s.size() ; i++){
14        //     ans += mp[s[i]]*(i+1);
15        // }
16
17        // return ans;
18
19
20
21
22
23        /////////////2nd approch //////////
24        int ans = 0;
25        for(int i = 0 ; i < s.size() ; i++){
26            ans += ('z'-s[i] + 1)*(i+1);
27        }
28        return ans;
29    }
30};