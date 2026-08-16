// Last updated: 8/16/2026, 9:15:15 PM
class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        int n = encoded.size();
    vector<int> v(n+1);
    v[0] = first;
    for(int i = 0 ; i < n ; i++){
        v[i+1] = v[i]^encoded[i];
    }
    return v;
    }
};