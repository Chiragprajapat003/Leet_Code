// Last updated: 8/25/2026, 5:00:19 PM
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();

    vector<vector<int>> new_matrix(n, vector<int>(n, 0));
    for(int i = 0 ; i < n ; i++ ){
        for(int j = 0 ; j < m ; j++ ){
            new_matrix[j][m-i-1] = matrix[i][j];
        }
    }

    for(int i = 0 ; i < n ; i++ ){
        for(int j = 0 ; j < m ; j++ ){
           matrix[i][j] =  new_matrix[i][j];
        }
    }


    }
};