// Last updated: 8/16/2026, 9:20:09 PM
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int count = 0;
        int i = 0;
        while(i < ransomNote.size()){
            for(int j = 0 ; j < magazine.size();j++){
                if(ransomNote[i] == magazine[j]){
                    count++;
                    magazine.erase(j,1);
                    break;
                }
            }
            i++;
        }
      return   count == ransomNote.size() ? true : false;
    }
};