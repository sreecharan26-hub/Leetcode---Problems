class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int n = nums.size();
        int min = nums[0];
        sort(nums.begin()+1,nums.end());
        min+=nums[1]+nums[2];
        return min;
    }
};