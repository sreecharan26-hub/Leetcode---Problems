class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int n = nums.size();
        vector<int>v(n);
        for(int i=0;i<n;i++){
            int idx = ((i+nums[i]%n)+n)%n;
            v[i]=nums[idx];
        }
        return v;
    }
};