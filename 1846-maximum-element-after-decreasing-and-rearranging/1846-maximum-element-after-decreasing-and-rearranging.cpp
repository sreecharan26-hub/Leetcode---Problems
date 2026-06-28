class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(),arr.end());
        int cnt =1;
        for(int i=1;i<n;i++){
            if(arr[i]>=cnt+1){
                cnt++;
            }
        }
        return cnt;

    }
};