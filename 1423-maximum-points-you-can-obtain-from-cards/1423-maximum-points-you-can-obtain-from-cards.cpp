class Solution {
public:
    int maxScore(vector<int>& nums, int k) {
        int n = nums.size();
        int lsum =0;
        int rsum = 0;
        int ans = 0;
        for(int i=0;i<=k-1;i++){
            lsum+=nums[i];
            ans = lsum;
        }
        int rindx = n-1;
        for(int i=k-1;i>=0;i--){
            lsum -= nums[i];
            rsum = rsum+nums[rindx];
            rindx = rindx-1;
            ans = max(ans,lsum+rsum);
        }
        return ans;
    }
};