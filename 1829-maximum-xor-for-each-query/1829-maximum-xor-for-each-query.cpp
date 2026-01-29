class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        int n = nums.size();
        vector<int> v;
        int a = 0;
        for(auto i : nums){
            a^=i;
        }
        int b = (1<<maximumBit)-1;
        for(int i=0;i<n;i++){
            v.push_back(a^b);
            a^=nums[n-1-i];
        }
        return v;
    }
};