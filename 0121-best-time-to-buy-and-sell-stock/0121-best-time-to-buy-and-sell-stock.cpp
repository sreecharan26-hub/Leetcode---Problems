class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int n = nums.size();
        int p = 0;
        int mini = nums[0];
        for(int i=1;i<n;i++){
            p=max(p,nums[i]-mini);
            mini=min(mini,nums[i]);
        }
        return p;
    }
};