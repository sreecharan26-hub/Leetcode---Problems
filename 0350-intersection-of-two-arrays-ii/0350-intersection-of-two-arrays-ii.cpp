class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>mpp;
        vector<int>v;
        for(auto i : nums1){
            mpp[i]++;
        }
        for(auto j : nums2){
            if(mpp[j]>0){
                v.push_back(j);
                mpp[j]--;
            }
        }
        return v;
    }
};