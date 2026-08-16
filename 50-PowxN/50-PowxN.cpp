// Last updated: 8/16/2026, 9:23:40 PM
class Solution {
public:

double solve(double x , long long n){
if( n == 0){
    return 1;
}

double half = solve(x,n/2);
  if(n%2 == 0){
    return half*half;
  }

  return x*half*half;
}
    double myPow(double x, int n) {
        // long long num = n;
        // if(num >= 0){
        //     return pow(x,n);
        // }else{
        //       num = -num;
        //     return 1/pow(x,num);
        // }
        //   return pow(x, num);
        long long  num = n;
        if(num < 0){
            x = 1/x;
            num = -num;
        }
        return solve(x,num);
    }
};