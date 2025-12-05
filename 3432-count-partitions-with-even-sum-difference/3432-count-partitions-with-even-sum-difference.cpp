class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int n = nums.size();
        int total_sum = 0;
        for(auto i:nums){
            total_sum += i;
        }

        int sum =0;
        int cnt=0;
        for(int i=0;i<n-1;i++){
            sum += nums[i];
            int diff = total_sum - sum;
            if((sum-diff) % 2 == 0){
                cnt++;
            }
        }

        return cnt;
    }
};