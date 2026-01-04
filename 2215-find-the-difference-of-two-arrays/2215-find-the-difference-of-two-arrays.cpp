class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        set<int>s1(nums1.begin(),nums1.end());
        set<int>s2(nums2.begin(),nums2.end());
        vector<int>a,b;
        for(auto i:s1){
            if(s2.find(i)==s2.end()){
                a.push_back(i);
            }
        }
        for(auto j:s2){
            if(s1.find(j)==s1.end()){
                b.push_back(j);
            }
        }
        return {a,b};
    }
};