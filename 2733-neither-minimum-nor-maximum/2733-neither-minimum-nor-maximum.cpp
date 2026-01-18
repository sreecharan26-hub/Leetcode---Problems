class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        
        if(n==2 or n==1 or n==0){
            return -1;
        }
        return nums[1];
    }
};