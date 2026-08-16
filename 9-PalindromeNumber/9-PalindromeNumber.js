// Last updated: 8/16/2026, 9:24:44 PM
/**
 * @param {number} x
 * @return {boolean}
 */
var isPalindrome = function(x) {
 
let  num = x;
let revrse = 0;

while(x > 0){
let digit = x%10;
 revrse = revrse*10 + digit;
x = Math.floor(x/10)
}

if(num == revrse){
return true;
}else{
  return false;
}

};