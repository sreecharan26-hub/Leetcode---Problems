class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.rbegin(),nums.rend());
        return nums[k-1];
    }
};