class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        set<double>st;
        int i=0,j=n-1;
        while(i<j){
            st.insert(nums[i]+nums[j]);
            i++;
            j--;
        }
        return st.size();
    }
};