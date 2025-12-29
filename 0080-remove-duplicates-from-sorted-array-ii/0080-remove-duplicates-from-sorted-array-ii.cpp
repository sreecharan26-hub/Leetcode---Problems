class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();

        map<int, int> mpp;
        for (auto i : nums) {
            mpp[i]++;
        }
        int cnt = 0;
        for (auto it : mpp) {
            int times = min(2, it.second);
            while (times--) {
                nums[cnt++] = it.first;
            }
        }
        return cnt;
    }
};