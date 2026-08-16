// Last updated: 8/16/2026, 9:24:41 PM
/**
 * @param {number} x
 * @return {number}
 */
var reverse = function(x) {
    
    let orignal = x;
let reverse = 0 ;
let sign = 1;
if(x < 0){
    sign = -1;
    x = -x;
}

while(x != 0){
    let digit = x%10;
 
    x = Math.floor(x/10);
if (reverse > 214748364 || 
           (reverse === 214748364 && digit > 7)) {
            return 0;
        }


        reverse = 10*reverse + digit ;
}

return reverse*sign;

};