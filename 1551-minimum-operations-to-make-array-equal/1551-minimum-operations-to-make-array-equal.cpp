class Solution {
public:
    int minOperations(int n) {
        int sum = 0;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            arr[i]=(2*i)+1;
        }
        int s = 0;
        for(auto i : arr){
            s+=i;
        }
        for(int i=0;i<n/2;i++){
            sum+=(s/n)-arr[i];
        }
        return sum;
    }
};