class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(nums[i] == nums[i+1]){
                return nums[i];
            }
            if(i+2<n and nums[i]==nums[i+2]){
                return nums[i];
            }
            if(i+3<n and nums[i]==nums[i+3]){
                return nums[i];
            }
        }
        return -1;
    }
};