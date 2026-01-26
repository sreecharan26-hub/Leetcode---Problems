class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int n = arr.size();
        vector<vector<int>> v;
        sort(arr.begin(),arr.end());
        int mini = INT_MAX;
        for(int i=0;i<n-1;i++){
            int diff = arr[i+1]-arr[i];
            if(diff<mini){
                mini=diff;
                v.clear();
                v.push_back({arr[i],arr[i+1]});
            }
            else if(diff == mini){
                v.push_back({arr[i],arr[i+1]});
            }
        }
        return v;

    }
};