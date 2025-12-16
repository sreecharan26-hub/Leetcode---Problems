class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int, int> mpp;
        mpp[0] = 1;
        int presum = 0, cnt = 0;
        for (auto i : nums) {
            presum += i;
            int a = presum - k;
            cnt += mpp[a];
            mpp[presum] += 1;
        }
        return cnt;
    }
};