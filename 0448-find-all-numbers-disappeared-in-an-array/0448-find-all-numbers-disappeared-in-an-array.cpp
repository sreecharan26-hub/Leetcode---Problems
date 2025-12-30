class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        map<int, int> mpp;
        for (auto i : nums) {
            mpp[i]++;
        }
        vector<int> v;
        for (int i = 1; i <= n; i++) {
            if (mpp.find(i) == mpp.end()) {
                v.push_back(i);
            }
        }

        return v;
    }
};