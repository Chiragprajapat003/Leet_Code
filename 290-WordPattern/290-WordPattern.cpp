// Last updated: 8/16/2026, 9:20:48 PM
#include <map>
using namespace std;

class Solution {
public:
    bool wordPattern(string pattern, string s) {
        map<char, string> m;
        map<string, char> rev;

        int count = 0;

        for(int i = 0; i < pattern.size(); i++) {

            if(count >= s.size()) return false;

            string store = "";

            while(count < s.size() && s[count] != ' ') {
                store += s[count];
                count++;
            }

            if(m.count(pattern[i])) {
                if(m[pattern[i]] != store) return false;
            } else {
                m[pattern[i]] = store;
            }

            if(rev.count(store)) {
                if(rev[store] != pattern[i]) return false;
            } else {
                rev[store] = pattern[i];
            }

            if(count < s.size()) count++;
        }

        if(count < s.size()) return false;

        return true;
    }
};