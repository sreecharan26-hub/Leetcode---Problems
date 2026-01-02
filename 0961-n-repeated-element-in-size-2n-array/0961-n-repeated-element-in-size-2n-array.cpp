class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n = nums.size();
        map<int,int>mpp;
        for(auto i:nums){
            mpp[i]++;
            if(mpp[i]>1){
                return i;
            }
        }
        return -1;
    }
};