class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> v;
        for(auto i: nums){
            v.push_back(i);
        }
        sort(v.begin(),v.end());
        for(int i=0;i<nums.size();i++){
            nums[i]=v[i];
        }
    }
};