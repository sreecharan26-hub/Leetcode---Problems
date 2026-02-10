class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;
        for(auto i : nums){
            mpp[i]++;
        }
        int ans = 0;
        for(auto i : mpp){
            if(i.second%k==0){
                ans+=i.first*i.second;
            }
        }
        return ans;
    }
};