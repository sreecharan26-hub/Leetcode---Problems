class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n = nums.size();
        vector<int>v;
        sort(nums.begin(),nums.end());
        for(int i=1;i<n;i++){
            if(nums[i]-nums[i-1]>1){
                for(int j = nums[i-1]+1;j<nums[i];j++){
                    v.push_back(j);
                }
            }
            
        }
        return v;
    }
};