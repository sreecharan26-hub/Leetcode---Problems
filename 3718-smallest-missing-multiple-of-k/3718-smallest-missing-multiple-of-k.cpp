class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int>v;
        for(int i=1;i<=n;i++){
            v.push_back(i*k);
        }
        for(int i =0;i<n;i++){
            int j;
            for(j=0;j<n;j++){
                if(v[i]==nums[j]){
                    break;
                }
            }
            if(j==n){
                return v[i];
            }
        }
        return (n+1)*k;
    }
};