class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int profit = 0;
        int n = nums.size();
        for(int i=0;i<n-1;i++){
            if(nums[i]<nums[i+1]){
                profit+=nums[i+1]-nums[i];
            }
        }
        return profit;        
    }
};