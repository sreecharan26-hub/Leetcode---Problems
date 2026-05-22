class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        int n = nums.size();
        vector<int>v(2*n);
        for(int i=0;i<n;i++){
            v[i]=nums[i];
            v[i+n]=nums[n-i-1];
        }
        return v;
    }
};