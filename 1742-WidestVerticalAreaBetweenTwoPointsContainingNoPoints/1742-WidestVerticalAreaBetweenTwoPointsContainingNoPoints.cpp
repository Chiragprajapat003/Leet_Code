// Last updated: 8/16/2026, 9:15:53 PM
class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
      vector<int> arr;

      for(int i = 0 ; i < points.size() ; i++ ){
          vector<int> point = points[i];
            if(arr.size() == 0){
            arr.push_back(point[0]);
            }else{
                if(arr[i-1] > point[0]){
                    int val = arr[i-1];
                    arr[i-1] = point[0];
                    arr.push_back(val);
                }else{
                    arr.push_back(point[0]);
                }
            }
      }  

    sort(arr.begin() , arr.end());
      int mx = 0;
      for(int i = 0 ; i < arr.size()-1 ; i++){
        mx = max(mx, arr[i+1] - arr[i]);
      }
      return mx;
    }
};