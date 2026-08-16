// Last updated: 8/16/2026, 9:15:32 PM
class Solution {
public:
    string interpret(string command) {

       string ans = "";
       for(int i = 0 ; i < command.size() ; i++){
        if(command[i] == 'G'){
            ans += 'G';
        }else if (command[i] == '(' && command[i+1] == ')'){
            ans+= 'o';
            i++;
        }else if(command[i] == '(' && command[i+1] == 'a'){
            ans+= "al";
            i+3;
        }
       }
       return ans;
    }
};