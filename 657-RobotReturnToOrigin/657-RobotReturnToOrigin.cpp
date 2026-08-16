// Last updated: 8/16/2026, 9:19:01 PM
class Solution {
public:
    bool judgeCircle(string moves) {
        // for(int i = 0 ; i < moves.size() ; i++){
        //     if(moves[i] == 'R' && moves[i+1] == 'L'){
        //         return true ;
        //     }
        //     else if(moves[i] == 'L' && moves[i+1] == 'R'){
        //         return true ;
        //     }
        //     else if(moves[i] == 'U' && moves[i+1] == 'D'){
        //         return true ;
        //     }
        //     else if(moves[i] == 'D' && moves[i+1] == 'U'){
        //         return true ;
        //     }else {
        //         return false;
        //     }
        // }
        // return false;

        // 2nd method -> 
        int count1 = 0;
        int count2 = 0;
        unordered_map<char , int> m;
        m['R'] = 1;
        m['L'] = -1;
        m['U'] = +2;
        m['D'] = -2;

        for(int i = 0 ; i < moves.size(); i++){
         if(moves[i] == 'R' || moves[i] == 'L'){
            count1 += m[moves[i]];
         }else{
            count2 += m[moves[i]];
         }
        }
        return (count1 == 0) && (count2 == 0) ? true : false;
    }
};