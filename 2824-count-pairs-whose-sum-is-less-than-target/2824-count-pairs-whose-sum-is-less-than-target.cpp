class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int l=0,r=n-1;
        int cnt = 0;
        while(l<r){
            if(nums[l]+nums[r]<target){
                cnt+=(r-l);
                l++;
            }
            else{
                r--;
            }
        }
        return cnt;

    }
};