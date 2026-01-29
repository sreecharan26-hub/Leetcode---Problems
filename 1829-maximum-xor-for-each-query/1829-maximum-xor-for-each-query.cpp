    class Solution {
    public:
        vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
            int n = nums.size();
            vector<int>v;
            int total = 0;
            for(auto i :nums){
                total^=i;
            }
            int max = pow(2,maximumBit)-1;
            for(int i=n-1;i>=0;i--){
                int k = total^max;
                v.push_back(k);
                total^=nums[i];
            }
            return v;

        }
    };