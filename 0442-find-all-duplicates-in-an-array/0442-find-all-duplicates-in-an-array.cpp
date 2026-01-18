class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        vector<int> v;
        for(int i=0;i<n-1;i++){
            if(nums[i]==nums[i+1]){
                v.push_back(nums[i]);
            }
        }
        return v;
        
    }
};