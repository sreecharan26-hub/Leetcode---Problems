class Solution {
public:
    double average(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int sum = 0;
        for(int i=1;i<n-1;i++){
            sum+=nums[i];
        }
    
    return (double)sum/(n-2);
    }
};