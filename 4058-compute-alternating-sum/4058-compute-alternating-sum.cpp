class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        int i = 0;
        int j = 1;
        while(i<n){
            sum+=nums[i];
            if(j<n){
                sum-=nums[j];
            }
            i+=2;
            j+=2;
        }
        return sum;
        
    }
};