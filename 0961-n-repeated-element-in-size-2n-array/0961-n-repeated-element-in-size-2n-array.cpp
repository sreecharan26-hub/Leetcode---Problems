class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n = nums.size();
        if(nums[0]==nums[1]) return nums[0];
        if(nums[n-1]==nums[0]) return nums[0];
        for(int i=2;i<n;i++){
            if(nums[i]==nums[i-1] or nums[i]==nums[i-2]){
                return nums[i];
            }
        }
        return -1;
    }
};