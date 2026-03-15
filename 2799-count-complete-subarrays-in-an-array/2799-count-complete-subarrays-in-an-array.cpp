class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> st(nums.begin(), nums.end());
        int len = st.size();
        unordered_map<int, int> mp;
        int l = 0;
        int ans = 0;
        for (int r = 0; r < n; r++) {
            mp[nums[r]]++;

            while (mp.size() == len) {
                ans += n - r;

                mp[nums[l]]--;
                if (mp[nums[l]] == 0) {
                    mp.erase(nums[l]);
                }
                l++;
            }
        }
        return ans;
    }
};