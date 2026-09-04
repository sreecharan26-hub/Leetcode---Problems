class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        for(int i = 0;i<n;i++){
            int maxi = nums[0];
            int mini = nums[n-1];
            for(int j = 0;j<=i;j++){
                maxi = max(maxi,nums[j]);
            }
            for(int j = i;j<n;j++){
                mini= min(mini,nums[j]);
            }
                int c = maxi-mini;

                if(c<=k){
                    return i;
                }
        }
        return -1;
    }
};