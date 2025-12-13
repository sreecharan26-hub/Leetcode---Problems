class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int mini = nums[0];
        int n = nums.size();
        int p = 0;
        for(int i=1;i<n;i++){
            int c = nums[i] - mini;
            p = max(p,c);
            mini = min(nums[i],mini);
        }
        return p;
    }
};