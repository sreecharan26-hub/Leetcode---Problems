class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        
        int n = nums.size();
        vector<int>v(n,-1);
        for(int i=0;i<n;i++){
            for(int j= i+1;j<i+n;j++){
                int idx = j%n;
                if(nums[idx]>nums[i]){
                    v[i]=nums[idx];
                    break;
                }
            }
        }
        return v;
    }
};