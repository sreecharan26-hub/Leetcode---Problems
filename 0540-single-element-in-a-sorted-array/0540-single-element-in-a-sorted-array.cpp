class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) {
        int n = arr.size();
        int l = 0;
        int r = n-1;
        for(int i=0;i<n;i++){
            if(n==1){
                return arr[0];
            }
            if(i==0){
                if(arr[i]!=arr[i+1])
                return arr[0];
            }
            else if(i==n-1){
                if(arr[i]!=arr[i-1])
                return arr[i];
            }
            else{
                if(arr[i]!=arr[i+1] and arr[i]!= arr[i-1])
                return arr[i];
            }
        }
        return 0;
    }
};