class Solution {
public:
    int n;
    bool dfs(vector<int>& arr, int i){
        if(i<0 or i>=n or arr[i]<0){
            return false;
        }
        if(arr[i]==0){
            return true;
        }
        arr[i]*=-1;
        bool left=dfs(arr,i-arr[i]);
        bool right=dfs(arr,i+arr[i]);
        return  left || right;
    }
    bool canReach(vector<int>& arr, int start) {
        n = arr.size();
        return dfs(arr,start);
    }
};