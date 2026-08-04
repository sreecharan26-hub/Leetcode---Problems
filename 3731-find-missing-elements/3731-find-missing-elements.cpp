class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n = nums.size();
        vector<int>v;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-1;i++){
            int a = nums[i];
            while(a+1<nums[i+1]){
                v.push_back(a+1);
                a++;
            }
        }
        return v;
    }
};