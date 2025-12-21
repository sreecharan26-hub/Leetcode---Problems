class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        int maxi = INT_MIN;
        int idx =0;
        for(int i=0;i<n;i++){
            if(nums[i]>maxi){
                maxi = nums[i];
                idx=i;
            }
        }
        return idx;
    }
};