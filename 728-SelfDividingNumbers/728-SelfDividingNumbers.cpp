// Last updated: 8/16/2026, 9:18:55 PM
class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;

        for(int i = left ; i <= right ;i++){
            if(i < 10){
                ans.push_back(i);
            }else if( i == 10 ){
                continue;
            }else {

                int real = i;
                int num = i;
                while(num > 0){
                    int mod = num%10;
                    if(mod != 0   &&(real%mod) == 0){
                        num = num/10;
                    }else{
                        break;
                    }
                }

                if(num == 0) {
                    ans.push_back(real);
                }
            }

        }

        return ans;
    }
};