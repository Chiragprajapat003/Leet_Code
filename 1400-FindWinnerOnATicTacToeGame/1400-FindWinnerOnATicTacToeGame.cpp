// Last updated: 8/16/2026, 9:17:06 PM
class Solution {
public:
    string tictactoe(vector<vector<int>>& moves) {
        map<vector<int> , char> mp;

        for(int i = 0 ; i < moves.size() ;i++){
            if(i%2 == 0){
                mp[moves[i]] = 'A';
            }else{
                mp[moves[i]] = 'B';
            }
            
        }

        if(moves.size() < 5){
            return "Pending";
        }

        // vector<int> move = mp.first;


        if(mp[{0,0}] != '\0' &&mp[{0,0}] == mp[{1,1}]  && mp[{1,1}]== mp[{2,2}]){
            if(mp[{0,0}] == 'A'){
                return "A";
            }else {
                return "B";
            }
        }
        if(mp[{0,2}] != '\0' &&mp[{0,2}] == mp[{1,1}]  && mp[{1,1}]== mp[{2,0}]){
            if(mp[{0,2}] == 'A'){
                return "A";
            }else {
                return "B";
            }
        }
        for(int i = 0 ; i < 3 ; i++){
        
            for(int j = 0 ; j < 1 ; j++){

               if(mp[{i,j}] != '\0' &&mp[{i,j}] == mp[{i, j+1}] &&mp[{i, j+1}]  == mp[{i,j+2}]) {
                if(mp[{i,j}] == 'A'){
                    return "A";
                }else{
                    return "B";
                }
               }
               if( mp[{j,i}] != '\0' &&mp[{j,i}] == mp[{ j+1 , i}] && mp[{j+1 ,i}] == mp[{j+2 , i}]) {
                if(mp[{j,i}] == 'A'){
                    return "A";
                }else{
                    return "B";
                }
               }


            }
        }
 

    if(moves.size() == 9){
        return "Draw";
    }
    return "Pending";
    }
};