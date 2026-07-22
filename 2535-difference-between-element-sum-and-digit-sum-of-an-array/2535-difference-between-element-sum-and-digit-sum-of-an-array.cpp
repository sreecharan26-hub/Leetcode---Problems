class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int n = nums.size();
        int sum= 0;
        int ans = 0;
        for(auto i: nums){
            sum+=i;
        }
        int sum2= 0;
        for(int i=0;i<n;i++){
            while(nums[i]>0){
                int x = nums[i]%10;
                sum2+=x;
                nums[i]/=10;
            }
        }
        return abs(sum-sum2);
    }
};