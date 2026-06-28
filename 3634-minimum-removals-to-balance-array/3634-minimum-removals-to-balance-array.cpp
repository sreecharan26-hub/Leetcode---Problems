class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());

        int n = nums.size();
        int ans = n;
        int j = 0;

        for (int i = 0; i < n; i++) {
            j = max(j, i);

            while (j < n && 1LL * nums[i] * k >= nums[j]) {
                j++;
            }

            ans = min(ans, n - (j - i));
        }

        return ans;
    }
};