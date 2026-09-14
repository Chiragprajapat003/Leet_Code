// Last updated: 9/14/2026, 5:38:27 PM
1class Solution {
2public:
3    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
4        return (rec1[2] > rec2[0] && rec1[3] > rec2[1] &&
5                rec1[0] < rec2[2] && rec1[1] < rec2[3]);
6    }
7};