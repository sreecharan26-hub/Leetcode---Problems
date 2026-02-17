class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int i=0;
        int j=1;
        int cnt =0;
        while(j<n){
            if(i==j or nums[j]-nums[i]<k){
                j++;
            }
            else if(nums[j]-nums[i]>k){
                i++;
            }
            else{
                cnt++;
                i++;
                j++;
                while(j<n and nums[j]==nums[j-1]){
                    j++;
                }
            }
        }
        return cnt;

    }
};