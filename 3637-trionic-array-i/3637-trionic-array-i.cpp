class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int n = nums.size();
        if(n<4){
            return false;
        }
        int i = 0;
        while(i+1<n and nums[i]<nums[i+1]){
            i++;
        }
        if(i==0 or i==n-1){
            return false;
        }
        int dec = i;
        while(i+1<n and nums[i]>nums[i+1]){
            i++;
        }
        if(i==dec or i==n-1){
            return false;
        }
        while(i+1<n and nums[i]<nums[i+1]){
            i++;
        }
        if(i==n-1){
            return true;
        }

        return false;
    }
};