// Last updated: 8/16/2026, 9:24:08 PM
class Solution {
public:
    bool isValid(string s) {
    stack<char> st;
    
    for(char c : s){
        if(c == '(' || c == '[' || c == '{'){
            st.push(c);
        }else if(st.empty()){
            return false;
        }else{
            char top = st.top();

            if((c == ']')  && (top != '[')) return false;
            if((c == ')')  && (top != '(')) return false;
            if((c == '}')  && (top != '{')) return false;

            st.pop();
        }
    }
 
return st.empty();
    }
};