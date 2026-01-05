class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,vector<int>>mpp;
        vector<vector<int>>v;

        for(int i=0;i<n ;i++){
            int size = nums[i];
            mpp[size].push_back(i);

            if(mpp[size].size()==size){
                v.push_back(mpp[size]);
                mpp[size].clear();
            }
        }
        return v;

    }
};