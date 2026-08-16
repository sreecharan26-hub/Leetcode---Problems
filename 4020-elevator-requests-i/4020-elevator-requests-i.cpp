class Solution {
public:
    int elevatorRequests(int n, vector<int>& nums) {
        int a = nums.size();
        int sum = nums[0];
        for(int i=1;i<a;i++){
            sum+=abs(nums[i]-nums[i-1]);
        }
        return sum;
    }
};