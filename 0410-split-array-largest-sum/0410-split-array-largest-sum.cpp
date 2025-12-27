class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int n = nums.size();
        int low = *max_element(nums.begin(),nums.end());
        int high = 0;
        for(auto i :nums){
            high+=i;
        }
        while(low<= high){
            int mid = (low+high)/2;
            int subarray = 1,sum=0;
            for(int i=0;i<n;i++){
                if(sum+nums[i]>mid){
                    subarray++;
                    sum = nums[i];
                }
                else{
                    sum+=nums[i];
                }
            }
            if(subarray<=k){
                high = mid-1;
            }
            else{
                low = mid +1;
            }
        }
        return low;
    }
};