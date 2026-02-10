class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int ans =0;
        for(int i=0;i<n;i++){
            int cnt=0;
            int j=0;
            while(j<n){
                if(nums[i]==nums[j]){
                    cnt++;
                }
                j++;
            }
            if(cnt%k==0){
                ans+=nums[i];
            }
        }
        return ans;
    }
};