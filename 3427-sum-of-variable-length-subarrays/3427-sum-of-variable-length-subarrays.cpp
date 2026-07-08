class Solution {
public:
    int subarraySum(vector<int>& nums) {
        int n = nums.size();
       
        int ans =0;
        for(int i=0;i<n;i++){
            int a = max(0,i-nums[i]);
            int sum  = 0;
            for(int j=a;j<=i;j++){
                sum+=nums[j];
            }
             ans+=sum;
        }

        return ans;
    }
};