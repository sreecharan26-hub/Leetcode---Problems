class Solution {
public:
int a(vector<int>&nums,int k){
    if(k<0){
        return 0;
    }
        int n = nums.size();
        int l=0,r=0,cnt=0,sum=0;
        while(r<n){
            sum+=nums[r]%2;
            while(sum>k){
                sum-=nums[l]%2;
                l++;
            }
            cnt+=(r-l+1);
            r++;
        }
        return cnt;
}
        int numberOfSubarrays(vector<int>& nums, int k) {
            return a(nums,k)-a(nums,k-1);
    }
};