// Last updated: 8/16/2026, 9:12:01 PM
class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int count = 0;
        for(int s : hours){
            if( s >= target){
         count++;
            }
        }
return count;
    }
};