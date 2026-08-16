// Last updated: 8/16/2026, 9:16:40 PM
class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
       int count = 0;

       for(int i =  0 ; i < arr1.size() ; i++){
        bool dis = true;
        for(int j  = 0 ; j < arr2.size() ; j++){
            if(abs(arr1[i] -  arr2[j]) <= d){
                dis = false;
            }
        }

        if(dis){
            count++;
        }
       } 

       return count;
    }
};