class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int j=0;
        int cnt = INT_MAX;
        for(int i=0;i<n;i++){
            if(j<i){
                j=i;
            }
            while(j<n and 1LL*nums[i]*k>= nums[j]){
                j++;
            }
            cnt=min(cnt,n-(j-i));
        }
        return cnt;
    }
};