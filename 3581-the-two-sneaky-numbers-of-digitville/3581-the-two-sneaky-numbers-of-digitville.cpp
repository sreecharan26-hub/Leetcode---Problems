class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        map<int,int> mpp;
        vector<int> v;

        for(auto i : nums){
            mpp[i]++;
        }
        for(auto it : mpp){
            if(it.second>1){
                v.push_back(it.first);
            }
        }
        return v;


    }
};