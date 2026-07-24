class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> st;
        unordered_set<int> ans;

        if(nums.size()==1){
            return 1;
        }
        for(auto i : nums){
            ans.insert(i);
        }
        for(int i=0;i<n;i++){
            for (int j = i + 1; j < n; j++) {
                st.insert(nums[i]^nums[j]);
            }
        }
        for(auto i : st){
            for(auto x : nums){
                ans.insert(i^x);
            }
        }
        return ans.size();

    }
};