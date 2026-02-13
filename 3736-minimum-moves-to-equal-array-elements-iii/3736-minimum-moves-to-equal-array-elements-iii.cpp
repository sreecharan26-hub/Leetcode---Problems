class Solution {
public:
    int minMoves(vector<int>& nums) {
        if(nums.size()==1){
            return 0;
        }
        // int a = max_element(nums.begin(),nums.end());
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int ans = 0;
        for(int i=0;i<n;i++){
           int a = nums[n-1];
           ans+=a-nums[i];
        }
        return ans;
    }
};