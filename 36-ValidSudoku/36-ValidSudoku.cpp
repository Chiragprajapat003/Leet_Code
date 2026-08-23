// Last updated: 8/23/2026, 10:31:15 PM
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        // Check rows
        for(int i = 0; i <= 8; i++) {

            unordered_set<char> st;

            for(int j = 0; j <= 8; j++) {

                if(board[i][j] != '.') {

                    if(st.count(board[i][j])) {
                        return false;
                    }

                    st.insert(board[i][j]);
                }
            }
        }


        // Check columns
        for(int i = 0; i <= 8; i++) {

            unordered_set<char> st;

            for(int j = 0; j <= 8; j++) {

                if(board[j][i] != '.') {

                    if(st.count(board[j][i])) {
                        return false;
                    }

                    st.insert(board[j][i]);
                }
            }
        }


        // Check first 3 rows (0 - 2)
        unordered_set<char> st1;
        unordered_set<char> st2;
        unordered_set<char> st3;

        for(int i = 0; i <= 2; i++) {

            for(int j = 0; j <= 8; j++) {

                if(j <= 2) {

                    if(board[i][j] != '.') {

                        if(st1.count(board[i][j])) {
                            return false;
                        }

                        st1.insert(board[i][j]);
                    }
                }

                else if(j <= 5) {

                    if(board[i][j] != '.') {

                        if(st2.count(board[i][j])) {
                            return false;
                        }

                        st2.insert(board[i][j]);
                    }
                }

                else {

                    if(board[i][j] != '.') {

                        if(st3.count(board[i][j])) {
                            return false;
                        }

                        st3.insert(board[i][j]);
                    }
                }
            }
        }


        // Clear sets for next 3 rows
        st1.clear();
        st2.clear();
        st3.clear();


        // Check rows 3 - 5
        for(int i = 3; i <= 5; i++) {

            for(int j = 0; j <= 8; j++) {

                if(j <= 2) {

                    if(board[i][j] != '.') {

                        if(st1.count(board[i][j])) {
                            return false;
                        }

                        st1.insert(board[i][j]);
                    }
                }

                else if(j <= 5) {

                    if(board[i][j] != '.') {

                        if(st2.count(board[i][j])) {
                            return false;
                        }

                        st2.insert(board[i][j]);
                    }
                }

                else {

                    if(board[i][j] != '.') {

                        if(st3.count(board[i][j])) {
                            return false;
                        }

                        st3.insert(board[i][j]);
                    }
                }
            }
        }


        // Clear sets for last 3 rows
        st1.clear();
        st2.clear();
        st3.clear();


        // Check rows 6 - 8
        for(int i = 6; i <= 8; i++) {

            for(int j = 0; j <= 8; j++) {

                if(j <= 2) {

                    if(board[i][j] != '.') {

                        if(st1.count(board[i][j])) {
                            return false;
                        }

                        st1.insert(board[i][j]);
                    }
                }

                else if(j <= 5) {

                    if(board[i][j] != '.') {

                        if(st2.count(board[i][j])) {
                            return false;
                        }

                        st2.insert(board[i][j]);
                    }
                }

                else {

                    if(board[i][j] != '.') {

                        if(st3.count(board[i][j])) {
                            return false;
                        }

                        st3.insert(board[i][j]);
                    }
                }
            }
        }

        return true;
    }
};