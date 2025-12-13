class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        map<int, int> mpp;
        for (auto i : nums) {
            mpp[i]++;
            if (mpp[i] > n / 2) {
                return i;
            }
        }
        return -1;
    }
};