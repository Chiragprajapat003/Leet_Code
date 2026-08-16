// Last updated: 8/16/2026, 9:23:18 PM
class Solution {
public:
    string simplifyPath(string path) {

        vector<string> ans;
        string store = "";

        for (int i = 0; i < path.size(); i++) {

            if (path[i] != '/') {
                store += path[i];
            }
            else {

                if (store == ".") {
                    // current directory -> ignore
                }
                else if (store == "..") {
                    if (!ans.empty()) {
                        ans.pop_back();
                    }
                }
                else if (!store.empty()) {
                    ans.push_back(store);
                }

                store.clear();
            }
        }

        // Last folder process karna hai
        if (store == ".") {
            // ignore
        }
        else if (store == "..") {
            if (!ans.empty()) {
                ans.pop_back();
            }
        }
        else if (!store.empty()) {
            ans.push_back(store);
        }

        string result = "";

        for (string &dir : ans) {
            result += "/";
            result += dir;
        }

        return result.empty() ? "/" : result;
    }
};