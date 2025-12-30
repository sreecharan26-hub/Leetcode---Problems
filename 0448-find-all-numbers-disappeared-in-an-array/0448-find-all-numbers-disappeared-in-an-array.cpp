class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        vector<int> v;
        int ans = 1;
        for(int i=0;i<n;i++){
            if(nums[i]==ans){
                ans++;
            }
            else if(nums[i]>ans){
               v.push_back(ans);
               ans++;
               i--; 
            }
        }
        while(ans <= n){
            v.push_back(ans);
            ans++;
        }
        return v;
    }
};