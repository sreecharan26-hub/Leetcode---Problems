class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int a=-1,b=-1;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==target){
                if(a==-1){
                    a=i;
                }
                b=i;
            }
        }
        return {a,b};
    }
};