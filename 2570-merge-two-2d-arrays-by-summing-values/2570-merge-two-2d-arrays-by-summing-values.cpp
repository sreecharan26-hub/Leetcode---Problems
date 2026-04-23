class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        map<int,int>mp;
        for(auto i : nums1){
            mp[i[0]]+=i[1];
        }
        for(auto i : nums2){
            mp[i[0]]+=i[1];
        }
        vector<vector<int>>v;
        for(auto i : mp){
            v.push_back({i.first,i.second});
        }
        return v;
    }
};