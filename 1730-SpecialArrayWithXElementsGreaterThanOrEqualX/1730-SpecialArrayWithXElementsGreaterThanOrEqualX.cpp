// Last updated: 8/16/2026, 9:15:56 PM
class Solution {
public:
    int specialArray(vector<int>& nums) {
        
        // int mx = *max_element(nums.begin() , nums.end());
        // int size = nums.size();
        // int mn = min(mx,size);

        // while(mn > 0){
        //     int count = 0;
        //     for(int i = 0 ; i < nums.size() ; i++){
        //         if(mn <= nums[i]){
        //             count++;
        //         }
        //     }

        //     if(mn == count){
        //         return mn;
        //     }

        //     mn--;
        // } 

        // return -1;

       // o(n)--> 

       sort(nums.begin() , nums.end());
       int size = nums.size();
        
        for(int x = 1; x <= size ; x++){
            int idx = lower_bound(nums.begin() , nums.end() , x) - nums.begin();


            if(size - idx ==  x){
                return x;
            }
         }
     return -1;

    }
};