// Last updated: 9/16/2026, 11:05:29 PM
1class Solution {
2public:
3    int lengthOfLastWord(string s) {
4        vector<string> v;
5        string store = "";
6        for(char c : s){
7            if( c != ' '){
8                store += c;
9            }else{
10                if(!(store.empty())){
11                    v.push_back(store);
12                    store.clear();
13                }
14            }
15        }
16                        if(!(store.empty())){
17                    v.push_back(store);
18                    store.clear();
19                }
20         return v.back().size();
21    }
22};