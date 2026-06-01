class Solution {
public:
    int minimumCost(vector<int>& nums) {
        sort(nums.rbegin(), nums.rend());
        int n = nums.size();
        int sum = 0;
        for (int i = 0; i < n; i++) {
            if ((i + 1) % 3 != 0) {
                sum += nums[i];
            }
        }
        return sum;
    }
};