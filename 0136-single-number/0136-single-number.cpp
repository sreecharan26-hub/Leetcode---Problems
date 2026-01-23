class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int>mpp;
        for(auto i : nums){
            mpp[i]++;
        }
        vector<int>v;
        for(auto i : mpp){
            if(i.second==1){
                v.push_back(i.first);
            }
        }
        return v[0];

    }
};