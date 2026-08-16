// Last updated: 8/16/2026, 9:22:04 PM
class Solution {
public:
    int reverseBits(int n) {
        int new_n = 0;
        int count = 32;
        string s = "";
        while(count != 0){
            
           if(n&1){
        s += '1';
           }else{
            s+= '0';
           }
      n = n >> 1;
      count--;
        }
                  
      for(int i = 0 ; i < s.size() ; i++){
        int digit = s[i]-'0';
                new_n += digit*pow(2,s.size()-i-1);
           }
           return new_n;
    }
};