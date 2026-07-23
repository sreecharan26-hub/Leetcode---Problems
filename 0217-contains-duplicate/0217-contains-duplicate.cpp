class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size(); //4
        map<int,int> mpp;
        for(int i = 0;i<n;i++){
           mpp[nums[i]]++;
        }

        for(auto i:mpp){
            if(i.second >= 2){
                return true;
            }
        }
        return false;
    }
};