// Last updated: 8/16/2026, 9:17:27 PM
class Solution {
public:
    double trimMean(vector<int>& arr) {
    
    sort(arr.begin() , arr.end());
    int remove = arr.size()/20;
    double sum = 0;

    for(int i = remove ; i < arr.size()-remove ; i++){
        sum += arr[i];
    }

    return sum/(arr.size() - 2*remove);
    }
};