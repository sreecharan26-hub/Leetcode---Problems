class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>> ans;
        map<int, int> mpp;
        for (auto i : nums) {
            mpp[i]++;
        }
        while (true) {
            vector<int> v;
            for (auto &it : mpp) {
                if (it.second > 0) {
                    v.push_back(it.first);
                    it.second--;
                }
            }
            if (v.size() == 0)
                break;
            ans.push_back(v);
        }

        return ans;
    }
};