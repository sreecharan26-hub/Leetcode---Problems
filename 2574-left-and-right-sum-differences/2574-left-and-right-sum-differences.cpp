class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int> leftsum(n),rightsum(n),ans(n);
        int sum = 0;
        for(int i=0;i<n;i++){
            leftsum[i] = sum;
            sum+=nums[i]; 
        }
        sum = 0;
        for(int i=n-1;i>=0;i--){
            rightsum[i] = sum;
            sum+=nums[i]; 
        }
        for(int i=0;i<n;i++){
            ans[i]=abs(leftsum[i]-rightsum[i]);
        }
        return ans;
    }
};