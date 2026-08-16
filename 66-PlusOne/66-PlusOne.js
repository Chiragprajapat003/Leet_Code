// Last updated: 8/16/2026, 9:23:30 PM
/**
 * @param {number[]} digits
 * @return {number[]}
 */
 var plusOne = function(digits){
 for(let i = 1 ; i <= digits.length ;i++ ){
    var idx = digits.length-i;
    if(digits[idx]<9){
        digits[idx]++;
        return digits;
    }else{
        digits[idx] = 0;
    }
   
 }
 digits.unshift(1)
 return digits;
}
