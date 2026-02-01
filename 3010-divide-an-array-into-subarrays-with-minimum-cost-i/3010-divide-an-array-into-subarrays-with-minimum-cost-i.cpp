class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int n = nums.size();
        int ans = INT_MAX;
        for (int i = 0; i <= n - 3; i++) {
            for (int j = i + 1; j <= n - 2; j++) {
                int a = INT_MAX;
                int b = INT_MAX;
                for (int k = i + 1; k <= j; k++) {
                    a = min(a, nums[k]);
                }
                for (int k = j + 1; k < n; k++) {
                    b = min(b, nums[k]);
                }
                int cost = nums[0] + a + b;
                ans = min(ans, cost);
            }
        }

        return ans;
    }
};