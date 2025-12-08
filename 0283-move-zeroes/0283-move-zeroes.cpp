class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        vector<int> v;
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                v.push_back(nums[i]);
            }
        }
        int a = v.size();
        for(int i=0;i<a;i++){
            nums[i]=v[i];
        }
        for(int i=a;i<n;i++){
            nums[i]=0;
        }
    }
};