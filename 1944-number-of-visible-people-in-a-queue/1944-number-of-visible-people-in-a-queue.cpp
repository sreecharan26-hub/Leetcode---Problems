class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& nums) {
        int n = nums.size();
        vector<int>v(n,0);
        stack<int>st;
        for(int i=n-1;i>=0;i--){
            while(!st.empty() and st.top()<nums[i]){
                st.pop();
                v[i]++;
            }
            if(!st.empty()){
                v[i]++;
            }
            st.push(nums[i]);
        }
        return v;
    }
};