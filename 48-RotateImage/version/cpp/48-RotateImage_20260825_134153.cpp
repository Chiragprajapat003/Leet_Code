// Last updated: 8/25/2026, 1:41:53 PM
1class Solution {
2public:
3    void rotate(vector<vector<int>>& matrix) {
4        int n = matrix.size();
5        int m = matrix[0].size();
6
7    vector<vector<int>> new_matrix(n, vector<int>(n, 0));
8    for(int i = 0 ; i < n ; i++ ){
9        for(int j = 0 ; j < m ; j++ ){
10            new_matrix[j][m-i-1] = matrix[i][j];
11        }
12    }
13
14    for(int i = 0 ; i < n ; i++ ){
15        for(int j = 0 ; j < m ; j++ ){
16           matrix[i][j] =  new_matrix[i][j];
17        }
18    }
19
20
21    }
22};