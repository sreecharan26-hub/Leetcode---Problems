class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& nums, int k) {
        int n = nums.size();
        int a = *max_element(nums.begin(),nums.end());
        int maxi = a;
        vector<bool>v;
        for(int i=0;i<n;i++){
            if(nums[i]+k>=maxi){
                v.push_back(true);
            }
            else{
                 v.push_back(false);
            }
        }
        return v;
    }
};