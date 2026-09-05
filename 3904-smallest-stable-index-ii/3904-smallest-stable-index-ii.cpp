class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int>v(n);
        v[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
           v[i] = min(v[i+1],nums[i]);
        }
        int maxi = nums[0];
        for(int i=0;i<n;i++){
            maxi = max(maxi,nums[i]);
            int c = maxi-v[i];
            if(c<=k){
                return i;
            }
        }
        return -1;
    }
};