// Last updated: 8/16/2026, 9:13:14 PM
class Solution {
public:
    bool digitCount(string num) {

   for(int i = 0 ; i < num.size() ; i++) {
    int freq = num[i] - '0';
    int count = 0 ;
    for(int j = 0 ; j < num.size() ; j++){
       if(i == num[j]-'0'){
        count++;
       }
    }
    if(count != freq){
        return false;
    }else{
        count = 0;
        
    }

   }
   return true;
    }
};