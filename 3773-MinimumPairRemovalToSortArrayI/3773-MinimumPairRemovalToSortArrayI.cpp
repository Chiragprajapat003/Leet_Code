// Last updated: 8/16/2026, 9:11:37 PM
class Solution {
public:
    int minimumPairRemoval(vector<int>& nums) {

        int count = 0;

        while(true) {

            bool sorted = true;

            for(int i = 0; i < nums.size() - 1; i++) {
                if(nums[i] > nums[i + 1]) {
                    sorted = false;
                    break;
                }
            }

            if(sorted) {
                return count;
            }

            int minSum = INT_MAX;
            int index = -1;

            for(int i = 0; i < nums.size() - 1; i++) {

                int sum = nums[i] + nums[i + 1];

                if(sum < minSum) {
                    minSum = sum;
                    index = i;
                }
            }

            nums[index] = minSum;
            nums.erase(nums.begin() + index + 1);

            count++;
        }
    }
};