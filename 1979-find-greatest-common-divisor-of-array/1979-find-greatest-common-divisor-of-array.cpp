class Solution {
public:
    int findGCD(vector<int>& nums) {
        int n = *max_element(nums.begin(),nums.end());
        int m = *min_element(nums.begin(),nums.end());

        return gcd(m,n);
    }
};