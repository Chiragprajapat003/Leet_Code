// Last updated: 8/16/2026, 9:14:35 PM
class Solution {
public:
    string sortSentence(string s) {
    string store = "";
    vector<string> vt;
//  1st step -> store evry word in vector
    for(char c : s){
        if( c != ' '){
            store += c;
        }else{
            vt.push_back(store);
            store.clear();
        }
    } 
    vt.push_back(store);
    store.clear();

// 2 nd - > to sort them basis on ther last digit ;

   sort(vt.begin() , vt.end() , [] (string a , string b){
    return a.back() < b.back();
    });

   // 3rd approch -> now we store -> 

   for(int i = 0 ; i < vt.size() ; i++ ){
    vt[i].pop_back();
    store += vt[i];
    if(i < vt.size()-1){
        store += ' ';
    }
   }
  return store;
    }
};