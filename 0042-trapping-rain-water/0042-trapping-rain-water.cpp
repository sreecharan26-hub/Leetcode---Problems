class Solution {
public:
    int trap(vector<int>& nums) {
        int n = nums.size();
        if(n == 0){
            return 0;
        }
        vector<int>pref(n),suff(n);

        pref[0]=nums[0];
        for(int i=1;i<n;i++){
            pref[i]=max(pref[i-1],nums[i]);
        }
        suff[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
            suff[i]=max(suff[i+1],nums[i]);
        }
        int total = 0;
        for(int i=0;i<n;i++){
            if(nums[i]<pref[i] and nums[i]<suff[i]){
                total+=min(pref[i],suff[i])-nums[i];
            }
        }
        return total;
    }
};