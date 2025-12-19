class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(nums[j]==target){
                    return j;
                }
            }
        }
        return -1;
    }
};