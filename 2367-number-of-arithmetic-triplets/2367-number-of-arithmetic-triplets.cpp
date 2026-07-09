class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        unordered_set<int>st(nums.begin(),nums.end());
        int cnt =0;
        for(auto i : nums){
            if(st.count(i+diff) and st.count(i+2*diff)){
                cnt++;
            }
        }
        return cnt;
    }
};