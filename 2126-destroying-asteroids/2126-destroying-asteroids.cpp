class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        long long a = mass;
        for(int i=0;i<n;i++){
            if(nums[i]<=a){
                a+=nums[i];
            }
            else{
                return false;
            }
        }
        return true;
    }
};