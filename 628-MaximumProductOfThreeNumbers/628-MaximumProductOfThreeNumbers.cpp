// Last updated: 8/16/2026, 9:19:08 PM
class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        
        if(nums.size() == 3){
            return nums[0]*nums[1]*nums[2];
        }
    //     sort(nums.begin() , nums.end());

    //     int n = nums.size();
    //     double mx = max(nums[n-1]*nums[n-2]*nums[n-3] ,nums[0]*nums[1]*nums[n-1] );
    //     return mx ;

    // }

    int max1 = INT_MIN;
    int max2 = INT_MIN;
    int max3 = INT_MIN;
    int min1 = INT_MAX;
    int min2 = INT_MAX;

    for(int i = 0 ; i < nums.size() ; i++){
        if(nums[i] > max1){
            max3 = max2;
            max2 = max1;
           
             max1 = nums[i];
        }else if(nums[i] > max2){
           
            max3 = max2;
             max2 = nums[i];

        }else if(nums[i] > max3){
            max3 = nums[i];
        }


        if(nums[i] < min1){
           
            min2 = min1;
             min1 = nums[i];
        }else if(nums[i] < min2){
            min2 = nums[i];
        }

        
    }
    
    double mx = max(max1*max2*max3 , min1*min2*max1);
    return mx;
    }
};