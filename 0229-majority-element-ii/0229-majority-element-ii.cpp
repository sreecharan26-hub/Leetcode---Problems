class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        map<int,int>mpp;
        vector<int> v;
        int min = (n/3)+1;
        for(auto i: nums){
            mpp[i]++;
            if(mpp[i]==min){
                v.push_back(i);
            }
        }
        return v;
    }
};