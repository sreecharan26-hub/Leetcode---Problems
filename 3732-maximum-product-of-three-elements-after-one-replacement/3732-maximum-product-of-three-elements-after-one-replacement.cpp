class Solution {
public:
    long long maxProduct(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        long long x = 100000;

        long long a = nums[0];
        long long b = nums[1];
        long long c = nums[n-2];
        long long d = nums[n-1];

        return max({a*b*x, c*d*x , a*d*(-x)});
    }
};