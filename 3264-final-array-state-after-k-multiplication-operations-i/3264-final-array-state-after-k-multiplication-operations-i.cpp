class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        int n = nums.size();
        while(k--){
            int mini = 0;
            for(int i=1;i<n;i++){
                if(nums[i]<nums[mini]){
                    mini = i;
                }
            }
            nums[mini]*=multiplier;
        }
        return nums;
    }
};