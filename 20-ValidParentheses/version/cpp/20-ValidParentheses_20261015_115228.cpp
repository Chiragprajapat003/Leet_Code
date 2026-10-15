// Last updated: 10/15/2026, 11:52:28 AM
1class Solution {
2public:
3    bool isValid(string s) {
4        stack<int> st;
5
6        for(int i = 0 ; i < s.size() ; i++){
7            if(st.empty() && ( s[i] == '(' ||s[i] == '{'  || s[i] == '[')){
8                st.push(s[i]);
9            }else if (st.empty() && (s[i] == ')' ||s[i] == '}'  || s[i] == ']') ){
10                return false;
11            }else if( s[i] == '(' ||s[i] == '{'  || s[i] == '['){
12                st.push(s[i]);
13            }else if(
14(s[i] == ')' && st.top() == '(') || (s[i] == '}' && st.top() == '{' ) || (s[i] == ']'  && st.top() == '[')){
15                st.pop();
16            }else if((s[i] == ')' && st.top() != '(') ||(s[i] == '}' && st.top() != '{' ) || (s[i] == ']'  && st.top() != '[')){
17                return false;
18            }
19        }
20        return st.empty() ;
21    }
22};