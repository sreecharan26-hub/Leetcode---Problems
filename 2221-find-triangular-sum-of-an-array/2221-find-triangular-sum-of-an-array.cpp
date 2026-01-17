class Solution {
public:
    int triangularSum(vector<int>& nums) {
        int n= nums.size();
        while(n>1){
             vector<int>v;
            for(int i=0;i<n-1;i++){
                v.push_back((nums[i]+nums[i+1])%10);
            }
            nums=v;
            n=nums.size();
        }
        return nums[0];
    }
};