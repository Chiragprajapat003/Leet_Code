// Last updated: 8/25/2026, 10:21:13 PM
1class Solution {
2public:
3    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
4        vector<int> ans;
5        
6
7        int m = mat.size();
8        int n = mat[0].size();
9        int row = 0; 
10        int col = 0;
11
12        for(int i = 0 ; i < m*n ; i++){
13            ans.push_back(mat[row][col]);
14
15            if((row+col)%2 == 0){
16                if(col == n-1){
17                    row++;
18                }else if(row == 0){
19                    col++;
20                }else{ row-- ; col++;}
21            }else{
22                if(row == m-1){
23                    col++;
24                }else if(col == 0){
25                    row++;
26                }else{
27                    row++; col--;
28                }
29            }
30        }
31           
32        return ans;
33    }
34};