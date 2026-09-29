// Last updated: 9/29/2026, 10:32:19 PM
1class Solution {
2public:
3    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
4     if(n == 0){
5        return true;
6     }
7
8     for(int i = 0 ; i < flowerbed.size() ;i++){
9        if(flowerbed[i] == 0 && (i == 0 || flowerbed[i-1] == 0) && (i == flowerbed.size()-1 || flowerbed[i+1] == 0)){
10            n--;
11            flowerbed[i] = 1;
12        }
13        if(n == 0){
14            return true;
15        }
16
17     }
18
19     if(n == 0){
20        return true;
21     }
22
23     return false;
24    }
25};
26