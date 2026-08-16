// Last updated: 8/16/2026, 9:25:30 PM
/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
  var arr = [] 
  for(let i = 0 ; i < nums.length ; i++){
for(let j = i+1 ; j < nums.length ; j++){
if(nums[i]+nums[j] == target){
arr[0] = i;
arr[1] = j;
}
}
  }
return arr;
};
