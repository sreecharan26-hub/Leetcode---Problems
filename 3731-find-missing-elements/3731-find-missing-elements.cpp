class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        vector<int>v;
        for(int i=0;i<n-1;i++){
            int curr = nums[i]+1;
            while(curr<nums[i+1]){
                v.push_back(curr);
                curr++;
            }
        }
        return v;
    }
};