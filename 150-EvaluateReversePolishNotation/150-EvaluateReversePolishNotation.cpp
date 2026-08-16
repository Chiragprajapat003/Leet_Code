// Last updated: 8/16/2026, 9:22:35 PM
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        vector<int> st;

        for (string token : tokens) {

            if (token != "+" &&
                token != "-" &&
                token != "*" &&
                token != "/") {

                st.push_back(stoi(token));
            }
            else {
                int right = st.back();
                st.pop_back();

                int left = st.back();
                st.pop_back();

                if (token == "+")
                    st.push_back(left + right);

                else if (token == "-")
                    st.push_back(left - right);

                else if (token == "*")
                    st.push_back(left * right);

                else
                    st.push_back(left / right);
            }
        }

        return st.back();
    }
};