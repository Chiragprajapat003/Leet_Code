// Last updated: 8/16/2026, 9:17:30 PM
class Solution {
public:
    string defangIPaddr(string address) {
     
     string output = "";
     for(char c : address){
        if(c != '.'){
            output.push_back(c);
        }else{
            output += "[.]";
        }
     }
     return output;
    }
};